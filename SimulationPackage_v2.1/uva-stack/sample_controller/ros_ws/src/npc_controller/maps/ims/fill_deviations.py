import numpy as np
import pandas as pd

def nearest_point_on_trajectory(point, trajectory):
    def dist_point_to_segment(p, v, w):
        l2 = np.sum((v - w) ** 2)
        if l2 == 0.0:
            return np.linalg.norm(p - v), v
        t = max(0, min(1, np.dot(p - v, w - v) / l2))
        projection = v + t * (w - v)
        dir = np.sign(np.cross(p - v, w - v))
        return np.linalg.norm(p - projection)*dir, projection
    # print(point)
    min_dist = float('inf')
    nearest_point = None
    n = len(trajectory)
    mindist = -1
    for i in range(n):
        v = np.array(trajectory[i])
        w = np.array(trajectory[(i + 1) % n])
        dist, proj = dist_point_to_segment(np.array(point), v, w)
        # print(min_dist)
        if abs(dist) < min_dist:
            min_dist = abs(dist)
            nearest_point = proj
            mindist = dist
    # print(mindist)
    return mindist

trajectory = pd.read_csv('center_line.csv',delimiter=',').values.tolist()
trajectory = [[x, y] for x, y, _, _ in trajectory[1:]]
trajectory = np.array(trajectory)
# print(trajectory)

traj_to_fill = pd.read_csv('center_line.csv',delimiter=',').values.tolist()
traj_to_fill = [[x, y, a, b] for x, y, a, b in traj_to_fill[:]]
traj_to_fill = np.array(traj_to_fill)
# Add a column to traj_to_fill
traj_to_fill1 = np.zeros((len(traj_to_fill), 5))
traj_to_fill1[:,:4] = traj_to_fill
# print(traj_to_fill)
s = 0
for i in range(len(traj_to_fill)):
    traj_to_fill1[i,2] = s
    s += np.linalg.norm(traj_to_fill[i,0:2] - traj_to_fill[(i + 1) % len(traj_to_fill),0:2])
    traj_to_fill1[i,4] = nearest_point_on_trajectory(traj_to_fill[i,:2], trajectory)
    print(i,traj_to_fill1[i,4])

pd.DataFrame(traj_to_fill1).to_csv('center_line_.csv', index=False, header=False)

