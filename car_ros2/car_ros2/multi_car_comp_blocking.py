import scipy.interpolate
import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped, Point, PolygonStamped, Point32, TwistStamped
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
from visualization_msgs.msg import MarkerArray, Marker
import random
import yaml
from my_custom_msgs.msg import PolicyParams

import numpy as np
import matplotlib.pyplot as plt

from tf_transformations import quaternion_from_euler, euler_matrix
import casadi as ca


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
from model_arch import SimpleModel
from ackermann_msgs.msg import AckermannDrive
import tf_transformations
import socket
import struct
import threading
import argparse
import scipy
from mpc_controller import mpc
# from stable_baselines3 import PPO
print("DEVICE", jax.devices())

USE_OURS = True
RECORD_RACES = True 
K_linear = 100
N_steps_per_iter = 6
grad_rate = 0.00001
# IBR params
N = 10
dt_ibr = 0.1

# Dynamics equations (Bicycle model)
def vehicle_dynamics(xk, uk, ck, L=0.36,  Sa=0.36, Ta = 20./4.65, fr=1.):
    s = xk[0]
    e = xk[1]
    psi = xk[2]
    v = xk[3]
    a = uk[0]
    delta = uk[1]
    
    x_next = ca.vertcat(
        s + (v * ca.cos(psi))/(1-e*ck) * dt_ibr,
        e + v * ca.sin(psi) * dt_ibr,
        psi + ((v / L) * ca.tan(Sa*delta)-v*ck) * dt_ibr,
        v + (Ta * a - fr) * dt_ibr
    )
    return x_next

# Weight matrices for objective
Q = np.diag([0, 0.0, 0.3, 0])  # Penalize lateral error (e) and heading error (psi)
R = np.diag([1, 1])  # Penalize control inputs (a, delta)
vel_cost = 10
x_cost = 100
N_ibr = 3
# MPC definition
x = ca.MX.sym('x', 4, N+1)  # State variables [s, e, psi, v]
u = ca.MX.sym('u', 2, N)    # Control inputs [a, delta]
# Define parameters (initial state and target state)
x0_ = ca.MX.sym('x0', 4+2*N)         # Initial state
# ck = ca.MX.sym('ck', N+1)         # Initial state

opp_state_ = ca.MX.sym('target', (N+1)*2)  # Target state
target_state = np.array([0, 0, 0, 0])  # Reference state: [s, e, psi, v]

cost = 0
g = [] # constraints list
g.append(x[:,0] - x0_[:4])
for k in range(N):
    x_next = vehicle_dynamics(x[:, k], u[:, k],x0_[4+k], L=0.36)
    g.append(x[:, k+1] - x_next)  # Dynamics constraints
    # Calculate cost function: state deviation and control effort
    state_error = x[:, k] - target_state
    cost += ca.mtimes([state_error.T, Q, state_error])  # State cost
    cost += ca.mtimes([u[:, k].T, R, u[:, k]])  # Control cost
    # v_def = (x[3,k]-1.1*x0_[4+k+N])
    # cost += ca.exp(20*v_def)
    # cost += ca.if_else(v_def>0,vel_cost*v_def,0)
    cost += 10*x[1,k]**4
    # x_dif = ca.fabs(x[1,k]) - 0.3
    # cost += ca.if_else(x_dif>0,x_cost*x_dif,0)
    # cost += 
cost += -10*(x[0, N]-x[0,0])  # Award for more progress
for k in range(N):
    g.append((x[3,k]**2)*ca.tan(u[1,k]))
for k in range(N):
    g.append(x[3,k+1])
for k in range(N):
    g.append((x[0,k]-opp_state_[-2*(N+1)+k+1])**2+(x[0,k]-opp_state_[-(N+1)+k+1])**2)
# Define optimization variables and constraints
opt_variables = ca.vertcat(ca.reshape(x, -1, 1), ca.reshape(u, -1, 1))
opt_constraints = ca.vertcat(*g)

# Create NLP problem
nlp_prob = {'f': cost, 'x': opt_variables, 'g': opt_constraints, 'p': ca.vertcat(x0_, opp_state_)}

# Solver options
opts = {'ipopt.print_level': 0, 'print_time': 0, 'ipopt.max_iter': 500}

# Create the solver
solver = ca.nlpsol('solver', 'ipopt', nlp_prob, opts)

# Set up bounds (for simplicity, no bounds on states and controls here)
lbg = np.zeros((4 * (N + 1) + 3*N, 1))  # Equality constraint on dynamics
ubg = np.zeros((4 * (N + 1) + 3*N, 1))  # Equality constraint on dynamics


target_state = np.array([0, 0, 0, 10])
def mpc_ibr(x0,x0_opp, mu=1.6, g=9.81) :
    # print(x0,x0_opp)
    print("Using IBR?")
    print(x0[-20:])
    # x0[-10:] += 1.
    xT_opp = np.array([x0_opp[:2]]*(N+1))
    xT = np.array([x0[:2]]*(N+1))
    for i in range(N_ibr) :
        if i%2 == 0 :
            x0_ = np.array(x0)
            xT_ = np.array(xT_opp)
        else :
            x0_ = np.array(x0_opp)
            xT_ = np.array(xT)
        
        params = np.concatenate((x0_, xT_.flatten()))
        x_init = np.tile(x0_, (N+1, 1)).T
        u_init = np.zeros((2, N))
        initial_guess = ca.vertcat(ca.reshape(x_init[:4], -1, 1), ca.reshape(u_init, -1, 1))

        ubg[-3*N:-2*N] = mu*g*L
        lbg[-3*N:-2*N] = -mu*g*L
        ubg[-2*N:-N] = 1.04*x0_opp[-1]
        lbg[-N:] = 0.04
        ubg[-N:] = 500000.
        
        # Solve the NLP problem
        solution = solver(x0=initial_guess, lbg=lbg, ubg=ubg, p=params)

        # Extract the solution
        optimal_solution = solution['x']
        optimal_x = ca.reshape(optimal_solution[:4*(N+1)], 4, N+1).full()
        optimal_u = ca.reshape(optimal_solution[4*(N+1):], 2, N).full()
        if i%2 == 0 :
            xT = np.array(optimal_x)[:2,:]
            u = np.array(optimal_u)[:,0]
        else :
            xT_opp = np.array(optimal_x)[:2,:]
            u_opp = np.array(optimal_u)[:,0]
    # print(u, u_opp)
    print(x0_opp[2])
    if x0_opp[2] > 0.5 :
        u_opp[1] = -1.
        u_opp[0] = 0.5
        print("Triggered 1")
    if x0_opp[2] < -0.5 :
        u_opp[1] = 1. 
        u_opp[0] = 0.5
        print("Triggered 2")

    return u, u_opp

DT = 0.1
DT_torch = 0.1
DELAY = 1
N_ROLLOUTS = 10000
H = 9
SIGMA = 1.0
i_start = 30
N_lat_divs = 5
dist_long = 20
curv_cost = 10.
coll_cost = 100.
track_width = 1.
LON_THRES = 3.
EP_LEN = 500

# trajectory_type = "counter oval"
trajectory_type = "berlin_2018"
SIM = 'numerical' # 'numerical' or 'unity' or 'vicon'


if SIM == 'numerical' :
    trajectory_type = "../../simulators/params-num.yaml"
    LF = 0.12
    LR = 0.24
    L = LF+LR



DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")


parser = argparse.ArgumentParser()
parser.add_argument('--opp1', default='mpc', help='Choose from mpc, ours-low_data, ours-low_p, ours-high_p, rl, ibr')
parser.add_argument('--opp2', default='mpc', help='Choose from mpc, ours-low_data, ours-low_p, ours-high_p, rl, ibr')
parser.add_argument('--opt_style', default='grad', help='Choose from grad, linear, value_opt')
parser.add_argument('--rel', action='store_true', help='Whether to train on rel q models')
parser.add_argument('--mpc', action='store_true', help='Whether to run on MPC collected dataset')

