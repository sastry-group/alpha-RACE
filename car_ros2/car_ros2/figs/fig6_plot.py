import numpy as np
import matplotlib.pyplot as plt
import torch
from car_dynamics.controllers_jax import WaypointGenerator
from tf_transformations import quaternion_from_euler, euler_matrix
import matplotlib.cm as cm
import matplotlib.colors as mcolors
import torch
from model_arch import SimpleModel
import pickle

LF = 0.06
LR = 0.12
L = LF + LR
plt.rcParams.update({'font.size': 22})

def draw_pose(pose, color='r', linewidth=2,label=None):
    px, py, psi = pose
    pts = np.array([
        [LF, L/3],
        [LF, -L/3],
        [-LR, -L/3],
        [-LR, L/3],
        [LF, L/3],
    ])
    # transform to world frame
    R = euler_matrix(0, 0, psi)[:2, :2]
    pts = np.dot(R, pts.T).T
    pts += np.array([px, py])
    plt.plot(pts[:,0],pts[:,1], color, linewidth=linewidth,label=label)

t_start = 220
t_end = 320
race_no = 68
raceline_before = 550
raceline_after = 1150

race_data = np.array(pickle.load(open('racedata_ours_vs_ours-low_p_vs_ours-low_p_mpc.pkl','rb')))
traj_ego = race_data[race_no][t_start:t_end,3:6]
traj_opp = race_data[race_no][t_start:t_end,0:3]

trajectory_type = "../../simulators/params-num.yaml"
DT = 0.1
H = 10
waypoint_generator = WaypointGenerator(trajectory_type, DT, H, 2.)
data = np.array(np.load('fig5.pkl', allow_pickle=True))[1:]
ref_trajs = np.array(np.load('fig5_plan.pkl', allow_pickle=True))[1:]
theta = 45.*np.pi/180.
R = np.array([[np.cos(theta), -np.sin(theta)],[np.sin(theta), np.cos(theta)]])
waypoint_generator.right_boundary[:,:2] = np.matmul(waypoint_generator.right_boundary[:,:2],R)
waypoint_generator.left_boundary[:,:2] = np.matmul(waypoint_generator.left_boundary[:,:2],R)
waypoint_generator.raceline[:,:2] = np.matmul(waypoint_generator.raceline[:,:2],R)

plt.figure()

if raceline_before < 0 :
    plt.plot(waypoint_generator.right_boundary[:raceline_after,0], waypoint_generator.right_boundary[:raceline_after,1], 'k',label='track boundary')
    plt.plot(waypoint_generator.left_boundary[:raceline_after,0], waypoint_generator.left_boundary[:raceline_after,1], 'k')
    plt.plot(waypoint_generator.raceline[:raceline_after,0], waypoint_generator.raceline[:raceline_after,1], '--',label='raceline',color='b')
    plt.plot(waypoint_generator.right_boundary[raceline_before:,0], waypoint_generator.right_boundary[raceline_before:,1], 'k')
    plt.plot(waypoint_generator.left_boundary[raceline_before:,0], waypoint_generator.left_boundary[raceline_before:,1], 'k')
    plt.plot(waypoint_generator.raceline[raceline_before:,0], waypoint_generator.raceline[raceline_before:,1], '--',color='b')
else :
    plt.plot(waypoint_generator.right_boundary[raceline_before:raceline_after,0], waypoint_generator.right_boundary[raceline_before:raceline_after,1], 'k',label='track boundary')
    plt.plot(waypoint_generator.left_boundary[raceline_before:raceline_after,0], waypoint_generator.left_boundary[raceline_before:raceline_after,1], 'k')
    plt.plot(waypoint_generator.raceline[raceline_before:raceline_after,0], waypoint_generator.raceline[raceline_before:raceline_after,1], '--',label='raceline',color='b')
# plt.plot(data[-1,:50,3], data[-1,:50,4], 'b',label='opp trajectory')
N = t_end-t_start
# print(data[-1,:,3:5])
# Create colormaps for green and red
time_cmap = cm.get_cmap('viridis', N)
traj_ego[:,:2] = np.matmul(traj_ego[:,:2],R)
traj_opp[:,:2] = np.matmul(traj_opp[:,:2],R)
traj_ego[:,2] = traj_ego[:,2] - theta
traj_opp[:,2] = traj_opp[:,2] - theta
mark_at = [0, 10, 20, 30, 40, 52, 70, 80, 90, 98]

# Normalize the range for color mapping
norm = mcolors.Normalize(vmin=0., vmax=0.05*N)
for i in range(len(traj_ego)-1):
    color_data = time_cmap(norm(0.+i*0.05))  # Get color for data[i]
    print(traj_ego[i])
    plt.plot(traj_ego[i:(i+2), 0], traj_ego[i:(i+2), 1], color=color_data)
    plt.plot(traj_opp[i:(i+2), 0], traj_opp[i:(i+2), 1], color=color_data)
    

    if i in mark_at:
        label = None
        if i == 0:
            label = 'ego (Ours)'
        draw_pose(traj_ego[i], color='g',label=label)
        if i == 0:
            label = 'opp (IBR)'
        draw_pose(traj_opp[i], color='r',label=label)
    


# Add color bars
sm_time = cm.ScalarMappable(cmap=time_cmap, norm=norm)
sm_time.set_array([])

# Plot colorbars
cbar_time = plt.colorbar(sm_time, ax=plt.gca(), orientation='vertical', fraction=0.025, pad=0.04)
cbar_time.set_label('Time (in s)')
plt.axis('equal')
plt.legend()
plt.savefig('fig6.png')
plt.show()
