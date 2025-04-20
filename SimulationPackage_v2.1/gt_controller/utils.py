
import numpy as np
import time
import yaml
import pandas as pd

def get_curvature(x1, y1, x2, y2, x3, y3):
    a = np.sqrt((x2-x1)**2 + (y2-y1)**2)
    b = np.sqrt((x3-x2)**2 + (y3-y2)**2)
    c = np.sqrt((x3-x1)**2 + (y3-y1)**2)
    s = (a+b+c)/2
    prod = (x2-x1)*(y3-y2) - (x3-x2)*(y2-y1)
    return 4*np.sqrt(s*(s-a)*(s-b)*(s-c))/(a*b*c)*np.sign(prod)

def custom_fn(theta, traj):
    while theta >= traj[-1, 2]:
        theta -= traj[-1, 2]
    i = np.sum(traj[:,2]<theta) - 1
    ratio = (theta - traj[i, 2]) / (traj[i + 1, 2] - traj[i, 2])
    x, y = traj[i, 0] + ratio * (traj[i + 1, 0] - traj[i, 0]), traj[i, 1] + ratio * (traj[i + 1, 1] - traj[i, 1])
    v = traj[i, 3] + ratio * (traj[i + 1, 3] - traj[i, 3])
    N = len(traj)
    curv = get_curvature(traj[i, 0], traj[i, 1], traj[(i + 1)%N, 0], traj[(i + 1)%N, 1], traj[(i + 2)%N, 0], traj[(i + 2)%N, 1])
    return np.array([x, y]), v, {'curv': curv}

class WaypointGenerator:
    
    def line_point_distance(self, px, py, x1, y1, x2, y2):
        """
        This function calculates the distance between a point and a line segment, also determining side.

        Args:
            px: x coordinate of the point.
            py: y coordinate of the point.
            x1: x coordinate of the first point on the line segment.
            y1: y coordinate of the first point on the line segment.
            x2: x coordinate of the second point on the line segment.
            y2: y coordinate of the second point on the line segment.

        Returns:
            A tuple containing the distance and a value indicating side (positive for left, negative for right).
        """

        # Calculate the vector along the line segment
        dx = x2 - x1
        dy = y2 - y1

        # Calculate the vector from the point to the first point on the line segment
        t = ((px - x1) * dx + (py - y1) * dy) / (dx * dx + dy * dy)

        return t

    def calc_shifted_traj(self, traj, shift_dist) :
        # This function calculates the shifted trajectory given the original trajectory and the shift distance.
        traj_ = np.copy(traj)
        traj_[:-1] = traj[1:]
        traj_[-1] = traj[0]
        _traj = np.copy(traj)
        _traj[1:] = traj[:-1]
        _traj[0] = traj[-1]
        yaws = np.arctan2(traj_[:,1] - _traj[:,1], traj_[:,0] - _traj[:,0])
        traj_new = np.copy(traj)
        traj_new[:,0] = traj[:,0] + shift_dist * np.cos(yaws + np.pi/2)
        traj_new[:,1] = traj[:,1] + shift_dist * np.sin(yaws + np.pi/2)
        return traj_new
    
    def __init__(self, waypoint_type: str, dt: float):
        self.waypoint_type = waypoint_type
        
        self.fn = custom_fn
        df = pd.read_csv(self.waypoint_type)
        self.path = np.array(df.iloc[:,:])
        print(self.path)
        self.waypoint_type = 'custom'
        self.dt = dt 
        self.waypoint_t_list = np.arange(0, self.path[-1,2], 1.)
        print(self.waypoint_t_list)
        self.waypoint_list = np.array([self.fn(t,self.path)[0] for t in self.waypoint_t_list])
        self.waypoint_list_np = np.array(self.waypoint_list)
        self.last_i = -1
        
    
    def generate(self, obs: np.ndarray, dt=-1) -> np.ndarray:
        if dt < 0.:
            dt = self.dt
        
        pos2d = obs[:2]
        if self.last_i == -1:
            distance_list = np.linalg.norm(self.waypoint_list - pos2d, axis=-1)
            t_idx = np.argmin(distance_list)
            self.last_i = t_idx
        else :
            if self.last_i + 20 < len(self.waypoint_list):
                distance_list = np.linalg.norm(self.waypoint_list[self.last_i:(self.last_i+20)] - pos2d, axis=-1)
                t_idx = np.argmin(distance_list) + self.last_i          
            else :
                distance_list = np.linalg.norm(self.waypoint_list[self.last_i:] - pos2d, axis=-1)
                t_idx1 = np.argmin(distance_list)
                distance_list2 = np.linalg.norm(self.waypoint_list[:20] - pos2d, axis=-1)
                t_idx2 = np.argmin(distance_list2)
                d1 = distance_list[t_idx1]
                d2 = distance_list2[t_idx2]
                if d1 < d2:
                    t_idx = t_idx1 + self.last_i
                else :
                    t_idx = t_idx2 
            self.last_i = t_idx
        t_closed = self.waypoint_t_list[t_idx]
        
        d1 = np.sqrt((self.waypoint_list[t_idx-1,0]-self.waypoint_list[t_idx,0])**2 \
            + (self.waypoint_list[t_idx-1,1]-self.waypoint_list[t_idx,1])**2)
        if d1 > 0. : 
            t1 = self.line_point_distance(pos2d[0], pos2d[1], self.waypoint_list[t_idx-1,0], self.waypoint_list[t_idx-1,1], self.waypoint_list[t_idx,0], self.waypoint_list[t_idx,1])
            side = np.sign((self.waypoint_list[t_idx,0]-self.waypoint_list[t_idx-1,0])*(pos2d[1]-self.waypoint_list[t_idx-1,1]) - (self.waypoint_list[t_idx,1]-self.waypoint_list[t_idx-1,1])*(pos2d[0]-self.waypoint_list[t_idx-1,0]))
            pt = self.waypoint_list[t_idx-1] + t1 * (self.waypoint_list[t_idx] - self.waypoint_list[t_idx-1])
            dist1 = np.sqrt((pos2d[0]-pt[0])**2 + (pos2d[1]-pt[1])**2) * side
            d1 *= min(1.,max(0.,t1)) - 1.
        N = len(self.waypoint_list)
        d2 = np.sqrt((self.waypoint_list[t_idx,0]-self.waypoint_list[(t_idx+1)%N,0])**2 \
            + (self.waypoint_list[t_idx,1]-self.waypoint_list[(t_idx+1)%N,1])**2)
        if d2 > 0. :
            t2 = self.line_point_distance(pos2d[0], pos2d[1], self.waypoint_list[t_idx,0], self.waypoint_list[t_idx,1], self.waypoint_list[(t_idx+1)%N,0], self.waypoint_list[(t_idx+1)%N,1])
            side = np.sign((self.waypoint_list[(t_idx+1)%N,0]-self.waypoint_list[t_idx,0])*(pos2d[1]-self.waypoint_list[t_idx,1]) - (self.waypoint_list[(t_idx+1)%N,1]-self.waypoint_list[t_idx,1])*(pos2d[0]-self.waypoint_list[t_idx,0]))
            pt = self.waypoint_list[t_idx] + t2 * (self.waypoint_list[(t_idx+1)%N] - self.waypoint_list[t_idx])
            dist2 = np.sqrt((pos2d[0]-pt[0])**2 + (pos2d[1]-pt[1])**2) * side
            d2 *= min(1.,max(0.,t2))
        if abs(dist1) < abs(dist2):
            final_dist = dist1
        else :
            final_dist = dist2
        t_closed_refined = t_closed + d1 + d2
        return t_closed_refined, final_dist
        
        
    