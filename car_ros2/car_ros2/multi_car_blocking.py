import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped, Point, PolygonStamped, Point32, TwistStamped
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker

import numpy as np

from tf_transformations import quaternion_from_euler, euler_matrix

from car_dynamics.models_jax import DynamicBicycleModel, DynamicParams
from car_dynamics.envs.car3 import OffroadCar
from car_dynamics.controllers_jax import WaypointGenerator
from std_msgs.msg import Float64, Int8
import torch
import time
import jax
import jax.numpy as jnp
key = jax.random.PRNGKey(0)
import pickle
import argparse
from mpc_controller import mpc

print("DEVICE", jax.devices())

DT = 0.1
DT_torch = 0.1
DELAY = 1
H = 8
i_start = 30
EP_LEN = 500

# trajectory_type = "counter oval"
MPC = True
VIS = False
trajectory_type = "berlin_2018"
SIM = 'numerical' # 'numerical' or 'unity'


if SIM == 'numerical' :
    trajectory_type = "../../simulators/params-num.yaml"
    LF = 0.12
    LR = 0.24
    L = LF+LR


DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")


parser = argparse.ArgumentParser()
parser.add_argument('--exp_name', default='none', type=str, help='Name of the experiment')

args = parser.parse_args()

model_params_single = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp1 = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))



exp_name = args.exp_name

if MPC :
    exp_name = exp_name + '_mpc'
dynamics_single = DynamicBicycleModel(model_params_single)
dynamics_single_opp = DynamicBicycleModel(model_params_single_opp)
dynamics_single_opp1 = DynamicBicycleModel(model_params_single_opp)

dynamics_single.reset()
dynamics_single_opp.reset()
dynamics_single_opp1.reset()


waypoint_generator = WaypointGenerator(trajectory_type, DT, H, 2.)
waypoint_generator_opp = WaypointGenerator(trajectory_type, DT, H, 1.)
waypoint_generator_opp1 = WaypointGenerator(trajectory_type, DT, H, 1.)


done = False

if SIM == 'numerical' :
    env = OffroadCar({}, dynamics_single)
    env_opp = OffroadCar({}, dynamics_single_opp)
    env_opp1 = OffroadCar({}, dynamics_single_opp1)
    obs = env.reset(pose=[3.,5.,-np.pi/2.-0.72])
    obs_opp = env_opp.reset(pose=[0.,0.,-np.pi/2.-0.5])
    obs_opp1 = env_opp1.reset(pose=[-2.,-6.,-np.pi/2.-0.3])