args = parser.parse_args()

OPP_Stretegy = args.opp1 # ours-low_p or ours-low_data or rl or ibr
OPP1_Stretegy = args.opp2 # ours-low_p or ours-low_data or rl or ibr
OPT_STYLE = args.opt_style # 'grad' or 'linear' or 'value_opt'



model_params_single = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))
model_params_single_opp1 = DynamicParams(num_envs=1, DT=DT,Sa=0.34, Sb=-0., Ta=20., Tb=.0, mu=0.5,delay=DELAY)#random.randint(1,5))

    

exp_name = 'ours_vs_'+OPP_Stretegy+'_vs_'+OPP1_Stretegy+'_'+OPT_STYLE

if args.rel :
    exp_name += '_rel'
dynamics_single = DynamicBicycleModel(model_params_single)
dynamics_single_opp = DynamicBicycleModel(model_params_single_opp)
dynamics_single_opp1 = DynamicBicycleModel(model_params_single_opp1)

dynamics_single.reset()
dynamics_single_opp.reset()
dynamics_single_opp1.reset()


waypoint_generator = WaypointGenerator(trajectory_type, DT, H, 2.)
waypoint_generator_opp = WaypointGenerator(trajectory_type, DT, H, 1.)
waypoint_generator_opp1 = WaypointGenerator(trajectory_type, DT, H, 1.)



if SIM == 'numerical' :
    env = OffroadCar({}, dynamics_single)
    env_opp = OffroadCar({}, dynamics_single_opp)
    env_opp1 = OffroadCar({}, dynamics_single_opp1)
    obs = env.reset(pose=[3.,5.,-np.pi/2.-0.72])
    obs_opp = env_opp.reset(pose=[0.,0.,-np.pi/2.-0.5])
    obs_opp1 = env_opp1.reset(pose=[-2.,-6.,-np.pi/2.-0.5])


# Load trained model from model.pth
fs = 128
model = SimpleModel(39,[3*fs,3*fs,3*64],1)
V1 = SimpleModel(39,[128,128,64],1)
V2 = SimpleModel(39,[128,128,64],1)
V3 = SimpleModel(39,[128,128,64],1)
# print(torch.load('model_haha.pth').keys())
# model.load_state_dict(torch.load('model_p.pth'))
folder = 'p_models'
if args.rel :
    folder += '_rel'
suffix = ""
if args.mpc :
    suffix = "_mpc"
model.load_state_dict(torch.load(folder+'/model_multi_myopic'+suffix+'.pth'))
model.eval()
V1.load_state_dict(torch.load('q'+folder[1:]+'/model_multi0_myopic'+suffix+'.pth'))
V2.load_state_dict(torch.load('q'+folder[1:]+'/model_multi1_myopic'+suffix+'.pth'))
V3.load_state_dict(torch.load('q'+folder[1:]+'/model_multi2_myopic'+suffix+'.pth'))
# model = model
V1.eval()
V2.eval()
V3.eval()
# model = model.to(DEVICE)
model_opp = SimpleModel(39,[3*fs,3*fs,3*64],1)
model_opp1 = SimpleModel(39,[3*fs,3*fs,3*64],1)
# print(torch.load('model_haha.pth').keys())
# model.load_state_dict(torch.load('model_p.pth'))
if OPP_Stretegy == 'ours-low_data' :
    model_opp.load_state_dict(torch.load(folder+'/model_multi_small_myopic'+suffix+'.pth'))
elif OPP_Stretegy == 'ours-low_p' :
    model_opp.load_state_dict(torch.load(folder+'/model_multi_myopic_s'+suffix+'.pth'))
elif OPP_Stretegy == 'ours-high_p' :
    model_opp.load_state_dict(torch.load(folder+'/model_multi'+suffix+'.pth'))
elif OPP_Stretegy == 'rl' :
    model_opp = PPO.load("trained_policy"+str(9))
if OPP_Stretegy != 'rl' :
    model_opp.eval()

if OPP1_Stretegy == 'ours-low_data' :
    model_opp1.load_state_dict(torch.load(folder+'/model_multi_small_myopic'+suffix+'.pth'))
elif OPP1_Stretegy == 'ours-low_p' :
    model_opp1.load_state_dict(torch.load(folder+'/model_multi_myopic_s'+suffix+'.pth'))
elif OPP1_Stretegy == 'ours-high_p' :
    model_opp1.load_state_dict(torch.load(folder+'/model_multi'+suffix+'.pth'))
elif OPP_Stretegy == 'rl' :
    model_opp1 = PPO.load("trained_policy"+str(9))
if OPP_Stretegy != 'rl' :
    model_opp1.eval()

if args.rel :
    suffix += "_rel"
