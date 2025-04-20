import scipy.interpolate
import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped, Point, PolygonStamped, Point32, TwistStamped
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker
import random
import yaml

import numpy as np
import matplotlib.pyplot as plt

from tf_transformations import quaternion_from_euler, euler_matrix

from car_dynamics.models_jax import DynamicBicycleModel, DynamicParams
from car_dynamics.controllers_torch import rollout_fn_select as rollout_fn_select_torch
from car_dynamics.controllers_torch import reward_track_fn, MPPIController as MPPIControllerTorch
from car_dynamics.controllers_jax import MPPIController, MPPIParams, rollout_fn_select
from car_dynamics.envs.car3 import OffroadCar
from car_dynamics.controllers_jax import WaypointGenerator
from std_msgs.msg import Float64, Int8
import torch.nn as nn
import torch.optim as optim
import torch
import time
import jax
import jax.numpy as jnp
key = jax.random.PRNGKey(0)
import pickle
import os
from ackermann_msgs.msg import AckermannDrive
import tf_transformations
import socket
import struct
import threading
import argparse
import scipy
import tqdm
from mpc_controller import mpc
from std_msgs.msg import String
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
print("DEVICE", jax.devices())

DT = 0.1
DT_torch = 0.1
DELAY = 2
N_ROLLOUTS = 10000
H = 8
SIGMA = 1.0
track_width = 1.
LON_THRES = 3.

EP_LEN = 500
EP_START = 0
EP_END = 100
RUN_SPEED = 2.
# FILENAME = 'racedata_ours_vs_mpc_vs_mpc_mpc.pkl'
FILENAME = 'recorded_races/racedata_ours_vs_mpc_vs_mpc_grad.pkl'

# trajectory_type = "counter oval"
trajectory_type = "berlin_2018"
SIM = 'numerical' # 'numerical' or 'unity' or 'vicon'


if SIM == 'numerical' :
    trajectory_type = "../../simulators/params-num.yaml"
    LF = 0.12
    LR = 0.24
    L = LF+LR

if SIM=='unity' :
    trajectory_type = "../../simulators/params.yaml"
    LF = 1.6
    LR = 1.5
    L = LF+LR

if SIM == 'unity' :
    SPEED = 10.0
else :
    SPEED = 2.

sigmas = torch.tensor([SIGMA] * 2)
a_cov_per_step = torch.diag(sigmas**2)
a_cov_init = a_cov_per_step.unsqueeze(0).repeat(H, 1, 1)
DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")

if SIM == 'unity' :
    yaml_contents = yaml.load(open(trajectory_type, 'r'), Loader=yaml.FullLoader)
    
    decay_start = yaml_contents['vehicle_params']['friction_decay_start']
    decay_rate = yaml_contents['vehicle_params']['friction_decay_rate']

AUGMENT = False
use_gt = True
HISTORY = 8
ART_DELAY = 0
MAX_DELAY = 7
new_delay_factor = 0.1
curr_delay = 0.
N_ensembles = 1
append_delay_type = 'OneHot' # 'OneHot' or 'Append'
LAST_LAYER_ADAPTATION = False
mass = 1.
I = 1.

parser = argparse.ArgumentParser()
parser.add_argument('--exp_name', default='none', type=str, help='Name of the experiment')

args = parser.parse_args()

model_params_single = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp1 = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))


exp_name = args.exp_name

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
frames = []

if SIM == 'numerical' :
    env = OffroadCar({}, dynamics_single)
    env_opp = OffroadCar({}, dynamics_single_opp)
    env_opp1 = OffroadCar({}, dynamics_single_opp1)
    obs = env.reset(pose=[3.,5.,-np.pi/2.-0.72])
    obs_opp = env_opp.reset(pose=[0.,0.,-np.pi/2.-0.5])
    obs_opp1 = env_opp1.reset(pose=[-2.,-6.,-np.pi/2.-0.3])

goal_list = []
target_list = []
action_list = []
mppi_action_list = []
obs_list = []


pos2d = []
target_list_all = []