curr_steer = 0.
class CarNode(Node):
    def __init__(self):
        # super().__init__('car_node_')
        if VIS :
            self.path_pub_ = self.create_publisher(Path, 'path', 1)
            self.path_pub_nn = self.create_publisher(Path, 'path_nn', 1)
            self.path_pub_nn_opp = self.create_publisher(Path, 'path_nn_opp', 1)
            self.path_pub_nn_opp1 = self.create_publisher(Path, 'path_nn_opp1', 1)
            self.waypoint_list_pub_ = self.create_publisher(Path, 'waypoint_list', 1)
            self.left_boundary_pub_ = self.create_publisher(Path, 'left_boundary', 1)
            self.right_boundary_pub_ = self.create_publisher(Path, 'right_boundary', 1)
            self.raceline_pub_ = self.create_publisher(Path, 'raceline', 1)
            self.ref_trajectory_pub_ = self.create_publisher(Path, 'ref_trajectory', 1)
            self.pose_pub_ = self.create_publisher(PoseWithCovarianceStamped, 'pose', 1)
            self.odom_pub_ = self.create_publisher(Odometry, 'odom', 1)
            self.odom_opp_pub_ = self.create_publisher(Odometry, 'odom_opp', 1)
            self.odom_opp1_pub_ = self.create_publisher(Odometry, 'odom_opp1', 1)
        # self.timer_ = self.create_timer(DT/3., self.timer_callback)
        if VIS :
            self.slow_timer_ = self.create_timer(10.0, self.slow_timer_callback)
        if VIS :
            self.throttle_pub_ = self.create_publisher(Float64, 'throttle', 1)
            self.steer_pub_ = self.create_publisher(Float64, 'steer', 1)
            self.trajectory_array_pub_ = self.create_publisher(MarkerArray, 'trajectory_array', 1)
            self.body_pub_ = self.create_publisher(PolygonStamped, 'body', 1)
            self.body_opp_pub_ = self.create_publisher(PolygonStamped, 'body_opp', 1)
            self.body_opp1_pub_ = self.create_publisher(PolygonStamped, 'body_opp1', 1)
            self.status_pub_ = self.create_publisher(Int8, 'status', 1)
        self.raceline = waypoint_generator.raceline
        self.ep_no = 0
        self.raceline_dev = waypoint_generator.raceline_dev
        
        self.last_i = -1
        self.last_i_opp = -1
        self.last_i_opp1 = -1
        self.L = LF+LR
        
        self.curr_speed_factor = 1.
        self.curr_lookahead_factor = 0.24
        self.curr_sf1 = 0.2
        self.curr_sf2 = 0.2
        self.blocking = 0.2
        
        self.curr_speed_factor_opp = 1.
        self.curr_lookahead_factor_opp = 0.15
        self.curr_sf1_opp = 0.1
        self.curr_sf2_opp = 0.5
        self.blocking_opp = 0.2
        
        self.curr_speed_factor_opp1 = 1.
        self.curr_lookahead_factor_opp1 = 0.15
        self.curr_sf1_opp1 = 0.1
        self.curr_sf2_opp1 = 0.5
        self.blocking_opp1 = 0.2
        
            
        
        self.states = []
        self.cmds = []
        self.i = 0
        self.curr_t_counter = 0.
        self.unity_state_new = [0.,0.,0.,0.,0.,0.]
        self.dataset = []
        self.buffer = []
    
    def has_collided(self,px,py,theta,px_opp,py_opp,theta_opp,L=0.18,B=0.12):
        dx = px-px_opp 
        dy = py-py_opp
        d_long = dx*np.cos(theta) + dy*np.sin(theta)
        d_lat = dy*np.cos(theta) - dx*np.sin(theta)
        cost1 = np.abs(d_long) - 2*L
        cost2 = np.abs(d_lat) - 2*B
        d_long_opp = dx*np.cos(theta_opp) + dy*np.sin(theta_opp)
        d_lat_opp = dy*np.cos(theta_opp) - dx*np.sin(theta_opp)
        cost3 = np.abs(d_long_opp) - 2*L
        cost4 = np.abs(d_lat_opp) - 2*B
        cost = (cost1<0)*(cost2<0)*(cost1*cost2) + (cost3<0)*(cost4<0)*(cost3*cost4)
        return cost


    def cbf_filter(self,s,s_opp,vs,vs_opp,sf1=0.3,sf2=0.3,lookahead_factor=1.0) :
        eff_s = s_opp-s + (vs_opp-vs)*lookahead_factor
        factor = sf1*np.exp(-sf2*np.abs(eff_s))
        return factor
    
    
    def obs_state(self):
        return env.obs_state()
    
    def obs_state_opp(self):
        return env_opp.obs_state()
    
    def obs_state_opp1(self):
        return env_opp1.obs_state()
    
    def timer_callback(self):
        global obs, obs_opp, obs_opp1, action, curr_steer, s, s_opp, s_opp1
        try:
            ti = time.time()
            if SIM == 'unity' and not self.pose_received :
                return
            if SIM == 'unity' and not self.vel_received :
                return
            
            self.i += 1
            # print(self.i)
            # RESTART_PARAMS
            if self.i > EP_LEN :
                print("Ego progress: ", s)
                print("Opp1 progress: ", s_opp)
                print("Opp2 progress: ", s_opp1)
                self.last_i = -1
                self.last_i_opp = -1
                self.last_i_opp1 = -1
                self.ep_no += 1
                self.i = 1
                waypoint_generator.last_i = -1
                waypoint_generator_opp.last_i = -1
                waypoint_generator_opp1.last_i = -1
                choice = np.random.choice([0,1,2])
                if choice == 0 :
                    obs_opp1 = env_opp1.reset(pose=[3.,5.,-np.pi/2.-0.72])
                    obs_opp = env_opp.reset(pose=[0.,0.,-np.pi/2.-0.5])
                    obs = env.reset(pose=[-2.,-6.,-np.pi/2.-0.5])
                if choice == 1 :
                    obs_opp1 = env_opp1.reset(pose=[3.,5.,-np.pi/2.-0.72])
                    obs = env.reset(pose=[0.,0.,-np.pi/2.-0.5])
                    obs_opp = env_opp.reset(pose=[-2.,-6.,-np.pi/2.-0.5])
                if choice == 2 :
                    obs = env.reset(pose=[3.,5.,-np.pi/2.-0.72])
                    obs_opp1 = env_opp1.reset(pose=[0.,0.,-np.pi/2.-0.5])
                    obs_opp = env_opp.reset(pose=[-2.,-6.,-np.pi/2.-0.5])
                if self.ep_no%3 == 0:
                    self.curr_sf1 = np.random.uniform(0.1,0.5)
                    self.curr_sf2 = np.random.uniform(0.1,0.5)
                    self.curr_lookahead_factor = np.random.uniform(0.12,0.5)
                    self.curr_speed_factor = np.random.uniform(0.85,1.1)
                    self.blocking = np.random.uniform(0.,1.0)
                elif self.ep_no%3 == 1:
                    self.curr_sf1_opp = np.random.uniform(0.1,0.5)
                    self.curr_sf2_opp = np.random.uniform(0.1,0.5)
                    self.curr_lookahead_factor_opp = np.random.uniform(0.12,0.5)
                    self.curr_speed_factor_opp = np.random.uniform(0.85,1.1)
                    self.blocking_opp = np.random.uniform(0.,1.0)
                else :
                    self.curr_sf1_opp1 = np.random.uniform(0.1,0.5)
                    self.curr_sf2_opp1 = np.random.uniform(0.1,0.5)
                    self.curr_lookahead_factor_opp1 = np.random.uniform(0.12,0.5)
                    self.curr_speed_factor_opp1 = np.random.uniform(0.85,1.1)
                    self.blocking_opp1 = np.random.uniform(0.,1.0)
                print("ep_no:", self.ep_no)
                print("ego params: ", self.curr_sf1, self.curr_sf2, self.curr_lookahead_factor, self.curr_speed_factor)
                print("opp params: ", self.curr_sf1_opp, self.curr_sf2_opp, self.curr_lookahead_factor_opp, self.curr_speed_factor_opp)
                print("opp1 params: ", self.curr_sf1_opp1, self.curr_sf2_opp1, self.curr_lookahead_factor_opp1, self.curr_speed_factor_opp1)
                self.dataset.append(np.array(self.buffer))
                self.buffer = []
                pickle.dump(np.array(self.dataset), open('data/'+exp_name+'.pkl','wb'))
                
            if self.ep_no > 242 :
                print("Saving dataset")
                pickle.dump(np.array(self.dataset), open('data/'+exp_name+'.pkl','wb'))
                exit(0)
            mu_factor = 1.
            status = Int8()
            target_pos_tensor, _, s, e = waypoint_generator.generate(jnp.array(obs[:5]),dt=DT_torch,mu_factor=mu_factor)
            target_pos_tensor_opp, _, s_opp, e_opp = waypoint_generator_opp.generate(jnp.array(obs_opp[:5]),dt=DT_torch,mu_factor=mu_factor)
            target_pos_tensor_opp1, _, s_opp1, e_opp1 = waypoint_generator_opp1.generate(jnp.array(obs_opp1[:5]),dt=DT_torch,mu_factor=mu_factor)
            
            curv = target_pos_tensor[0,3]
            curv_opp = target_pos_tensor_opp[0,3]
            curv_opp1 = target_pos_tensor_opp1[0,3]

            curv_lookahead = target_pos_tensor[-1,3]
            curv_opp_lookahead = target_pos_tensor_opp[-1,3]
            curv_opp1_lookahead = target_pos_tensor_opp1[-1,3]
            target_pos_list = np.array(target_pos_tensor)
            
            action = np.array([0.,0.])
            px, py, psi, vx, vy, omega = self.obs_state().tolist()
            theta = target_pos_list[0,2]
            theta_diff = np.arctan2(np.sin(theta-psi),np.cos(theta-psi))
            px_opp, py_opp, psi_opp, vx_opp, vy_opp, omega_opp = self.obs_state_opp().tolist()
            px_opp1, py_opp1, psi_opp1, vx_opp1, vy_opp1, omega_opp1 = self.obs_state_opp1().tolist()
            theta_opp = target_pos_tensor_opp[0,2]
            theta_diff_opp = np.arctan2(np.sin(theta_opp-psi_opp),np.cos(theta_opp-psi_opp))
            theta_opp1 = target_pos_tensor_opp1[0,2]
            theta_diff_opp1 = np.arctan2(np.sin(theta_opp1-psi_opp1),np.cos(theta_opp1-psi_opp1))
            if self.i > i_start :
                if np.isnan(vx) or np.isnan(vy) or np.isnan(omega) :
                    print("State received a nan value")
                    exit(0) 
                self.states.append([vx,vy,omega])
                if np.isnan(action[0]) or np.isnan(action[1]) :
                    print("Action received a nan value")
                    exit(0)
                self.cmds.append([action[0], action[1]])
            
            if VIS :
                q = quaternion_from_euler(0, 0, psi)
                now = self.get_clock().now().to_msg()
                
                pose = PoseWithCovarianceStamped()
                pose.header.frame_id = 'map'
                pose.header.stamp = now
                pose.pose.pose.position.x = px
                pose.pose.pose.position.y = py
                pose.pose.pose.orientation.x = q[0]
                pose.pose.pose.orientation.y = q[1]
                pose.pose.pose.orientation.z = q[2]
                pose.pose.pose.orientation.w = q[3]
                self.pose_pub_.publish(pose)
                
                
                path = Path()
                path.header.frame_id = 'map'
                path.header.stamp = now
                for i in range(target_pos_list.shape[0]):
                    pose = PoseStamped()
                    pose.header.frame_id = 'map'
                    pose.pose.position.x = float(target_pos_list[i][0])
                    pose.pose.position.y = float(target_pos_list[i][1])
                    path.poses.append(pose)
                self.ref_trajectory_pub_.publish(path)
                
                mppi_path = Path()
                mppi_path.header.frame_id = 'map'
                mppi_path.header.stamp = now
                self.status_pub_.publish(status)
                
                
            if SIM == 'numerical':
                if MPC :
                    steer, throttle, _, _, self.last_i = self.mpc((px,py,psi),(s,e,vx),(s_opp,e_opp,vx_opp),(s_opp1,e_opp1,vx_opp1),self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor*2,self.curr_speed_factor**2,self.blocking,last_i=self.last_i)
                else :
                    steer, throttle, _, _, self.last_i = self.pure_pursuit((px,py,psi),(s,e,vx),(s_opp,e_opp,vx_opp),(s_opp1,e_opp1,vx_opp1),self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,last_i=self.last_i)
                # steer = self.cbf_override([s,e,-theta_diff,vx,curv],[s_opp,e_opp,-theta_diff_opp,vx_opp,curv_opp],steer)#,sf1=self.curr_sf1,sf2=self.curr_sf2,lookahead_factor=self.curr_lookahead_factor,L=self.L)
                if abs(e) > 0.55 :
                    env.state.vx *= np.exp(-3*(abs(e)-0.55))
                    env.state.vy *= np.exp(-3*(abs(e)-0.55))
                    env.state.psi += (1-np.exp(-(abs(e)-0.55)))*(theta_diff)
                    steer += (-np.sign(e) - steer)*(1-np.exp(-3*(abs(e)-0.55)))
                # print(steer)
                if abs(theta_diff) > 1. :
                    throttle+=0.2
                obs, reward, done, info = env.step(np.array([throttle,steer]))
                collision = self.has_collided(px,py,psi,px_opp,py_opp,psi_opp)
                collision1 = self.has_collided(px,py,psi,px_opp1,py_opp1,psi_opp1)
                collision2 = self.has_collided(px_opp,py_opp,psi_opp,px_opp1,py_opp1,psi_opp1)
                
                if MPC :
                    steer, throttle, _, _, self.last_i_opp = self.mpc((px_opp,py_opp,psi_opp),(s_opp,e_opp,vx_opp),(s,e,vx),(s_opp1,e_opp1,vx_opp1),self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp*2,self.curr_speed_factor_opp**2,self.blocking_opp,last_i=self.last_i_opp)
                else :
                    steer, throttle, _, _, self.last_i_opp = self.pure_pursuit((px_opp,py_opp,psi_opp),(s_opp,e_opp,vx_opp),(s,e,vx),(s_opp1,e_opp1,vx_opp1),self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp,self.curr_speed_factor_opp,self.blocking_opp,last_i=self.last_i_opp)
                
                if abs(e_opp) > 0.55 :
                    env_opp.state.vx *= np.exp(-3*(abs(e_opp)-0.55))
                    env_opp.state.vy *= np.exp(-3*(abs(e_opp)-0.55))
                    env_opp.state.psi += (1-np.exp(-(abs(e_opp)-0.55)))*(theta_diff_opp)
                    steer += (-np.sign(e_opp) - steer)*(1-np.exp(-3*(abs(e_opp)-0.55)))
                
                if abs(theta_diff_opp) > 1. :
                    throttle+=0.2
                action_opp = np.array([throttle,steer])
                obs_opp, reward, done, info = env_opp.step(action_opp)
                
                if MPC :
                    steer, throttle, _, _, self.last_i_opp1 = self.mpc((px_opp1,py_opp1,psi_opp1),(s_opp1,e_opp1,vx_opp1),(s,e,vx),(s_opp,e_opp,vx_opp),self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1*2,self.curr_speed_factor_opp1**2,self.blocking_opp1,last_i=self.last_i_opp1)
                else :
                    steer, throttle, _, _, self.last_i_opp1 = self.pure_pursuit((px_opp1,py_opp1,psi_opp1),(s_opp1,e_opp1,vx_opp1),(s,e,vx),(s_opp,e_opp,vx_opp),self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1,self.curr_speed_factor_opp1,self.blocking_opp1,last_i=self.last_i_opp1)
                
                if abs(e_opp1) > 0.55 :
                    env_opp1.state.vx *= np.exp(-3*(abs(e_opp1)-0.55))
                    env_opp1.state.vy *= np.exp(-3*(abs(e_opp1)-0.55))
                    env_opp1.state.psi += (1-np.exp(-(abs(e_opp1)-0.55)))*(theta_diff_opp1)
                    steer += (-np.sign(e_opp1) - steer)*(1-np.exp(-3*(abs(e_opp1)-0.55)))
                if abs(theta_diff_opp1) > 1. :
                    throttle+=0.2
                action_opp1 = np.array([throttle,steer])
                obs_opp1, reward, done, info = env_opp1.step(action_opp1)
                
                

                state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp,self.curr_speed_factor_opp,self.blocking_opp,self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1,self.curr_speed_factor_opp1,self.blocking_opp1]

                diff_s = s_opp-s
                if diff_s < -75. :
                    diff_s += 150.
                if diff_s > 75. :
                    diff_s -= 150.
                
                diff_s1 = s_opp1-s
                if diff_s1 < -75. :
                    diff_s1 += 150.
                if diff_s1 > 75. :
                    diff_s1 -= 150.
                
                diff_s2 = s_opp1-s_opp
                if diff_s2 < -75. :
                    diff_s2 += 150.
                if diff_s2 > 75. :
                    diff_s2 -= 150.

                if diff_s > 0. :
                    env.state.vx *= np.exp(-20*collision)
                    env.state.vy *= np.exp(-20*collision)
                    env_opp.state.vx *= np.exp(-5*collision)
                    env_opp.state.vy *= np.exp(-5*collision)
                else :
                    env.state.vx *= np.exp(-5*collision)
                    env.state.vy *= np.exp(-5*collision)
                    env_opp.state.vx *= np.exp(-20*collision)
                    env_opp.state.vy *= np.exp(-20*collision)
                if collision > 0. :
                    print("Collision detected", s,s_opp,e,e_opp)
                
                if diff_s1 > 0. :
                    env.state.vx *= np.exp(-20*collision1)
                    env.state.vy *= np.exp(-20*collision1)
                    env_opp1.state.vx *= np.exp(-5*collision1)
                    env_opp1.state.vy *= np.exp(-5*collision1)
                else :
                    env.state.vx *= np.exp(-5*collision1)
                    env.state.vy *= np.exp(-5*collision1)
                    env_opp1.state.vx *= np.exp(-20*collision1)
                    env_opp1.state.vy *= np.exp(-20*collision1)
                if collision1 > 0. :
                    print("Collision detected", s,s_opp1,e,e_opp1)
                
                if diff_s2 > 0. :
                    env_opp.state.vx *= np.exp(-20*collision2)
                    env_opp.state.vy *= np.exp(-20*collision2)
                    env_opp1.state.vx *= np.exp(-5*collision2)
                    env_opp1.state.vy *= np.exp(-5*collision2)
                else :
                    env_opp.state.vx *= np.exp(-5*collision2)
                    env_opp.state.vy *= np.exp(-5*collision2)
                    env_opp1.state.vx *= np.exp(-20*collision2)
                    env_opp1.state.vy *= np.exp(-20*collision2)
                if collision2 > 0. :
                    print("Collision detected", s_opp,s_opp1,e_opp,e_opp1)
                
                self.buffer.append(state_obs)
            w_pred_ = 0.
            _w_pred = 0.
            # print(self.i, s, s_opp, s_opp1)
            if VIS :
                odom = Odometry()
                odom.header.frame_id = 'map'
                odom.header.stamp = now
                odom.pose.pose.position.x = px
                odom.pose.pose.position.y = py
                odom.pose.pose.orientation.x = q[0]
                odom.pose.pose.orientation.y = q[1]
                odom.pose.pose.orientation.z = q[2]
                odom.pose.pose.orientation.w = q[3]
                odom.twist.twist.linear.x = vx
                odom.twist.twist.linear.y = vy
                odom.twist.twist.angular.z = omega
                odom.twist.twist.angular.x = w_pred_
                odom.twist.twist.angular.y = _w_pred
                self.odom_pub_.publish(odom)
                
                # Odom for opponent
                q_opp = quaternion_from_euler(0, 0, psi_opp)
                
                odom = Odometry()
                odom.header.frame_id = 'map'
                odom.header.stamp = now
                odom.pose.pose.position.x = px_opp
                odom.pose.pose.position.y = py_opp
                odom.pose.pose.orientation.x = q_opp[0]
                odom.pose.pose.orientation.y = q_opp[1]
                odom.pose.pose.orientation.z = q_opp[2]
                odom.pose.pose.orientation.w = q_opp[3]
                odom.twist.twist.linear.x = vx_opp
                odom.twist.twist.linear.y = vy_opp
                odom.twist.twist.angular.z = omega_opp
                self.odom_opp_pub_.publish(odom)
                
                
                # print(np.array(mppi_info['action']).shape)
                
                throttle = Float64()
                throttle.data = float(action_opp[0])
                self.throttle_pub_.publish(throttle)
                steer = Float64()
                curr_steer += 1.0*(float(action_opp[1]) - curr_steer) 
                steer.data = curr_steer #float(action[1])
                self.steer_pub_.publish(steer)
                
                # body polygon
                pts = np.array([
                    [LF, L/3],
                    [LF, -L/3],
                    [-LR, -L/3],
                    [-LR, L/3],
                ])
                # transform to world frame
                R = euler_matrix(0, 0, psi)[:2, :2]
                pts = np.dot(R, pts.T).T
                pts += np.array([px, py])
                body = PolygonStamped()
                body.header.frame_id = 'map'
                body.header.stamp = now
                for i in range(pts.shape[0]):
                    p = Point32()
                    p.x = float(pts[i, 0])
                    p.y = float(pts[i, 1])
                    p.z = 0.
                    body.polygon.points.append(p)
                self.body_pub_.publish(body)
                
                # body polygon
                pts = np.array([
                    [LF, L/3],
                    [LF, -L/3],
                    [-LR, -L/3],
                    [-LR, L/3],
                ])
                # transform to world frame
                R = euler_matrix(0, 0, psi_opp)[:2, :2]
                pts = np.dot(R, pts.T).T
                pts += np.array([px_opp, py_opp])
                body = PolygonStamped()
                body.header.frame_id = 'map'
                body.header.stamp = now
                for i in range(pts.shape[0]):
                    p = Point32()
                    p.x = float(pts[i, 0])
                    p.y = float(pts[i, 1])
                    p.z = 0.
                    body.polygon.points.append(p)
                self.body_opp_pub_.publish(body)
                
                # body polygon
                pts = np.array([
                    [LF, L/3],
                    [LF, -L/3],
                    [-LR, -L/3],
                    [-LR, L/3],
                ])
                # transform to world frame
                R = euler_matrix(0, 0, psi_opp1)[:2, :2]
                pts = np.dot(R, pts.T).T
                pts += np.array([px_opp1, py_opp1])
                body = PolygonStamped()
                body.header.frame_id = 'map'
                body.header.stamp = now
                for i in range(pts.shape[0]):
                    p = Point32()
                    p.x = float(pts[i, 0])
                    p.y = float(pts[i, 1])
                    p.z = 0.
                    body.polygon.points.append(p)
                self.body_opp1_pub_.publish(body)
            
            tf = time.time()
        # complete try 
        except Exception as e:
            print("Error in callback: ", e)
            
    def get_curvature(self, x1, y1, x2, y2, x3, y3):
        a = np.sqrt((x2-x1)**2 + (y2-y1)**2)
        b = np.sqrt((x3-x2)**2 + (y3-y2)**2)
        c = np.sqrt((x3-x1)**2 + (y3-y1)**2)
        s = (a+b+c)/2
        return 4*np.sqrt(s*(s-a)*(s-b)*(s-c))/(a*b*c)
    
    
    def mpc(self,xyt,pose,pose_opp,pose_opp1,sf1,sf2,lookahead_factor,v_factor,blocking_factor,gap=0.06,last_i = -1) :
        # print("a",lookahead_factor)
        s,e,v = pose
        # print(last_i)
        x,y,theta = xyt
        s_opp,e_opp,v_opp = pose_opp
        s_opp1,e_opp1,v_opp1 = pose_opp1
        
        # Find the closest point on raceline from x,y
        if last_i == -1 :
            dists = np.sqrt((self.raceline[:,0]-x)**2 + (self.raceline[:,1]-y)**2)
            closest_idx = np.argmin(dists)
        else :
            raceline_ext = np.concatenate((self.raceline[last_i:,:],self.raceline[:20,:]),axis=0)
            dists = np.sqrt((raceline_ext[:20,0]-x)**2 + (raceline_ext[:20,1]-y)**2)
            closest_idx = (np.argmin(dists) + last_i)%len(self.raceline)
        N_ = len(self.raceline)
        _e = self.raceline_dev[closest_idx]
        _e_opp = self.raceline_dev[(closest_idx+int((s_opp-s)/gap))%N_]
        _e_opp1 = self.raceline_dev[(closest_idx+int((s_opp1-s)/gap))%N_]
        e = e + _e
        e_opp = e_opp + _e_opp
        e_opp1 = e_opp1 + _e_opp1
        curv = self.get_curvature(self.raceline[closest_idx-1,0],self.raceline[closest_idx-1,1],self.raceline[closest_idx,0],self.raceline[closest_idx,1],self.raceline[(closest_idx+1)%len(self.raceline),0],self.raceline[(closest_idx+1)%len(self.raceline),1])
        curr_idx = (closest_idx+1)%len(self.raceline)
        next_idx = (curr_idx+1)%len(self.raceline)
        next_dist = np.sqrt((self.raceline[next_idx,0]-self.raceline[curr_idx,0])**2 + (self.raceline[next_idx,1]-self.raceline[curr_idx,1])**2)
        traj = []
        dist_target = 0
        for t in np.arange(0.1,1.05,0.1) :
            dist_target += v_factor*self.raceline[curr_idx,2]*0.1
            
            shift2 = self.calc_shift(s,s_opp,v,v_opp,sf1,sf2,t)
            if e>e_opp :
                shift2 = np.abs(shift2)
            else :
                shift2 = -np.abs(shift2)
            shift1 = self.calc_shift(s,s_opp1,v,v_opp1,sf1,sf2,t)
            if e>e_opp1 :
                shift1 = np.abs(shift1)
            else :
                shift1 = -np.abs(shift1)
            shift = shift1 + shift2
            
            if abs(shift2) > abs(shift1) :
                if (shift+e_opp)*shift < 0. : 
                    shift = 0.
                else :
                    if abs(shift2) > 0.03:
                        shift += e_opp
            else :
                if (shift+e_opp1)*shift < 0. :
                    shift = 0.
                else :
                    if abs(shift1) > 0.03:
                        shift += e_opp1
            
            if abs(shift2) > abs(shift1) :
                if (shift+e_opp)*shift < 0. : 
                    shift = 0.
                else :
                    if abs(shift2) > 0.03:
                        shift += e_opp
            else :
                if (shift+e_opp1)*shift < 0. :
                    shift = 0.
                else :
                    if abs(shift1) > 0.03:
                        shift += e_opp1
        
            # Find the closest agent  
            dist_from_opp = s-s_opp
            if dist_from_opp < -75. : 
                dist_from_opp += 150. 
            if dist_from_opp > 75. :  
                dist_from_opp -= 150.
            dist_from_opp1 = s-s_opp1
            if dist_from_opp1 < -75. :
                dist_from_opp1 += 150.
            if dist_from_opp1 > 75. :
                dist_from_opp1 -= 150.
            if dist_from_opp>0 and (dist_from_opp < dist_from_opp1 or dist_from_opp1 < 0) :
                bf = 1 - np.exp(-blocking_factor*max(v_opp-v,0.))
                shift = shift + (e_opp-shift)*bf*self.calc_shift(s,s_opp,v,v_opp,sf1,sf2,t)/sf1
            elif dist_from_opp1>0 and (dist_from_opp1 < dist_from_opp or dist_from_opp < 0) :
                bf = 1 - np.exp(-blocking_factor*max(v_opp1-v,0.))
                shift = shift + (e_opp1-shift)*bf*self.calc_shift(s,s_opp1,v,v_opp1,sf1,sf2,t)/sf1
            
            while dist_target - next_dist > 0. :
                dist_target -= next_dist
                curr_idx = next_idx
                next_idx = (next_idx+1)%len(self.raceline)
                next_dist = np.sqrt((self.raceline[next_idx,0]-self.raceline[curr_idx,0])**2 + (self.raceline[next_idx,1]-self.raceline[curr_idx,1])**2)
            ratio = dist_target/next_dist
            pt = (1.-ratio)*self.raceline[next_idx,:2] + ratio*self.raceline[curr_idx,:2]
            theta_traj = np.arctan2(self.raceline[next_idx,1]-self.raceline[curr_idx,1],self.raceline[next_idx,0]-self.raceline[curr_idx,0]) + np.pi/2.
            shifted_pt = pt + shift*np.array([np.cos(theta_traj),np.sin(theta_traj)])
            traj.append(shifted_pt)
        # closest_point = self.raceline[closest_idx]
        lookahead_distance = lookahead_factor*self.raceline[curr_idx,2]
        N = len(self.raceline)
        lookahead_idx = int(closest_idx+5)%N
        lookahead_point = self.raceline[lookahead_idx]
        curv_lookahead = self.get_curvature(self.raceline[lookahead_idx-1,0],self.raceline[lookahead_idx-1,1],self.raceline[lookahead_idx,0],self.raceline[lookahead_idx,1],self.raceline[(lookahead_idx+1)%N,0],self.raceline[(lookahead_idx+1)%N,1])
        theta_traj = np.arctan2(self.raceline[(lookahead_idx+1)%N,1]-self.raceline[lookahead_idx,1],self.raceline[(lookahead_idx+1)%N,0]-self.raceline[lookahead_idx,0]) + np.pi/2.
        shifted_point = lookahead_point + shift*np.array([np.cos(theta_traj),np.sin(theta_traj),0.])
        
        throttle, steer = mpc([x,y,theta,v],np.array(traj),lookahead_factor=lookahead_factor)
        
        alpha = theta - (theta_traj - np.pi/2.)
        if alpha > np.pi :
            alpha -= 2*np.pi
        if alpha < -np.pi :
            alpha += 2*np.pi
        if np.abs(alpha) > np.pi/6 :
            steer = -np.sign(alpha) 
        return steer, throttle, curv, curv_lookahead, closest_idx
    
    def calc_shift(self,s,s_opp,vs,vs_opp,sf1=0.4,sf2=0.1,t=1.0) :
        if vs == vs_opp :
            return 0.
        ttc = (s_opp-s)+(vs_opp-vs)*t
        eff_s = ttc 
        factor = sf1*np.exp(-sf2*np.abs(eff_s)**2)
        return factor
    
    def pure_pursuit(self,xyt,pose,pose_opp,pose_opp1,sf1,sf2,lookahead_factor,v_factor,blocking_factor,gap=0.06,last_i = -1) :
        s,e,v = pose
        x,y,theta = xyt
        s_opp,e_opp,v_opp = pose_opp
        s_opp1,e_opp1,v_opp1 = pose_opp1
        if last_i == -1 :
            dists = np.sqrt((self.raceline[:,0]-x)**2 + (self.raceline[:,1]-y)**2)
            closest_idx = np.argmin(dists)
        else :
            raceline_ext = np.concatenate((self.raceline[last_i:,:],self.raceline[:20,:]),axis=0)
            dists = np.sqrt((raceline_ext[:20,0]-x)**2 + (raceline_ext[:20,1]-y)**2)
            closest_idx = (np.argmin(dists) + last_i)%len(self.raceline)
        N_ = len(self.raceline)
        _e = self.raceline_dev[closest_idx]
        _e_opp = self.raceline_dev[(closest_idx+int((s_opp-s)/gap))%N_]
        _e_opp1 = self.raceline_dev[(closest_idx+int((s_opp1-s)/gap))%N_]
        e = e + _e
        e_opp = e_opp + _e_opp
        e_opp1 = e_opp1 + _e_opp1
        shift2 = self.calc_shift(s,s_opp,v,v_opp,sf1,sf2,0.5)
        if e>e_opp :
            shift2 = np.abs(shift2)
        else :
            shift2 = -np.abs(shift2)
        shift1 = self.calc_shift(s,s_opp1,v,v_opp1,sf1,sf2,0.5)
        if e>e_opp1 :
            shift1 = np.abs(shift1)
        else :
            shift1 = -np.abs(shift1)
        shift = shift1 + shift2
        
        if abs(shift2) > abs(shift1) :
            if (shift+e_opp)*shift < 0. : 
                shift = 0.
            else :
                if abs(shift2) > 0.03:
                    shift += e_opp
        else :
            if (shift+e_opp1)*shift < 0. :
                shift = 0.
            else :
                if abs(shift1) > 0.03:
                    shift += e_opp1
        
        # Find the closest agent 
        dist_from_opp = s-s_opp
        if dist_from_opp < -75. :
            dist_from_opp += 150.
        if dist_from_opp > 75. :
            dist_from_opp -= 150.
        dist_from_opp1 = s-s_opp1
        if dist_from_opp1 < -75. :
            dist_from_opp1 += 150.
        if dist_from_opp1 > 75. :
            dist_from_opp1 -= 150.
        if dist_from_opp>0 and (dist_from_opp < dist_from_opp1 or dist_from_opp1 < 0) :
            bf = 1 - np.exp(-blocking_factor*max(v_opp-v,0.))
            shift = shift + (e_opp-shift)*bf*self.calc_shift(s,s_opp,v,v_opp,sf1,sf2,0.5)/sf1
        elif dist_from_opp1>0 and (dist_from_opp1 < dist_from_opp or dist_from_opp < 0) :
            bf = 1 - np.exp(-blocking_factor*max(v_opp1-v,0.))
            shift = shift + (e_opp1-shift)*bf*self.calc_shift(s,s_opp1,v,v_opp1,sf1,sf2,0.5)/sf1
        
        # Find the closest point on raceline from x,y
        curv = self.get_curvature(self.raceline[closest_idx-1,0],self.raceline[closest_idx-1,1],self.raceline[closest_idx,0],self.raceline[closest_idx,1],self.raceline[(closest_idx+1)%len(self.raceline),0],self.raceline[(closest_idx+1)%len(self.raceline),1])
        # closest_point = self.raceline[closest_idx]
        lookahead_distance = lookahead_factor*self.raceline[closest_idx,2]
        N = len(self.raceline)
        lookahead_idx = int(closest_idx+1+lookahead_distance//gap)%N
        e_ = -self.raceline_dev[lookahead_idx]
        if e_+shift > 0.44 :
            shift = 0.44 - e_
        if e_+shift < -0.44 :
            shift = -0.44 - e_
        lookahead_point = self.raceline[lookahead_idx]
        curv_lookahead = self.get_curvature(self.raceline[lookahead_idx-1,0],self.raceline[lookahead_idx-1,1],self.raceline[lookahead_idx,0],self.raceline[lookahead_idx,1],self.raceline[(lookahead_idx+1)%N,0],self.raceline[(lookahead_idx+1)%N,1])
        theta_traj = np.arctan2(self.raceline[(lookahead_idx+1)%N,1]-self.raceline[lookahead_idx,1],self.raceline[(lookahead_idx+1)%N,0]-self.raceline[lookahead_idx,0]) + np.pi/2.
        shifted_point = lookahead_point + shift*np.array([np.cos(theta_traj),np.sin(theta_traj),0.])
        
        v_target = v_factor*lookahead_point[2]
        throttle = (v_target-v) + 9.81*0.1*4.65/20.
        # Pure pursuit controller
        _dx = shifted_point[0]-x
        _dy = shifted_point[1]-y
        
        dx = _dx*np.cos(theta) + _dy*np.sin(theta)
        dy = _dy*np.cos(theta) - _dx*np.sin(theta)
        alpha = np.arctan2(dy,dx)
        steer = 2*self.L*dy/(dx**2 + dy**2)
        if np.abs(alpha) > np.pi/2 :
            steer = np.sign(dy) 
        return steer, throttle, curv, curv_lookahead, closest_idx
        
    def slow_timer_callback(self):
        # publish waypoint_list as path
        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(waypoint_generator.waypoint_list_np.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(waypoint_generator.waypoint_list_np[i][0])
            pose.pose.position.y = float(waypoint_generator.waypoint_list_np[i][1])
            path.poses.append(pose)
        self.waypoint_list_pub_.publish(path)

        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(waypoint_generator.left_boundary.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(waypoint_generator.left_boundary[i][0])
            pose.pose.position.y = float(waypoint_generator.left_boundary[i][1])
            path.poses.append(pose)
        self.left_boundary_pub_.publish(path)

        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(waypoint_generator.right_boundary.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(waypoint_generator.right_boundary[i][0])
            pose.pose.position.y = float(waypoint_generator.right_boundary[i][1])
            path.poses.append(pose)
        self.right_boundary_pub_.publish(path)

        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(waypoint_generator.raceline.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(waypoint_generator.raceline[i][0])
            pose.pose.position.y = float(waypoint_generator.raceline[i][1])
            path.poses.append(pose)
        self.raceline_pub_.publish(path)

        
def main():
    rclpy.init()
    car_node = CarNode()
    while rclpy.ok():
        car_node.timer_callback()
        # time.sleep(0.01)
    # rclpy.spin(car_node)
    car_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