curr_steer = 0.
class CarNode(Node):
    def __init__(self):
        super().__init__('car_node')
        self.path_pub_ = self.create_publisher(Path, 'path', 1)
        self.path_pub_nn = self.create_publisher(Path, 'path_nn', 1)
        self.path_pub_nn_opp = self.create_publisher(Path, 'path_nn_opp', 1)
        self.path_pub_nn_opp1 = self.create_publisher(Path, 'path_nn_opp1', 1)
        self.waypoint_list_pub_ = self.create_publisher(Path, 'waypoint_list', 1)
        self.left_boundary_pub_ = self.create_publisher(Path, 'left_boundary', 1)
        self.right_boundary_pub_ = self.create_publisher(Path, 'right_boundary', 1)
        self.raceline_pub_ = self.create_publisher(Path, 'raceline', 1)
        self.policy_params_pub_ = self.create_publisher(PolicyParams, 'policy_params', 1)
        self.state_lattice_pub_ = self.create_publisher(Path, 'state_lattice', 1)
        self.ref_trajectory_pub_ = self.create_publisher(Path, 'ref_trajectory', 1)
        self.pose_pub_ = self.create_publisher(PoseWithCovarianceStamped, 'pose', 1)
        self.odom_pub_ = self.create_publisher(Odometry, 'odom', 1)
        self.odom_opp_pub_ = self.create_publisher(Odometry, 'odom_opp', 1)
        self.odom_opp1_pub_ = self.create_publisher(Odometry, 'odom_opp1', 1)
        self.timer_ = self.create_timer(DT/3., self.timer_callback)
        self.slow_timer_ = self.create_timer(10.0, self.slow_timer_callback)
        self.throttle_pub_ = self.create_publisher(Float64, 'throttle', 1)
        self.steer_pub_ = self.create_publisher(Float64, 'steer', 1)
        self.trajectory_array_pub_ = self.create_publisher(MarkerArray, 'trajectory_array', 1)
        self.body_pub_ = self.create_publisher(PolygonStamped, 'body', 1)
        self.body_opp_pub_ = self.create_publisher(PolygonStamped, 'body_opp', 1)
        self.body_opp1_pub_ = self.create_publisher(PolygonStamped, 'body_opp1', 1)
        self.status_pub_ = self.create_publisher(Int8, 'status', 1)
        self.raceline = waypoint_generator.raceline
        self.raceline_dev = waypoint_generator.raceline_dev
        self.ep_no = 0
        self.n_wins = [0,0,0]
        self.curr_speed_factor = 0.93
        self.curr_lookahead_factor = 0.35
        self.curr_sf1 = 0.4
        self.curr_sf2 = 0.2
        self.blocking = 0.

        self.last_i = -1
        self.last_i_opp = -1
        self.last_i_opp1 = -1
            
        self.L = LF+LR
             
        self.p = np.meshgrid(np.linspace(0.1,0.5,10),np.linspace(0.1,0.5,10),np.linspace(0.15,0.5,10),np.linspace(0.85,1.1,10))
        self.p = np.array(self.p).reshape(4,-1).T
        self.p = torch.tensor(self.p).float()
        self.regrets1 = []
        self.regrets2 = []
        self.regrets3 = []

        self.curr_speed_factor_opp = 0.87
        self.curr_lookahead_factor_opp = 0.25
        self.curr_sf1_opp = 0.3
        self.curr_sf2_opp = 0.2
        self.blocking_opp = 0.
        
        self.curr_sf1_ = self.curr_sf1
        self.curr_sf2_ = self.curr_sf2
        self.curr_lookahead_factor_ = self.curr_lookahead_factor
        self.curr_speed_factor_ = self.curr_speed_factor
        self.blocking_ = self.blocking  

        self.curr_sf1__ = self.curr_sf1
        self.curr_sf2__ = self.curr_sf2
        self.curr_lookahead_factor__ = self.curr_lookahead_factor
        self.curr_speed_factor__ = self.curr_speed_factor
        self.blocking__ = self.blocking

        self.curr_sf1_opp_ = self.curr_sf1_opp
        self.curr_sf2_opp_ = self.curr_sf2_opp
        self.curr_lookahead_factor_opp_ = self.curr_lookahead_factor_opp
        self.curr_speed_factor_opp_ = self.curr_speed_factor_opp
        self.blocking_opp_ = self.blocking_opp

        self.curr_sf1_opp__ = self.curr_sf1_opp
        self.curr_sf2_opp__ = self.curr_sf2_opp
        self.curr_lookahead_factor_opp__ = self.curr_lookahead_factor_opp
        self.curr_speed_factor_opp__ = self.curr_speed_factor_opp
        self.blocking_opp__ = self.blocking_opp

        self.curr_speed_factor_opp1 = 0.87
        self.curr_lookahead_factor_opp1 = 0.25
        self.curr_sf1_opp1 = 0.3
        self.curr_sf2_opp1 = 0.2
        self.blocking_opp1 = 0.
        
        self.curr_sf1_opp1_ = self.curr_sf1_opp1
        self.curr_sf2_opp1_ = self.curr_sf2_opp1
        self.curr_lookahead_factor_opp1_ = self.curr_lookahead_factor_opp1
        self.curr_speed_factor_opp1_ = self.curr_speed_factor_opp1
        self.blocking_opp1_ = self.blocking_opp1
        
        self.curr_sf1_opp1__ = self.curr_sf1_opp1
        self.curr_sf2_opp1__ = self.curr_sf2_opp1
        self.curr_lookahead_factor_opp1__ = self.curr_lookahead_factor_opp1
        self.curr_speed_factor_opp1__ = self.curr_speed_factor_opp1
        self.blocking_opp1__ = self.blocking_opp1
            
        
        self.states = []
        self.cmds = []
        self.i = 0
        self.curr_t_counter = 0.
        self.unity_state_new = [0.,0.,0.,0.,0.,0.]
        self.dataset = []
        self.buffer = []
    
    
    def pure_pursuit(self,xyt,pose,pose_opp,pose_opp1,sf1,sf2,lookahead_factor,v_factor,blocking_factor,gap=0.06,last_i = -1) :
        s,e,v = pose
        # print(last_i)
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
            shift2 =  np.abs(shift2)
        else :
            shift2 = -np.abs(shift2)
        
        shift1 = self.calc_shift(s,s_opp1,v,v_opp1,sf1,sf2,0.5)
        if e>e_opp1 :
            shift1 =  np.abs(shift1)
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
        # print(closest_idx,lookahead_idx,lookahead_distance,gap,shift)
        # print("pp:",shift)
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
    
    
    def obs_state(self):
        return env.obs_state()
    
    def obs_state_opp(self):
        return env_opp.obs_state()
    
    def obs_state_opp1(self):
        return env_opp1.obs_state()
    
    def calc_shift(self,s,s_opp,vs,vs_opp,sf1=0.4,sf2=0.1,t=1.0) :
        # if s > s_opp :
        #     return 0.
        if vs == vs_opp :
            return 0.
        ttc = (s_opp-s)+(vs_opp-vs)*t
        eff_s = ttc 
        factor = sf1*np.exp(-sf2*np.abs(eff_s)**2)
        return factor
    
    def has_collided(self,px,py,theta,px1,py1,theta1,L=0.18,B=0.12):
        dx = px - px1
        dy = py - py1
        d_long = dx*np.cos(theta) + dy*np.sin(theta)
        d_lat = dy*np.cos(theta) - dx*np.sin(theta)
        cost1 = np.abs(d_long) - 2*L
        cost2 = np.abs(d_lat) - 2*B
        d_long_opp = dx*np.cos(theta1) + dy*np.sin(theta1)
        d_lat_opp = dy*np.cos(theta1) - dx*np.sin(theta1)
        cost3 = np.abs(d_long_opp) - 2*L
        cost4 = np.abs(d_lat_opp) - 2*B
        cost = (cost1<0)*(cost2<0)*(cost1*cost2) + (cost3<0)*(cost4<0)*(cost3*cost4)
        return cost
    
    def mpc(self,xyt,pose,pose_opp,pose_opp1,sf1,sf2,lookahead_factor,v_factor,blocking_factor,gap=0.06,last_i = -1) :
        s,e,v = pose
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
    
    def timer_callback(self):
        global obs, obs_opp, obs_opp1, action, curr_steer, s, s_opp, s_opp1
        ti = time.time()
        
        self.i += 1
        
        # RESTART_PARAMS
        if self.i > EP_LEN :
            if s < 50. :
                s+= 150.1
            if s_opp < 50. :
                s_opp+= 150.1
            if s_opp1 < 50. :
                s_opp1+= 150.1
            if s > s_opp and s > s_opp1 :
                self.n_wins[0] += 1
            elif s_opp > s and s_opp > s_opp1 :
                self.n_wins[1] += 1
            elif s_opp1 > s and s_opp1 > s_opp :
                self.n_wins[2] += 1
            self.last_i = -1
            self.last_i_opp = -1
            self.last_i_opp1 = -1
            self.ep_no += 1
            self.i = 1
            waypoint_generator.last_i = -1
            waypoint_generator_opp.last_i = -1
            waypoint_generator_opp1.last_i = -1
            if self.ep_no < 34 :
                obs = env.reset(pose=[3.,5.,-np.pi/2.-0.72])
                obs_opp1 = env_opp1.reset(pose=[0.,0.,-np.pi/2.-0.5])
                obs_opp = env_opp.reset(pose=[-2.,-6.,-np.pi/2.-0.5])
            elif self.ep_no < 67 :
                obs_opp1 = env_opp1.reset(pose=[3.,5.,-np.pi/2.-0.72])
                obs = env.reset(pose=[0.,0.,-np.pi/2.-0.5])
                obs_opp = env_opp.reset(pose=[-2.,-6.,-np.pi/2.-0.72])
            else :
                obs_opp1 = env_opp1.reset(pose=[3.,5.,-np.pi/2.-0.72])
                obs_opp = env_opp.reset(pose=[0.,0.,-np.pi/2.-0.5])
                obs = env.reset(pose=[-2.,-6.,-np.pi/2.-0.72])
            self.curr_sf1 = np.random.uniform(0.1,0.5)
            self.curr_sf2 = np.random.uniform(0.1,0.5)
            self.curr_lookahead_factor = np.random.uniform(0.12,0.5)
            self.curr_speed_factor = np.random.uniform(0.85,1.1)
            self.blocking = np.random.uniform(0.,1.0)
            
            self.curr_sf1_opp = np.random.uniform(0.1,0.5)
            self.curr_sf2_opp = np.random.uniform(0.1,0.5)
            self.curr_lookahead_factor_opp = np.random.uniform(0.12,0.5)
            self.curr_speed_factor_opp = np.random.uniform(0.85,1.1)
            self.blocking_opp = np.random.uniform(0.,1.0)

            self.curr_sf1_opp1 = np.random.uniform(0.1,0.5)
            self.curr_sf2_opp1 = np.random.uniform(0.1,0.5)
            self.curr_lookahead_factor_opp1 = np.random.uniform(0.12,0.5)
            self.curr_speed_factor_opp1 = np.random.uniform(0.85,1.1)
            self.blocking_opp1 = np.random.uniform(0.,1.0)

            self.curr_sf1_opp_ = np.random.uniform(0.1,0.5)
            self.curr_sf2_opp_ = np.random.uniform(0.1,0.5)
            self.curr_lookahead_factor_opp_ = np.random.uniform(0.12,0.5)
            self.curr_speed_factor_opp_ = np.random.uniform(0.85,1.1)
            self.blocking_opp_ = np.random.uniform(0.,1.0)

            self.curr_sf1_opp1_ = np.random.uniform(0.1,0.5)
            self.curr_sf2_opp1_ = np.random.uniform(0.1,0.5)
            self.curr_lookahead_factor_opp1_ = np.random.uniform(0.12,0.5)
            self.curr_speed_factor_opp1_ = np.random.uniform(0.85,1.1)
            self.blocking_opp1_ = np.random.uniform(0.,1.0)

            self.dataset.append(np.array(self.buffer))
            self.buffer = []
            print("Saving dataset")
            regrets = {'regrets1': self.regrets1, 'regrets2': self.regrets2, 'regrets3': self.regrets3}
            pickle.dump(regrets, open('regrets/regrets_'+str(exp_name)+'.pkl','wb'))
            
            pickle.dump(self.dataset, open('recorded_races/racedata_'+str(exp_name)+'.pkl','wb'))
            with open('n_wins/n_wins_'+str(exp_name)+'.txt', 'w') as f:
                for item in self.n_wins:
                    f.write("%s\n" % item)
            
        if self.ep_no > 100 :
            print("Saving dataset")
            pickle.dump(self.dataset, open('recorded_races/racedata_'+str(exp_name)+'.pkl','wb'))
            regrets = {'regrets1': self.regrets1, 'regrets2': self.regrets2, 'regrets3': self.regrets3}
            pickle.dump(regrets, open('regrets/regrets_'+str(exp_name)+'.pkl','wb'))
            with open('n_wins/n_wins_'+str(exp_name)+'.txt', 'w') as f:
                for item in self.n_wins:
                    f.write("%s\n" % item)
            exit(0)
        mu_factor = 1.
        status = Int8()
        px, py, psi, vx, vy, omega = self.obs_state().tolist()
        px_opp, py_opp, psi_opp, vx_opp, vy_opp, omega_opp = self.obs_state_opp().tolist()
        px_opp1, py_opp1, psi_opp1, vx_opp1, vy_opp1, omega_opp1 = self.obs_state_opp1().tolist()

        target_pos_tensor, _, s, e = waypoint_generator.generate(jnp.array(obs[:5]),dt=DT_torch,mu_factor=mu_factor,body_speed=vx)
        target_pos_tensor_opp, _, s_opp, e_opp = waypoint_generator_opp.generate(jnp.array(obs_opp[:5]),dt=DT_torch,mu_factor=mu_factor,body_speed=vx_opp)
        target_pos_tensor_opp1, _, s_opp1, e_opp1 = waypoint_generator_opp1.generate(jnp.array(obs_opp1[:5]),dt=DT_torch,mu_factor=mu_factor,body_speed=vx_opp1)
        # print("h: ", target_pos_tensor)
        
        lookaheads = target_pos_tensor[:,3].tolist()
        lookaheads_opp = target_pos_tensor_opp[:,3].tolist()
        lookaheads_opp1 = target_pos_tensor_opp1[:,3].tolist()
        
        lookaheads_v = target_pos_tensor[:,4].tolist()
        lookaheads_opp_v = target_pos_tensor_opp[:,4].tolist()
        lookaheads_opp1_v = target_pos_tensor_opp1[:,4].tolist()
        
        # print("lat_err: ",e,e_opp,e_opp1)
        target_pos_list = np.array(target_pos_tensor)
        
        curv = target_pos_tensor[0,3]
        curv_opp = target_pos_tensor_opp[0,3]
        curv_opp1 = target_pos_tensor_opp1[0,3]

        curv_lookahead = target_pos_tensor[-1,3]
        curv_opp_lookahead = target_pos_tensor_opp[-1,3]
        curv_opp1_lookahead = target_pos_tensor_opp1[-1,3]
        
        action = np.array([0.,0.])
        theta = target_pos_list[0,2]
        theta_diff = np.arctan2(np.sin(theta-psi),np.cos(theta-psi))
        theta_opp = target_pos_tensor_opp[0,2]
        theta_diff_opp = np.arctan2(np.sin(theta_opp-psi_opp),np.cos(theta_opp-psi_opp))
        theta_opp1 = target_pos_tensor_opp1[0,2]
        theta_diff_opp1 = np.arctan2(np.sin(theta_opp1-psi_opp1),np.cos(theta_opp1-psi_opp1))
        lat_err = np.sqrt((target_pos_list[0,0]-px)**2 + (target_pos_list[0,1]-py)**2)
        if self.i > i_start :
            if np.isnan(vx) or np.isnan(vy) or np.isnan(omega) :
                print("State received a nan value")
                exit(0) 
            self.states.append([vx,vy,omega])
            if np.isnan(action[0]) or np.isnan(action[1]) :
                print("Action received a nan value")
                exit(0)
            self.cmds.append([action[0], action[1]])
        
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
        
        
        if self.i < 6 :
            action[0] = 0.
            action[1] = 0.
        
        if SIM == 'numerical':
            # action, ref_path = self.pure_pursuit_controller(ego_plan,self.obs_state(),speed=2.) 
            # print("Executing action: ", action)
            if args.mpc :
                steer, throttle, _, _, self.last_i = self.mpc((px,py,psi),(s,e,vx),(s_opp,e_opp,vx_opp),(s_opp1,e_opp1,vx_opp1),self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor*2,self.curr_speed_factor**2,self.blocking,last_i=self.last_i)
            else :
                steer, throttle, _, _, self.last_i = self.pure_pursuit((px,py,psi),(s,e,vx),(s_opp,e_opp,vx_opp),(s_opp1,e_opp1,vx_opp1),self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,last_i=self.last_i)
            self.buffer.append([px,py,psi,px_opp,py_opp,psi_opp,px_opp1,py_opp1,psi_opp1,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp,self.curr_speed_factor_opp,self.blocking_opp,self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1,self.curr_speed_factor_opp1,self.blocking_opp1,float(throttle),float(steer)])
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

            if args.mpc :
                steer, throttle, _, _, self.last_i_opp = self.mpc((px_opp,py_opp,psi_opp),(s_opp,e_opp,vx_opp),(s,e,vx),(s_opp1,e_opp1,vx_opp1),self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp*2,self.curr_speed_factor_opp**2,self.blocking_opp,last_i=self.last_i_opp)
            else :
                steer, throttle, _, _, self.last_i_opp = self.pure_pursuit((px_opp,py_opp,psi_opp),(s_opp,e_opp,vx_opp),(s,e,vx),(s_opp1,e_opp1,vx_opp1),self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp,self.curr_speed_factor_opp,self.blocking_opp,last_i=self.last_i_opp)
            
            if OPP_Stretegy == 'ibr' :
                dists = np.sqrt((self.raceline[:,0]-px_opp)**2 + (self.raceline[:,1]-py_opp)**2)
                closest_idx = np.argmin(dists)
                if abs(s-s_opp) < abs(s_opp-s_opp1) :
                    _, u_opp_ibr = mpc_ibr([s,e,-theta_diff,vx] + lookaheads + [self.raceline[closest_idx,2]]*10,[s_opp,e_opp,-theta_diff_opp,vx_opp]+lookaheads_opp+ [self.raceline[closest_idx,2]]*10)
                else :
                    _, u_opp_ibr = mpc_ibr([s_opp1,e_opp1,-theta_diff_opp1,vx_opp1]+lookaheads_opp1+ [self.raceline[closest_idx,2]]*10,[s_opp,e_opp,-theta_diff_opp,vx_opp]+lookaheads_opp+ [self.raceline[closest_idx,2]]*10)
            
            
            if abs(e_opp) > 0.55 :
                env_opp.state.vx *= np.exp(-3*(abs(e_opp)-0.55))
                env_opp.state.vy *= np.exp(-3*(abs(e_opp)-0.55))
                env_opp.state.psi += (1-np.exp(-(abs(e_opp)-0.55)))*(theta_diff_opp)
                steer += (-np.sign(e_opp) - steer)*(1-np.exp(-3*(abs(e_opp)-0.55)))
            
            if abs(theta_diff_opp) > 1. :
                throttle+=0.2
            
            action_opp = np.array([throttle,steer])
            if OPP_Stretegy == 'ours-low_data' or OPP_Stretegy == 'ours-low_p' or OPP_Stretegy == 'ours-high_p' or OPP_Stretegy == 'mpc':
                obs_opp, reward, done, info = env_opp.step(action_opp)
            elif OPP_Stretegy == 'ibr' :
                obs_opp, reward, done, info = env_opp.step(np.array([u_opp_ibr[0],u_opp_ibr[1]]))
            elif OPP_Stretegy == 'rl' :
                if abs(s-s_opp) < abs(s_opp-s_opp1) :
                    rl_obs = [s_opp-s, e_opp,e, theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff, obs[3], obs[4], obs[5],curv_opp,curv,curv_opp_lookahead,curv_lookahead]
                else :
                    rl_obs = [s_opp-s_opp1, e_opp,e_opp1, theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv_opp,curv_opp1,curv_opp_lookahead,curv_opp1_lookahead]
                action_opp, _ = model_opp.predict(rl_obs, deterministic=True)
                obs_opp, _, _, _ = env_opp.step(action_opp)
            
            # For opp1
            if args.mpc :
                steer, throttle, _, _, self.last_i_opp1 = self.mpc((px_opp1,py_opp1,psi_opp1),(s_opp1,e_opp1,vx_opp1),(s,e,vx),(s_opp,e_opp,vx_opp),self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1*2,self.curr_speed_factor_opp1**2,self.blocking_opp1,last_i=self.last_i_opp1)
            else :
                steer, throttle, _, _, self.last_i_opp1 = self.pure_pursuit((px_opp1,py_opp1,psi_opp1),(s_opp1,e_opp1,vx_opp1),(s,e,vx),(s_opp,e_opp,vx_opp),self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1,self.curr_speed_factor_opp1,self.blocking_opp1,last_i=self.last_i_opp1)
            
            if OPP1_Stretegy == 'ibr' :
                dists = np.sqrt((self.raceline[:,0]-px_opp1)**2 + (self.raceline[:,1]-py_opp1)**2)
                closest_idx = np.argmin(dists)
                if abs(s-s_opp1) < abs(s_opp1-s_opp) :
                    _, u_opp1_ibr = mpc_ibr([s,e,-theta_diff,vx] + lookaheads + [self.raceline[closest_idx,2]]*10,[s_opp1,e_opp1,-theta_diff_opp1,vx_opp1]+lookaheads_opp1+ [self.raceline[closest_idx,2]]*10)
                else :
                    _, u_opp1_ibr = mpc_ibr([s_opp,e_opp,-theta_diff_opp,vx_opp]+lookaheads_opp+ [self.raceline[closest_idx,2]]*10,[s_opp1,e_opp1,-theta_diff_opp1,vx_opp1]+lookaheads_opp1+ [self.raceline[closest_idx,2]]*10)
            
            
            if abs(e_opp1) > 0.55 :
                env_opp1.state.vx *= np.exp(-3*(abs(e_opp1)-0.55))
                env_opp1.state.vy *= np.exp(-3*(abs(e_opp1)-0.55))
                env_opp1.state.psi += (1-np.exp(-(abs(e_opp1)-0.55)))*(theta_diff_opp1)
                steer += (-np.sign(e_opp1) - steer)*(1-np.exp(-3*(abs(e_opp1)-0.55)))
            
            if abs(theta_diff_opp1) > 1. :
                throttle+=0.2
            
            action_opp1 = np.array([throttle,steer])
            if OPP1_Stretegy == 'ours-low_data' or OPP1_Stretegy == 'ours-low_p' or OPP1_Stretegy == 'ours-high_p' or OPP1_Stretegy == 'mpc':
                obs_opp1, reward, done, info = env_opp1.step(action_opp1)
            elif OPP1_Stretegy == 'ibr' :
                obs_opp1, reward, done, info = env_opp1.step(np.array([u_opp1_ibr[0],u_opp1_ibr[1]]))
            elif OPP1_Stretegy == 'rl' :
                if abs(s-s_opp1) < abs(s_opp1-s_opp) :
                    rl_obs = [s_opp1-s, e_opp1,e, theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5], theta_diff, obs[3], obs[4], obs[5],curv_opp,curv,curv_opp_lookahead,curv_lookahead]
                else :
                    rl_obs = [s_opp1-s_opp, e_opp1,e_opp, theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5],curv_opp1,curv_opp,curv_opp1_lookahead,curv_opp_lookahead]
                action_opp1, _ = model_opp1.predict(rl_obs, deterministic=True)
                obs_opp1, _, _, _ = env_opp1.step(action_opp1)
            

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
            
            if self.i < 450 :
                
                if OPT_STYLE == 'grad' :
                    for i in range(N_steps_per_iter) :
                        state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.blocking_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_,self.blocking_opp1_]
                        X = torch.tensor(np.array([state_obs])).float()
                        X[:,0] = float(state_obs[2] - state_obs[1])
                        X[:,1] -= float(state_obs[0])
                        X[:,2] -= float(state_obs[0])
                        X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                        X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                        X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                        
                        
                        X = torch.autograd.Variable(X, requires_grad=True)
                        model.zero_grad()
                        preds = model(X)
                        grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                        # X = X[maxi:maxi+1]
                        self.curr_sf1 = max(0.1,min(0.5,X[0,-15].item() + grad_rate*grad[0,-15].item()))
                        self.curr_sf2 = max(0.1,min(0.5,X[0,-14].item() + grad_rate*grad[0,-14].item()))
                        self.curr_lookahead_factor = max(0.15,min(0.5,X[0,-13].item() + grad_rate*grad[0,-13].item()))
                        self.curr_speed_factor = max(0.85,min(1.1,X[0,-12].item() + grad_rate*grad[0,-12].item()))
                        self.blocking = max(0.,min(1.,X[0,-11].item() + grad_rate*grad[0,-11].item()))
                        
                        self.curr_sf1_opp_ = max(0.1,min(0.5,X[0,-10].item() + grad_rate*grad[0,-10].item()))
                        self.curr_sf2_opp_ = max(0.1,min(0.5,X[0,-9].item() + grad_rate*grad[0,-9].item()))
                        self.curr_lookahead_factor_opp_ = max(0.15,min(0.5,X[0,-8].item() + grad_rate*grad[0,-8].item()))
                        self.curr_speed_factor_opp_ = max(0.85,min(1.1,X[0,-7].item() + grad_rate*grad[0,-7].item()))
                        self.blocking_opp_ = max(0.,min(1.,X[0,-6].item() + grad_rate*grad[0,-6].item()))

                        self.curr_sf1_opp1_ = max(0.1,min(0.5,X[0,-5].item() + grad_rate*grad[0,-5].item()))
                        self.curr_sf2_opp1_ = max(0.1,min(0.5,X[0,-4].item() + grad_rate*grad[0,-4].item()))
                        self.curr_lookahead_factor_opp1_ = max(0.15,min(0.5,X[0,-3].item() + grad_rate*grad[0,-3].item()))
                        self.curr_speed_factor_opp1_ = max(0.85,min(1.1,X[0,-2].item() + grad_rate*grad[0,-2].item()))
                        self.blocking_opp1_ = max(0.,min(1.,X[0,-1].item() + grad_rate*grad[0,-1].item()))
                elif OPT_STYLE == 'linear' :
                    for i in range(N_steps_per_iter) :
                        arr = [15,14,13,12,11,10,9,8,7,6,5,4,3,2,1]
                        random.shuffle(arr)
                        print(arr)
                        for j in arr : # Iteratre over each parameter replace with the max value by varying it
                            state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.blocking_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_,self.blocking_opp1_]
                            X = torch.tensor(np.array([state_obs]*K_linear)).float()
                            X[:,0] = float(state_obs[2] - state_obs[1])
                            X[:,1] -= float(state_obs[0])
                            X[:,2] -= float(state_obs[0])
                            X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                            X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                            X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                            if j in [15,14,10,9,5,4] :
                                X[:,-j] = torch.tensor(np.linspace(0.1,0.5,K_linear))
                            elif j in [13,8,3] :
                                X[:,-j] = torch.tensor(np.linspace(0.15,0.5,K_linear))
                            elif j in [12,7,2] :
                                X[:,-j] = torch.tensor(np.linspace(0.85,1.1,K_linear))
                            elif j in [11,6,1] :
                                X[:,-j] = torch.tensor(np.linspace(0.,1.,K_linear))
                            
                            preds = model(X)[:,0]
                            if j==15 :
                                self.curr_sf1 = float(X[preds.argmax(),-15].item())
                            elif j==14 :
                                self.curr_sf2 = float(X[preds.argmax(),-14].item())
                            elif j==13 :
                                self.curr_lookahead_factor = float(X[preds.argmax(),-13].item())
                            elif j==12 :
                                if i==2 :
                                    print(preds)
                                    print(V1(X)[:,0])
                                    print(X[0])
                                    print(X[-1])
                                self.curr_speed_factor = float(X[preds.argmax(),-12].item())
                            elif j==11 :
                                self.blocking = float(X[preds.argmax(),-11].item())
                            elif j==10 :
                                self.curr_sf1_opp_ = float(X[preds.argmax(),-10].item())
                            elif j==9 :
                                self.curr_sf2_opp_ = float(X[preds.argmax(),-9].item())
                            elif j==8 :
                                self.curr_lookahead_factor_opp_ = float(X[preds.argmax(),-8].item())
                            elif j==7 :
                                self.curr_speed_factor_opp_ = float(X[preds.argmax(),-7].item())
                            elif j==6 :
                                self.blocking_opp_ = float(X[preds.argmax(),-6].item())
                            elif j==5 :
                                self.curr_sf1_opp1_ = float(X[preds.argmax(),-5].item())
                            elif j==4 :
                                self.curr_sf2_opp1_ = float(X[preds.argmax(),-4].item())
                            elif j==3 :
                                self.curr_lookahead_factor_opp1_ = float(X[preds.argmax(),-3].item())
                            elif j==2 :
                                self.curr_speed_factor_opp1_ = float(X[preds.argmax(),-2].item())
                            elif j==1 :
                                self.blocking_opp1_ = float(X[preds.argmax(),-1].item())
                            
                state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.blocking_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_,self.blocking_opp1_]
                X = torch.tensor(np.array([state_obs])).float()
                X[:,0] = float(state_obs[2] - state_obs[1])
                X[:,1] -= float(state_obs[0])
                X[:,2] -= float(state_obs[0])
                X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                
                prev_V1 = float(V1(X)[0,0].item())
                prev_V2 = float(V2(X)[0,0].item())
                prev_V3 = float(V3(X)[0,0].item())
                for i in range(N_steps_per_iter) :
                    # print("haha")
                    X = torch.autograd.Variable(X, requires_grad=True)
                    V1.zero_grad()
                    preds = V1(X)
                    grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                    # X = X[maxi:maxi+1]
                    X = X.detach()
                    X[0,-15] = max(0.1,min(0.5,X[0,-15].item() + grad_rate*grad[0,-15].item()))
                    X[0,-14] = max(0.1,min(0.5,X[0,-14].item() + grad_rate*grad[0,-14].item()))
                    X[0,-13] = max(0.15,min(0.5,X[0,-13].item() + grad_rate*grad[0,-13].item()))
                    X[0,-12] = max(0.85,min(1.1,X[0,-12].item() + grad_rate*grad[0,-12].item()))
                    X[0,-11] = max(0.,min(1.,X[0,-11].item() + grad_rate*grad[0,-11].item()))
                if OPT_STYLE == 'value_opt' :
                    self.curr_sf1 = float(X[0,-15].item())
                    self.curr_sf2 = float(X[0,-14].item())
                    self.curr_lookahead_factor = float(X[0,-13].item())
                    self.curr_speed_factor = float(X[0,-12].item())
                    self.blocking = float(X[0,-11].item())
                new_V1 = float(V1(X)[0,0].item())
                self.regrets1.append([new_V1-prev_V1,new_V1,prev_V1,float(X[0,-13]),float(X[0,-12])])
                
                state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.blocking_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_,self.blocking_opp1_]
                X = torch.tensor(np.array([state_obs])).float()
                X[:,0] = float(state_obs[2] - state_obs[1])
                X[:,1] -= float(state_obs[0])
                X[:,2] -= float(state_obs[0])
                X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                
                for i in range(N_steps_per_iter) :
                    X = torch.autograd.Variable(X, requires_grad=True)
                    V2.zero_grad()
                    preds = V2(X)
                    grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                    X = X.detach()
                    # X = X[maxi:maxi+1]
                    X[0,-10] = max(0.1,min(0.5,X[0,-10].item() + grad_rate*grad[0,-10].item()))
                    X[0,-9] = max(0.1,min(0.5,X[0,-9].item() + grad_rate*grad[0,-9].item()))
                    X[0,-8] = max(0.15,min(0.5,X[0,-8].item() + grad_rate*grad[0,-8].item()))
                    X[0,-7] = max(0.85,min(1.1,X[0,-7].item() + grad_rate*grad[0,-7].item()))
                    X[0,-6] = max(0.,min(1.,X[0,-6].item() + grad_rate*grad[0,-6].item()))
                if OPT_STYLE == 'value_opt' :
                    self.curr_sf1_opp_ = float(X[0,-10].item())
                    self.curr_sf2_opp_ = float(X[0,-9].item())
                    self.curr_lookahead_factor_opp_ = float(X[0,-8].item())
                    self.curr_speed_factor_opp_ = float(X[0,-7].item())
                    self.blocking_opp_ = float(X[0,-6].item())
                new_V2 = float(V2(X)[0,0].item())
                self.regrets2.append([new_V2-prev_V2,new_V2,prev_V2,float(X[0,-8]),float(X[0,-7])])

                state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.blocking,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.blocking_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_,self.blocking_opp1_]
                X = torch.tensor(np.array([state_obs])).float()
                X[:,0] = float(state_obs[2] - state_obs[1])
                X[:,1] -= float(state_obs[0])
                X[:,2] -= float(state_obs[0])
                X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                
                for i in range(N_steps_per_iter) :
                    X = torch.autograd.Variable(X, requires_grad=True)
                    V3.zero_grad()
                    preds = V3(X)
                    grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                    X = X.detach()
                    # X = X[maxi:maxi+1]
                    X[0,-5] = max(0.1,min(0.5,X[0,-5].item() + grad_rate*grad[0,-5].item()))
                    X[0,-4] = max(0.1,min(0.5,X[0,-4].item() + grad_rate*grad[0,-4].item()))
                    X[0,-3] = max(0.15,min(0.5,X[0,-3].item() + grad_rate*grad[0,-3].item()))
                    X[0,-2] = max(0.85,min(1.1,X[0,-2].item() + grad_rate*grad[0,-2].item()))
                    X[0,-1] = max(0.,min(1.,X[0,-1].item() + grad_rate*grad[0,-1].item()))
                if OPT_STYLE == 'value_opt' :
                    self.curr_sf1_opp1_ = float(X[0,-5].item())
                    self.curr_sf2_opp1_ = float(X[0,-4].item())
                    self.curr_lookahead_factor_opp1_ = float(X[0,-3].item())
                    self.curr_speed_factor_opp1_ = float(X[0,-2].item())
                    self.blocking_opp1_ = float(X[0,-1].item())
                new_V3 = float(V3(X)[0,0].item())
                self.regrets3.append([new_V3-prev_V3,new_V3,prev_V3,float(X[0,-3]),float(X[0,-2])])
                    

                # preds = model(X)[:,0]
                # imin = torch.argmax(preds)
                # self.curr_sf1 = float(X[imin,-12])
                # self.curr_sf2 = float(X[imin,-11])
                # self.curr_lookahead_factor = float(X[imin,-10])
                # self.curr_speed_factor = float(X[imin,-9])
                
                # self.curr_sf1_opp_ = float(X[imin,-8])
                # self.curr_sf2_opp_ = float(X[imin,-7])
                # self.curr_lookahead_factor_opp_ = float(X[imin,-6])
                # self.curr_speed_factor_opp_ = float(X[imin,-5])
                # self.curr_sf1_opp1_ = float(X[imin,-4])
                # self.curr_sf2_opp1_ = float(X[imin,-3])
                # self.curr_lookahead_factor_opp1_ = float(X[imin,-2])
                # self.curr_speed_factor_opp1_ = float(X[imin,-1])
                # preds = []
                # for k in np.arange(0.15,0.5,0.03) :
                #     state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1,self.curr_sf2,self.curr_lookahead_factor,self.curr_speed_factor,self.curr_sf1_opp_,self.curr_sf2_opp_,self.curr_lookahead_factor_opp_,self.curr_speed_factor_opp_,self.curr_sf1_opp1_,self.curr_sf2_opp1_,self.curr_lookahead_factor_opp1_,self.curr_speed_factor_opp1_]
                #     X = torch.tensor(np.array([state_obs])).float()
                #     X[:,0] = float(state_obs[2] - state_obs[1])
                #     X[:,1] -= float(state_obs[0])
                #     X[:,2] -= float(state_obs[0])
                #     X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                #     X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                #     X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                #     X[:,-10] = k
                #     pred = model(X)
                #     preds.append(pred[0,0])
                # print(preds)
                    
            if OPP_Stretegy == 'ours-low_data' or OPP_Stretegy == 'ours-low_p' or OPP_Stretegy == 'ours-high_p' :
                S = 50
                if OPP_Stretegy == 'ours-low_p' :
                    S = 10
                if OPP_Stretegy == 'ours-high_p' :
                    S = 250
                if self.i < 500-S :
                    for i in range(N_steps_per_iter) :
                        state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1_,self.curr_sf2_,self.curr_lookahead_factor_,self.curr_speed_factor_,self.blocking_,self.curr_sf1_opp,self.curr_sf2_opp,self.curr_lookahead_factor_opp,self.curr_speed_factor_opp,self.blocking_opp,self.curr_sf1_opp1__,self.curr_sf2_opp1__,self.curr_lookahead_factor_opp1__,self.curr_speed_factor_opp1__,self.blocking_opp1__]
                        
                        X = torch.tensor(np.array([state_obs])).float()
                        X[:,0] = float(state_obs[2] - state_obs[1])
                        X[:,1] -= float(state_obs[0])
                        X[:,2] -= float(state_obs[0])
                        X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                        X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                        X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                        X = torch.autograd.Variable(X, requires_grad=True)
                        model_opp.zero_grad()
                        preds = model_opp(X)
                        grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                        
                        self.curr_sf1_ = max(0.1,min(0.5,X[0,-15].item() + grad_rate*grad[0,-15].item()))
                        self.curr_sf2_ = max(0.1,min(0.5,X[0,-14].item() + grad_rate*grad[0,-14].item()))
                        self.curr_lookahead_factor_ = max(0.15,min(0.5,X[0,-13].item() + grad_rate*grad[0,-13].item()))
                        self.curr_speed_factor_ = max(0.85,min(1.1,X[0,-12].item() + grad_rate*grad[0,-12].item()))
                        self.blocking_ = max(0.,min(1.,X[0,-11].item() + grad_rate*grad[0,-11].item()))

                        self.curr_sf1_opp = max(0.1,min(0.5,X[0,-10].item() + grad_rate*grad[0,-10].item()))
                        self.curr_sf2_opp = max(0.1,min(0.5,X[0,-9].item() + grad_rate*grad[0,-9].item()))
                        self.curr_lookahead_factor_opp = max(0.15,min(0.5,X[0,-8].item() + grad_rate*grad[0,-8].item()))
                        self.curr_speed_factor_opp = max(0.85,min(1.1,X[0,-7].item() + grad_rate*grad[0,-7].item()))
                        self.blocking_opp = max(0.,min(1.,X[0,-6].item() + grad_rate*grad[0,-6].item()))

                        self.curr_sf1_opp1__ = max(0.1,min(0.5,X[0,-5].item() + grad_rate*grad[0,-5].item()))
                        self.curr_sf2_opp1__ = max(0.1,min(0.5,X[0,-4].item() + grad_rate*grad[0,-4].item()))
                        self.curr_lookahead_factor_opp1__ = max(0.15,min(0.5,X[0,-3].item() + grad_rate*grad[0,-3].item()))
                        self.curr_speed_factor_opp1__ = max(0.85,min(1.1,X[0,-2].item() + grad_rate*grad[0,-2].item()))
                        self.blocking_opp1__ = max(0.,min(1.,X[0,-1].item() + grad_rate*grad[0,-1].item()))
                
            if OPP1_Stretegy == 'ours-low_data' or OPP1_Stretegy == 'ours-low_p' or OPP1_Stretegy == 'ours-high_p' :
                S = 50
                if OPP1_Stretegy == 'ours-low_p' :
                    S = 10
                if OPP1_Stretegy == 'ours-high_p' :
                    S = 250
                if self.i < 500-S :
                    for i in range(N_steps_per_iter) :
                        state_obs = [s,s_opp,s_opp1, e,e_opp,e_opp1, theta_diff, obs[3], obs[4], obs[5], theta_diff_opp, obs_opp[3], obs_opp[4], obs_opp[5], theta_diff_opp1, obs_opp1[3], obs_opp1[4], obs_opp1[5],curv,curv_opp,curv_opp1,curv_lookahead,curv_opp_lookahead,curv_opp1_lookahead,self.curr_sf1__,self.curr_sf2__,self.curr_lookahead_factor__,self.curr_speed_factor__,self.blocking__,self.curr_sf1_opp__,self.curr_sf2_opp__,self.curr_lookahead_factor_opp__,self.curr_speed_factor_opp__,self.blocking_opp__,self.curr_sf1_opp1,self.curr_sf2_opp1,self.curr_lookahead_factor_opp1,self.curr_speed_factor_opp1,self.blocking_opp1]
                        
                        X = torch.tensor(np.array([state_obs])).float()
                        X[:,0] = float(state_obs[2] - state_obs[1])
                        X[:,1] -= float(state_obs[0])
                        X[:,2] -= float(state_obs[0])
                        X[:,0] = (X[:,0]>75.)*(X[:,0]-150.087) + (X[:,0]<-75.)*(X[:,0]+150.087) + (X[:,0]<=75.)*(X[:,0]>=-75.)*X[:,0]
                        X[:,1] = (X[:,1]>75.)*(X[:,1]-150.087) + (X[:,1]<-75.)*(X[:,1]+150.087) + (X[:,1]<=75.)*(X[:,1]>=-75.)*X[:,1]
                        X[:,2] = (X[:,2]>75.)*(X[:,2]-150.087) + (X[:,2]<-75.)*(X[:,2]+150.087) + (X[:,2]<=75.)*(X[:,2]>=-75.)*X[:,2]
                        X = torch.autograd.Variable(X, requires_grad=True)
                        model_opp1.zero_grad()
                        preds = model_opp1(X)
                        grad = torch.autograd.grad(preds[0,0],X, retain_graph=True)[0].data
                        
                        self.curr_sf1__ = max(0.1,min(0.5,X[0,-15].item() + grad_rate*grad[0,-15].item()))
                        self.curr_sf2__ = max(0.1,min(0.5,X[0,-14].item() + grad_rate*grad[0,-14].item()))
                        self.curr_lookahead_factor__ = max(0.15,min(0.5,X[0,-13].item() + grad_rate*grad[0,-13].item()))
                        self.curr_speed_factor__ = max(0.85,min(1.1,X[0,-12].item() + grad_rate*grad[0,-12].item()))
                        self.blocking__ = max(0.,min(1.,X[0,-11].item() + grad_rate*grad[0,-11].item()))

                        self.curr_sf1_opp__ = max(0.1,min(0.5,X[0,-10].item() + grad_rate*grad[0,-10].item()))
                        self.curr_sf2_opp__ = max(0.1,min(0.5,X[0,-9].item() + grad_rate*grad[0,-9].item()))
                        self.curr_lookahead_factor_opp__ = max(0.15,min(0.5,X[0,-8].item() + grad_rate*grad[0,-8].item()))
                        self.curr_speed_factor_opp__ = max(0.85,min(1.1,X[0,-7].item() + grad_rate*grad[0,-7].item()))
                        self.blocking_opp__ = max(0.,min(1.,X[0,-6].item() + grad_rate*grad[0,-6].item()))

                        self.curr_sf1_opp1 = max(0.1,min(0.5,X[0,-5].item() + grad_rate*grad[0,-5].item()))
                        self.curr_sf2_opp1 = max(0.1,min(0.5,X[0,-4].item() + grad_rate*grad[0,-4].item()))
                        self.curr_lookahead_factor_opp1 = max(0.15,min(0.5,X[0,-3].item() + grad_rate*grad[0,-3].item()))
                        self.curr_speed_factor_opp1 = max(0.85,min(1.1,X[0,-2].item() + grad_rate*grad[0,-2].item()))
                        self.blocking_opp1 = max(0.,min(1.,X[0,-1].item() + grad_rate*grad[0,-1].item()))
                
            print("lookahead: ", self.curr_lookahead_factor, "speed: ", self.curr_speed_factor, "blocking: ", self.blocking)
            print("lookahead: ", self.curr_lookahead_factor_opp_, "speed: ", self.curr_speed_factor_opp_, "blocking: ", self.blocking_opp_)
            print("lookahead: ", self.curr_lookahead_factor_opp1_, "speed: ", self.curr_speed_factor_opp1_, "blocking: ", self.blocking_opp1_)
            
        
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
        odom.twist.twist.linear.y = self.curr_speed_factor #+ 0.05 + random.uniform(-0.1,0.1)
        odom.twist.twist.linear.z = self.curr_sf1 #+ random.uniform(-0.1,0.1)/2.
        odom.twist.twist.angular.z = omega
        odom.twist.twist.angular.x = float(curv) #+ random.uniform(-0.1,0.1)/2.
        odom.twist.twist.angular.y = self.curr_lookahead_factor #+ random.uniform(-0.1,0.1)/2.
        self.odom_pub_.publish(odom)
        
        policy_params = PolicyParams()
        policy_params.sf1 = self.curr_sf1
        policy_params.sf2 = self.curr_sf2
        policy_params.lookahead_factor = self.curr_lookahead_factor
        policy_params.speed_factor = self.curr_speed_factor
        self.policy_params_pub_.publish(policy_params)

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
        
        q_opp1 = quaternion_from_euler(0, 0, psi_opp1)
        
        odom = Odometry()
        odom.header.frame_id = 'map'
        odom.header.stamp = now
        odom.pose.pose.position.x = px_opp1
        odom.pose.pose.position.y = py_opp1
        odom.pose.pose.orientation.x = q_opp1[0]
        odom.pose.pose.orientation.y = q_opp1[1]
        odom.pose.pose.orientation.z = q_opp1[2]
        odom.pose.pose.orientation.w = q_opp1[3]
        odom.twist.twist.linear.x = vx_opp1
        odom.twist.twist.linear.y = vy_opp1
        odom.twist.twist.angular.z = omega_opp1
        self.odom_opp1_pub_.publish(odom)
        
        

        # print(np.array(mppi_info['action']).shape)
        
        throttle = Float64()
        throttle.data = float(action[0])
        self.throttle_pub_.publish(throttle)
        steer = Float64()
        curr_steer += 1.0*(float(action[1]) - curr_steer) 
        steer.data = float(action[1])
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
        print("Time taken", tf-ti)
        if SIM == 'unity' :
            self.pose_received = False
            self.vel_received = False

    def get_curvature(self, x1, y1, x2, y2, x3, y3):
        a = np.sqrt((x2-x1)**2 + (y2-y1)**2)
        b = np.sqrt((x3-x2)**2 + (y3-y2)**2)
        c = np.sqrt((x3-x1)**2 + (y3-y1)**2)
        s = (a+b+c)/2
        # prod is av vector cross product with bc vector
        prod = (x2-x1)*(y3-y2) - (x3-x2)*(y2-y1)
        return 4*np.sqrt(s*(s-a)*(s-b)*(s-c))/(a*b*c)*np.sign(prod)
        
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

        # path = Path()
        # path.header.frame_id = 'map'
        # path.header.stamp = self.get_clock().now().to_msg()
        # N = state_lattice['arr'].shape[0]
        # for i in range(state_lattice['arr'].shape[0]):
        #     for j in range(state_lattice['arr'].shape[1]):
        #         pose = PoseStamped()
        #         pose.header.frame_id = 'map'
        #         pose.pose.position.x = float(state_lattice['arr'][i,j,0])
        #         pose.pose.position.y = float(state_lattice['arr'][i,j,1])
        #         yaw = np.arctan2(state_lattice['arr'][(i+1)%N,j,1]-state_lattice['arr'][i-1,j,1],state_lattice['arr'][(i+1)%N,j,0]-state_lattice['arr'][i-1,j,0])
                
        #         q = quaternion_from_euler(0, 0, yaw)
        #         # print(q)
        #         pose.pose.orientation.x = q[0]
        #         pose.pose.orientation.y = q[1]
        #         pose.pose.orientation.z = q[2]
        #         pose.pose.orientation.w = q[3]
        #         path.poses.append(pose)
                
        # self.state_lattice_pub_.publish(path)

def main():
    rclpy.init()
    car_node = CarNode()
    rclpy.spin(car_node)
    car_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