curr_steer = 0.
class CarNode(Node):
    def __init__(self):
        super().__init__('car_node')
        self.path_pub_ = self.create_publisher(Path, 'path', 1)
        self.left_boundary_pub_ = self.create_publisher(Path, 'left_boundary', 1)
        self.right_boundary_pub_ = self.create_publisher(Path, 'right_boundary', 1)
        self.raceline_pub_ = self.create_publisher(Path, 'raceline', 1)
        self.ref_trajectory_pub_ = self.create_publisher(Path, 'ref_trajectory', 1)
        self.pose_pub_ = self.create_publisher(PoseWithCovarianceStamped, 'pose', 1)
        self.odom_pub_ = self.create_publisher(Odometry, 'odom', 1)
        self.odom_opp_pub_ = self.create_publisher(Odometry, 'odom_opp', 1)
        self.odom_opp1_pub_ = self.create_publisher(Odometry, 'odom_opp1', 1)
        self.timer_ = self.create_timer(DT/RUN_SPEED, self.timer_callback)
        self.slow_timer_ = self.create_timer(10.0, self.slow_timer_callback)
        self.throttle_pub_ = self.create_publisher(Float64, 'throttle', 1)
        self.steer_pub_ = self.create_publisher(Float64, 'steer', 1)
        self.body_pub_ = self.create_publisher(PolygonStamped, 'body', 1)
        self.body_opp_pub_ = self.create_publisher(PolygonStamped, 'body_opp', 1)
        self.body_opp1_pub_ = self.create_publisher(PolygonStamped, 'body_opp1', 1)
        self.status_pub_ = self.create_publisher(Int8, 'status', 1)
        self.raceline = waypoint_generator.raceline
        self.ep_no = EP_START
        self.raceline_dev = waypoint_generator.raceline_dev
        self.race_data = np.array(pickle.load(open(FILENAME,'rb')))
        # dx = self.race_data[:,1:] - self.race_data[:,:-1]
        # dists1 = np.linalg.norm(dx[:,:,:2],axis=2)
        # dists2 = np.linalg.norm(dx[:,:,3:5],axis=2)
        # dists3 = np.linalg.norm(dx[:,:,6:8],axis=2)
        # a1 = np.sum(dists1,axis=1)
        # a2 = np.sum(dists2,axis=1)
        # a3 = np.sum(dists3,axis=1)
        # for k in range(34):
        #     print(k, a1[k], a2[k], a3[k])
        # Publisher for the robot description
        # self.publisher = self.create_publisher(String, '/robot_description',1)
        self.tf_broadcaster = TransformBroadcaster(self)
        # Load the URDF file
        urdf_path = "car.urdf"  # Replace with your URDF file path

        try:
            with open(urdf_path, 'r') as urdf_file:
                urdf_content = urdf_file.read()
            self.get_logger().info(f"Successfully loaded URDF from {urdf_path}")
        except FileNotFoundError:
            self.get_logger().error(f"URDF file not found at {urdf_path}")
            urdf_content = ""
        self.urdf_content = urdf_content
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
        
        if SIM == 'unity' :
            self.unity_publisher_ = self.create_publisher(AckermannDrive, '/cmd', 10)
            self.ackermann_msg = AckermannDrive()
            self.unity_subscriber_ = self.create_subscription(PoseStamped, 'car_pose', self.unity_callback, 10)
            self.unity_subscriber_twist_ = self.create_subscription(TwistStamped, 'car_twist', self.unity_twist_callback, 10)
            self.unity_state = [yaml_contents['respawn_loc']['z'], yaml_contents['respawn_loc']['x'],0.,0.,0.,0.]
            self.pose_received = True
            self.vel_received = True
            self.mu_factor_pub_ = self.create_publisher(Float64, 'mu_factor', 1)
            
        
        self.i = 0
        self.curr_t_counter = 0.
        self.unity_state_new = [0.,0.,0.,0.,0.,0.]
        self.dataset = []
        
    
    
    def timer_callback(self):
        ti = time.time()
        # print(self.i)
        if SIM == 'unity' and not self.pose_received :
            return
        if SIM == 'unity' and not self.vel_received :
            return
        
        # print("iter:", self.i)
        # RESTART_PARAMS
        if self.i >= EP_LEN :
            self.ep_no += 1
            self.i = 1
            print("Race no ", self.ep_no)
            
        if self.ep_no > EP_END :
            exit(0)
        mu_factor = 1.
        if SIM == 'unity' :
            if self.i*DT > decay_start :
                mu_factor = 1. - (self.i*DT - decay_start)*decay_rate
            mu_msg = Float64()
            mu_msg.data = mu_factor
            self.mu_factor_pub_.publish(mu_msg)
        
        if SIM == 'unity':
            if self.i==1 :
                action = np.array([0.,0.])
                action[0] = -3.
                action[1] = -3.
            self.unity_state_new = self.unity_state.copy()
            obs = np.array(self.unity_state)
            self.ackermann_msg.acceleration = float(action[0])
            self.ackermann_msg.steering_angle = float(action[1])
            self.unity_publisher_.publish(self.ackermann_msg)
        
        obs = self.race_data[self.ep_no][self.i]
        self.i += 1

        px,py,psi,px_opp,py_opp,psi_opp,px_opp1,py_opp1,psi_opp1 = obs[:9]
        self.curr_sf1, self.curr_sf2, self.curr_lookahead_factor, self.curr_speed_factor, self.blocking = obs[9:14]
        self.curr_sf1_opp, self.curr_sf2_opp, self.curr_lookahead_factor_opp, self.curr_speed_factor_opp, self.blocking_opp = obs[14:19]
        self.curr_sf1_opp1, self.curr_sf2_opp1, self.curr_lookahead_factor_opp1, self.curr_speed_factor_opp1, self.blocking_opp1 = obs[19:24]
        # print("Speed factor", self.curr_speed_factor, self.curr_speed_factor_opp, self.curr_speed_factor_opp1)
        # print("Lookahead factor", self.curr_lookahead_factor, self.curr_lookahead_factor_opp, self.curr_lookahead_factor_opp1)
        throttle_, steer_ = obs[24:]
        q = quaternion_from_euler(0, 0, psi)
        q_opp = quaternion_from_euler(0, 0, psi_opp)
        q_opp1 = quaternion_from_euler(0, 0, psi_opp1)
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
        
        # Create a TransformStamped message
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "map"  # Parent frame
        t.child_frame_id = "base_link"  # Child frame (unique for each car)
        t.transform.translation.x = px #- 0.2*np.cos(psi)
        t.transform.translation.y = py #- 0.2*np.sin(psi)
        t.transform.translation.z = 0.
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]  # No rotation (identity quaternion)

        # Broadcast the transform
        self.tf_broadcaster.sendTransform(t)
        
        time.sleep(0.02)
        # Create a TransformStamped message
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "map"  # Parent frame
        t.child_frame_id = "base_link1"  # Child frame (unique for each car)
        t.transform.translation.x = px_opp #- 0.2*np.cos(psi)
        t.transform.translation.y = py_opp #- 0.2*np.sin(psi)
        t.transform.translation.z = 0.
        t.transform.rotation.x = q_opp[0]
        t.transform.rotation.y = q_opp[1]
        t.transform.rotation.z = q_opp[2]
        t.transform.rotation.w = q_opp[3]  # No rotation (identity quaternion)

        self.tf_broadcaster.sendTransform(t)
        
        time.sleep(0.02)
        # Create a TransformStamped message
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "map"  # Parent frame
        t.child_frame_id = "base_link2"  # Child frame (unique for each car)
        t.transform.translation.x = px_opp1 #- 0.2*np.cos(psi)
        t.transform.translation.y = py_opp1 #- 0.2*np.sin(psi)
        t.transform.translation.z = 0.
        t.transform.rotation.x = q_opp1[0]
        t.transform.rotation.y = q_opp1[1]
        t.transform.rotation.z = q_opp1[2]
        t.transform.rotation.w = q_opp1[3]  # No rotation (identity quaternion)


        # Broadcast the transform
        self.tf_broadcaster.sendTransform(t)
            
        odom = Odometry()
        odom.header.frame_id = 'map'
        odom.header.stamp = now
        odom.pose.pose.position.x = px
        odom.pose.pose.position.y = py
        odom.pose.pose.orientation.x = q[0]
        odom.pose.pose.orientation.y = q[1]
        odom.pose.pose.orientation.z = q[2]
        odom.pose.pose.orientation.w = q[3]
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
        self.odom_opp_pub_.publish(odom)
        
        # if self.urdf_content:
        #     msg = String()
        #     msg.data = self.urdf_content
        #     self.publisher.publish(msg)
            # self.get_logger().info("Published /robot_description")
        # else:
        #     self.get_logger().error("URDF content is empty; skipping publish.")

        # print(np.array(mppi_info['action']).shape)
        
        throttle = Float64()
        throttle.data = float(throttle_)
        self.throttle_pub_.publish(throttle)
        steer = Float64()
        steer.data = steer_ 
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
        # print("Time taken", tf-ti)
        if SIM == 'unity' :
            self.pose_received = False
            self.vel_received = False

    def slow_timer_callback(self):
        # publish waypoint_list as path
        # path = Path()
        # path.header.frame_id = 'map'
        # path.header.stamp = self.get_clock().now().to_msg()
        # for i in range(waypoint_generator.waypoint_list_np.shape[0]):
        #     pose = PoseStamped()
        #     pose.header.frame_id = 'map'
        #     pose.pose.position.x = float(waypoint_generator.waypoint_list_np[i][0])
        #     pose.pose.position.y = float(waypoint_generator.waypoint_list_np[i][1])
        #     path.poses.append(pose)
        # self.waypoint_list_pub_.publish(path)

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
    rclpy.spin(car_node)
    car_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
