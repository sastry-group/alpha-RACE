import numpy as np
import matplotlib.pyplot as plt
import torch
from car_dynamics.controllers_jax import WaypointGenerator
from tf_transformations import quaternion_from_euler, euler_matrix
import matplotlib.cm as cm
import matplotlib.colors as mcolors
import torch
from model_arch import SimpleModel

LF = 0.06
LR = 0.12
L = LF + LR

plt.rcParams.update({'font.size': 33})


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
data = np.array(np.load('fig2.pkl', allow_pickle=True))[1:]
data_X = np.array(np.load('fig2_start_obs.pkl', allow_pickle=True))[1:]
theta = 45.*np.pi/180.
R = np.array([[np.cos(theta), -np.sin(theta)],[np.sin(theta), np.cos(theta)]])
waypoint_generator.right_boundary[:,:2] = np.matmul(waypoint_generator.right_boundary[:,:2],R)
waypoint_generator.left_boundary[:,:2] = np.matmul(waypoint_generator.left_boundary[:,:2],R)
waypoint_generator.raceline[:,:2] = np.matmul(waypoint_generator.raceline[:,:2],R)
plt.figure()
data[-1,:,3:5] = np.matmul(data[-1][:,3:5],R)
plt.plot(waypoint_generator.right_boundary[:1000,0], waypoint_generator.right_boundary[:1000,1], 'k',label='track boundary')
plt.plot(waypoint_generator.left_boundary[:1000,0], waypoint_generator.left_boundary[:1000,1], 'k')
plt.plot(waypoint_generator.raceline[:1000,0], waypoint_generator.raceline[:1000,1], '--',label='raceline')
N = len(data)

# Create colormaps for green and red
green_cmap = cm.get_cmap('Greens', N)

# Normalize the range for color mapping
norm = mcolors.Normalize(vmin=0.1, vmax=0.5)
for i in range(len(data)):
    # Transform data
    if i==len(data)-3:
        continue
    data[i, :, :2] = np.matmul(data[i, :, :2], R)
    color_data = green_cmap(norm(0.1+0.05*i))  # Get color for data[i]
    if i == len(data)-1:
        plt.plot(data[i, :, 0], data[i, :, 1], color=color_data,label='ego trajectory')
    else :
        plt.plot(data[i, :, 0], data[i, :, 1], color=color_data)
    
    # Transform ref_trajs
 
fs = 128
model = SimpleModel(39,[3*fs,3*fs,3*64],1)
V1 = SimpleModel(39,[128,128,64],1)
V2 = SimpleModel(39,[128,128,64],1)
V3 = SimpleModel(39,[128,128,64],1)

model.load_state_dict(torch.load('model_multi4_myopic.pth'))
V1.load_state_dict(torch.load('model_multi0_3_myopic.pth'))
V2.load_state_dict(torch.load('model_multi1_3_myopic.pth'))
V3.load_state_dict(torch.load('model_multi2_3_myopic.pth'))

model.eval()
V1.eval()
V2.eval()
V3.eval()

Y = model(torch.tensor(data_X).float())
print(Y)

# Add color bars
sm_green = cm.ScalarMappable(cmap=green_cmap, norm=norm)
sm_green.set_array([])

# Plot colorbars
cbar_green = plt.colorbar(sm_green, ax=plt.gca(), orientation='vertical', fraction=0.025, pad=0.04)
# cbar_green.set_label('Data Trajectories')
# cbar_red.set_label('Reference Trajectories')
# plt.axis('equal')
draw_pose((data[-1,0,0],data[-1,0,1],data[-1,0,2]-theta), color='b')

plt.legend()
plt.savefig('fig2.png')
plt.show()

plt.figure()
plt.plot(data_X[:,-13],Y.detach().numpy().flatten(),linewidth=3)
plt.xlabel(r'$q$')
plt.ylabel('Potential function value')
plt.savefig('fig2_pred.png')
plt.show()