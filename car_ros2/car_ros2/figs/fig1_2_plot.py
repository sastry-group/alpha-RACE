import numpy as np
import matplotlib.pyplot as plt
import torch
from car_dynamics.controllers_jax import WaypointGenerator
from tf_transformations import quaternion_from_euler, euler_matrix
import matplotlib.cm as cm
import matplotlib.colors as mcolors
LF = 0.06
LR = 0.12
L = LF + LR



def draw_pose(pose, color='r', linewidth=2):
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
    plt.plot(pts[:,0],pts[:,1], color, linewidth=linewidth)

trajectory_type = "../../simulators/params-num.yaml"
DT = 0.1
H = 10
waypoint_generator = WaypointGenerator(trajectory_type, DT, H, 2.)
data = np.array(np.load('fig1_2.pkl', allow_pickle=True))[1:]
ref_trajs = np.array(np.load('fig1_2_plan.pkl', allow_pickle=True))[1:]
# data1 = np.array(np.load('fig4.pkl', allow_pickle=True))[1:]
# ref_trajs1 = np.array(np.load('fig4_plan.pkl', allow_pickle=True))[1:]
theta = 45.*np.pi/180.
R = np.array([[np.cos(theta), -np.sin(theta)],[np.sin(theta), np.cos(theta)]])
waypoint_generator.right_boundary[:,:2] = np.matmul(waypoint_generator.right_boundary[:,:2],R)
waypoint_generator.left_boundary[:,:2] = np.matmul(waypoint_generator.left_boundary[:,:2],R)
waypoint_generator.raceline[:,:2] = np.matmul(waypoint_generator.raceline[:,:2],R)
plt.figure()
data[-1,:,3:5] = np.matmul(data[-1][:,3:5],R)
plt.plot(waypoint_generator.right_boundary[:100,0], waypoint_generator.right_boundary[:100,1], 'k',label='track boundary')
plt.plot(waypoint_generator.left_boundary[:100,0], waypoint_generator.left_boundary[:100,1], 'k')
plt.plot(waypoint_generator.raceline[:100,0], waypoint_generator.raceline[:100,1], '--',label='raceline')
plt.plot(data[-1,:,3], data[-1,:,4], 'b',label='opp trajectory')
N = len(data)

# Create colormaps for green and red
# green_cmap = cm.get_cmap('Greens', N)
# red_cmap = cm.get_cmap('Reds', N)

# Normalize the range for color mapping
# norm = mcolors.Normalize(vmin=0.1, vmax=0.5)
for i in range(len(data)):
    # Transform data
    data[i, :, :2] = np.matmul(data[i, :, :2], R)
    # Transform ref_trajs
    
    ref_trajs[i, :, :2] = np.matmul(ref_trajs[i, :, :2], R)
    if i == 0:
        plt.plot(ref_trajs[i, :, 0], ref_trajs[i, :, 1], label='low s1, low s2')
    elif i==1 :
        plt.plot(ref_trajs[i, :, 0], ref_trajs[i, :, 1], label='low s1, high s2')
    elif i==2 :
        plt.plot(ref_trajs[i, :, 0], ref_trajs[i, :, 1], label='high s1, low s2')
    elif i==3 :
        plt.plot(ref_trajs[i, :, 0], ref_trajs[i, :, 1], label='high s1, high s2')



# Add color bars
# sm_green = cm.ScalarMappable(cmap=green_cmap, norm=norm)
# sm_red = cm.ScalarMappable(cmap=red_cmap, norm=norm)
# sm_green.set_array([])
# sm_red.set_array([])

# Plot colorbars
# cbar_green = plt.colorbar(sm_green, ax=plt.gca(), orientation='vertical', fraction=0.025, pad=0.04)
# cbar_red = plt.colorbar(sm_red, ax=plt.gca(), orientation='vertical', fraction=0.025, pad=0.1)
# cbar_green.set_label('Data Trajectories')
# cbar_red.set_label('Reference Trajectories')
plt.axis('equal')
draw_pose((data[-1,0,3],data[-1,0,4],data[-1,0,5]-theta), color='b')
draw_pose((data[-1,0,0],data[-1,0,1],data[-1,0,2]-theta), color='g')
# draw_pose(data[-1,0,3:5], color='b')
plt.legend()
plt.savefig('fig1_2.png')
plt.show()