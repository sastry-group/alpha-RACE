import os
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSHistoryPolicy, QoSDurabilityPolicy
from rclpy.parameter import Parameter
from rclpy.time import Time
from rclpy.clock import ClockType
from std_msgs.msg import Int32, UInt16
from geometry_msgs.msg import PointStamped
from nav_msgs.msg import Odometry
from novatel_oem7_msgs.msg import BESTPOS
from autonoma_msgs.msg import VehicleData, PowertrainData, RaceControl, VehicleInputs, ToRaptor
from npc_controller_msgs.msg import NPCDebug
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped, Point, PolygonStamped, Point32, TwistStamped

from nav_msgs.msg import Path
# from nav_msgs.msg import Odometry
from rosgraph_msgs.msg import Clock
import numpy as np
import pandas as pd
from scipy.interpolate import interp1d
from mpc_controller import mpc
from pyproj import Proj, Transformer
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from utils import WaypointGenerator
# import local cartesian
# from geographiclib.localcartesian import LocalCartesian
# from geographiclib import Geodesic

# Define WGS84 ellipsoid parameters (semi-major axis & flattening)
wgs84_a = 6378137.0  # Semi-major axis in meters
wgs84_f = 1 / 298.257223563  # Flattening

# Reference location (origin of local coordinate system)
lat0, lon0, hgt0 = 39.7947350319205384, -86.2352425671970906, 224.1435846661534015  # Example reference point

proj_enu = Proj(proj="aeqd", lat_0=lat0, lon_0=lon0, datum="WGS84")
transformer = Transformer.from_proj("epsg:4326", proj_enu, always_xy=True)

# CTState
CT1_PWR_ON = 1
CT2_INITIALIZED = 2
CT3_ACT_TEST = 3
CT4_CRANKREADY = 4
CT5_CRANKING = 5
CT6_RACEREADY = 6
CT7_INIT_DRIVING = 7
CT8_CAUTION = 8
CT9_NOM_RACE = 9
CT10_COORD_STOP = 10
CT11_CNTRL_SHUTDOWN = 11
CT12_EMRG_SHUTDOWN = 12
CT255_DEFAULT = 255

# SysState
SS1_PWR_ON = 1
SS2_SUBSYS_CON = 2
SS3_ACT_TESTING = 3
SS4_ACT_TEST_DONE = 4
SS5_CRANKREADY = 5
SS6_PRECRANK_CHECK = 6
SS7_CRANKING = 7
SS8_ENG_RUNNING = 8
SS9_DRIVING = 9
SS10_SHUT_ENG = 10
SS11_PWR_OFF = 11
SS13_CRANK_CHECK_INIT = 13
SS19_STANDBY_MODE = 19
SS255_DEFAULT = 255

# TrackFlag
TF1_RED = 1
TF2_ORANGE = 2
TF3_YELLOW = 3
TF4_GREEN = 4
TF8_WAVING_GREEN = 8
TF_DEFAULT = 255

# VehicleFlag
VF1_NULL = 1
VF2_BLACK = 2
VF4_CHECK = 4
VF5_DEFENDER = 5
VF7_ATTACKER = 7
VF8_PURPLE = 8

# LapState
LS0_IN_BOX = 0
LS1_LEAVE_BOX = 1
LS2_PIT_EXIT = 2
LS3_ON_RACELINE = 3
LS4_BLACK_SLOWDOWN = 4
LS5_BLACK_SWITCH_TO_PIT = 5
LS6_PIT_ENTRY = 6
LS7_TERMINATE = 7
LS255_DEFAULT = 255

# TrackLocation
LOC_START_FINISH = 0
LOC_PIT_ENTRY_EXIT = 1
LOC_PASSING_ZONE = 2
LOC_PIT_SPEEDUP = 10
LOC_PIT_SLOWDOWN = 11
LOC_DEFAULT = 255

LF = 0.8
LR = 0.8
L = LF + LR

class ControllerNode(Node):
    def __init__(self):
        super().__init__('npc_controller')

        # Parameters
        self.declare_parameter('qos_history', 1)
        self.declare_parameter('track_name', 'ims')
        self.declare_parameter('vehicle.wheelbase', 2.971)
        self.declare_parameter('vehicle.steering_ratio', 15.0)
        self.declare_parameter('vehicle.min_steer', -0.2793)
        self.declare_parameter('vehicle.max_steer', 0.2793)
        self.declare_parameter('vehicle.min_lookahead_dist', 15.0)
        self.declare_parameter('vehicle.max_lookahead_dist', 45.0)
        self.declare_parameter('vehicle.lookahead_gain', 0.8)
        self.declare_parameter('vehicle.min_throttle', 0.0)
        self.declare_parameter('vehicle.max_throttle', 100.0)
        self.declare_parameter('vehicle.min_brake', 0.0)
        self.declare_parameter('vehicle.max_brake', 5500.0)
        self.declare_parameter('vehicle.max_acc', 5.5)
        self.declare_parameter('vehicle.min_acc', -6.0)
        self.declare_parameter('vehicle.vel_kp', 0.2)
        self.declare_parameter('vehicle.vel_ki', 0.005)
        self.declare_parameter('vehicle.vel_kd', 0.08)
        self.declare_parameter('vehicle.throttle_kp', 0.03)
        self.declare_parameter('vehicle.throttle_ki', 0.01)
        self.declare_parameter('vehicle.throttle_kd', 0.05)
        self.declare_parameter('vehicle.braking_kp', 0.002)
        self.declare_parameter('vehicle.braking_ki', 0.0001)
        self.declare_parameter('vehicle.braking_kd', 0.0001)
        self.declare_parameter('lap_state_machine.yellow_flag_box_exit', 18.0)
        self.declare_parameter('lap_state_machine.yellow_flag_pit_row', 30.0)
        self.declare_parameter('lap_state_machine.yellow_flag_pit_lane', 30.0)
        self.declare_parameter('lap_state_machine.yellow_flag_on_track', 60.0)
        self.declare_parameter('lap_state_machine.green_flag', 60.0)
        self.declare_parameter('lap_state_machine.black_flag', 50.0)
        self.declare_parameter('lap_state_machine.pit_transition_out', 1055.3165683121185)
        self.declare_parameter('lap_state_machine.pit_transition_in', 1093.7091990052456)
        self.declare_parameter('lap_state_machine.pit_entry_dec', 993.7091990052456)
        self.declare_parameter('lap_state_machine.pit_inc_speed', 160.21269895019626)
        self.declare_parameter('lap_state_machine.pit_dec_speed', 2003.823017429067)
        self.declare_parameter('lap_state_machine.pit_stop', 115.29526969674424)

        self.slow_timer_ = self.create_timer(5.0, self.slow_timer_callback)
        
        # QoS Profiles
        history_size = self.get_parameter('qos_history').value
        qos = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=history_size,
            durability=QoSDurabilityPolicy.VOLATILE
        )
        sim_qos = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=history_size,
            durability=QoSDurabilityPolicy.TRANSIENT_LOCAL
        )

        self.vehicle_state = np.array([0.,0.,0.,0.,0.])
        # Simulation Mode
        self.sim_mode_enabled = os.getenv('SIM_CLOCK_MODE', 'false').lower() == 'true'

        # Subscribers
        self.bestpos_sub = self.create_subscription(
            BESTPOS, 'novatel_top/bestpos', self.bestpos_callback, qos)
        self.wheel_speed_sub = self.create_subscription(
            VehicleData, 'vehicle_data', self.wheel_speed_callback, qos)
        self.pt_report_sub = self.create_subscription(
            PowertrainData, 'powertrain_data', self.receive_pt_report, qos)
        self.ct_input_sub = self.create_subscription(
            Int32, 'ct_input', self.receive_ct_input, qos)
        self.ct_input = 0
        self.flags_sub = self.create_subscription(
            RaceControl, 'race_control', self.receive_flags, qos)
        if self.sim_mode_enabled:
            self.sim_clock_time_sub = self.create_subscription(
                Clock, 'clock', self.sim_clock_time_callback, sim_qos)

        self.left_boundary_pub_ = self.create_publisher(Path, 'left_boundary', 1)
        self.right_boundary_pub_ = self.create_publisher(Path, 'right_boundary', 1)
        self.raceline_pub_ = self.create_publisher(Path, 'raceline', 1)
        self.odom_pub_ = self.create_publisher(Odometry, 'odom', 1)
        self.body_pub_ = self.create_publisher(PolygonStamped, 'body', 1)
        self.body_pub_opp_ = self.create_publisher(PolygonStamped, 'body_opp', 1)
        
        # Load Track Paths
        track_name = self.get_parameter('track_name').value
        share_dir = '/root/ros_ws/src/npc_controller/'
        map_dir = os.path.join(share_dir, 'maps', track_name)
        pit_line_dir = os.path.join(map_dir, 'pit_lane.csv')
        self.pit_line = self.load_path(pit_line_dir)
        center_line_dir = os.path.join(map_dir, 'center_line_.csv')
        self.center_line = self.load_path(center_line_dir)
        left_line_dir = os.path.join(map_dir, 'left_line.csv')
        self.left_line = self.load_path(left_line_dir)
        right_line_dir = os.path.join(map_dir, 'right_line.csv')
        self.right_line = self.load_path(right_line_dir)
        race_line_dir = os.path.join(map_dir, 'optimal_line_.csv')
        self.race_line = self.load_path(race_line_dir)
        self.path_loaded = True
        # std_msgs::msg::UInt16 sim_time_increase_msg_;
        # self.sim_time_increase_msg = UInt16()
        # self.sim_time_increase_msg.data = 10
        # self.current_path = self.pit_line
        # self.current_path = self.center_line
        self.current_path = self.race_line
        self.pose = np.array([0.,0.,0.])
        self.pose_opp = np.array([0.,0.,0.])

        self.prev_a = 0.

        # Timers
        if not self.sim_mode_enabled:
            # self.pure_pursuit_timer = self.create_timer(0.01, self.pure_pursuit)
            # self.long_control_timer = self.create_timer(0.01, self.long_control)
            self.control_timer = self.create_timer(0.01, self.controller)
            self.state_machine_timer = self.create_timer(0.01, self.state_machine)

        # Publishers
        self.vehicle_cmd_pub = self.create_publisher(VehicleInputs, 'vehicle_inputs', qos)
        self.ct_report_pub = self.create_publisher(ToRaptor, 'to_raptor', qos)
        self.sim_time_increase_pub = self.create_publisher(UInt16, 'sim_time_increase', sim_qos)
        self.odometry_pub = self.create_publisher(Odometry, 'odometry', qos)
        self.target_point_pub = self.create_publisher(PointStamped, 'target_point', qos)
        self.base_point_pub = self.create_publisher(PointStamped, 'base_point', qos)
        self.debug_pub = self.create_publisher(NPCDebug, 'debug', qos)

        self.prev_time = self.get_clock().now().nanoseconds / 1e9
        self.prev_vel_time = self.get_clock().now().nanoseconds / 1e9
        self.prev_acc_time = self.get_clock().now().nanoseconds / 1e9

        self.previous_state = np.array([0.,0.,0.,0.,0.])

        # Load Parameters
        self.wheelbase = self.get_parameter('vehicle.wheelbase').value
        self.steering_ratio = self.get_parameter('vehicle.steering_ratio').value
        self.min_steer = self.get_parameter('vehicle.min_steer').value
        self.max_steer = self.get_parameter('vehicle.max_steer').value
        self.min_lookahead_dist = self.get_parameter('vehicle.min_lookahead_dist').value
        self.max_lookahead_dist = self.get_parameter('vehicle.max_lookahead_dist').value
        self.lookahead_gain = self.get_parameter('vehicle.lookahead_gain').value
        self.min_throttle = self.get_parameter('vehicle.min_throttle').value
        self.max_throttle = self.get_parameter('vehicle.max_throttle').value
        self.min_brake = self.get_parameter('vehicle.min_brake').value
        self.max_brake = self.get_parameter('vehicle.max_brake').value
        self.max_acc = self.get_parameter('vehicle.max_acc').value
        self.min_acc = self.get_parameter('vehicle.min_acc').value
        self.vel_kp = self.get_parameter('vehicle.vel_kp').value
        self.vel_ki = self.get_parameter('vehicle.vel_ki').value
        self.vel_kd = self.get_parameter('vehicle.vel_kd').value
        self.throttle_kp = self.get_parameter('vehicle.throttle_kp').value
        self.throttle_ki = self.get_parameter('vehicle.throttle_ki').value
        self.throttle_kd = self.get_parameter('vehicle.throttle_kd').value
        self.brake_kp = self.get_parameter('vehicle.braking_kp').value
        self.brake_ki = self.get_parameter('vehicle.braking_ki').value
        self.brake_kd = self.get_parameter('vehicle.braking_kd').value
        self.count = 0
        self.wheel_speed_received = False
        self.position_received = False
        self.prev_x = 0.
        self.prev_y = 0.
        self.first_time = True
        self.ct_state = CT255_DEFAULT
        self.sys_state = SS255_DEFAULT
        self.track_flag = TF_DEFAULT
        self.vehicle_flag = VF1_NULL
        self.lap_state = LS255_DEFAULT
        self.track_loc = LOC_DEFAULT
        self.ct_counter = 0
        self.current_gear = 0
        self.min_gear = 0
        self.max_gear = 6
        self.engine_speed = 0
        self.engine_running = False
        self.shifting_counter = 0
        self.shift_up = False
        self.last_gear = 0
        self.reported_throttle = 0
        self.target_speed = 0
        self.tf_broadcaster = TransformBroadcaster(self)
        self.vehicle_state_opp = np.array([0.,0.,0.,0.,0.,0.])
        self.wg = WaypointGenerator(center_line_dir, 0.1)
        self.wg_opp = WaypointGenerator(center_line_dir, 0.1)
        self.s_max = self.current_path[-1,2]
        self.last_i = -1
        self.last_i_opp = -1
        
        self.upshift_rpm = [550, 4000, 5000, 5400, 6000, 6200, 0]
        self.upshift_speed = [-1.0, 30.0, 65.0, 95.0, 130.0, 160.0, 200.0]
        self.downshift_rpm = [0, 500, 2500, 3400, 4500, 5000, 5500]
        self.downshift_speed = [-1.0, 4.0, 25.0, 55.0, 90.0, 125.0, 150.0]

        # Initialize Lap State Machine Parameters
        self.lap_state_inputs = {
            'speeds': {
                'yellow_flag_box_exit': self.get_parameter('lap_state_machine.yellow_flag_box_exit').value,
                'yellow_flag_pit_row': self.get_parameter('lap_state_machine.yellow_flag_pit_row').value,
                'yellow_flag_pit_lane': self.get_parameter('lap_state_machine.yellow_flag_pit_lane').value,
                'yellow_flag_on_track': self.get_parameter('lap_state_machine.yellow_flag_on_track').value,
                'green_flag': self.get_parameter('lap_state_machine.green_flag').value,
                'black_flag': self.get_parameter('lap_state_machine.black_flag').value,
            },
            'locs': {
                'pit_transition_out_loc': self.get_parameter('lap_state_machine.pit_transition_out').value,
                'pit_transition_in_loc': self.get_parameter('lap_state_machine.pit_transition_in').value,
                'pit_entry_dec_loc': self.get_parameter('lap_state_machine.pit_entry_dec').value,
                'pit_inc_speed_loc': self.get_parameter('lap_state_machine.pit_inc_speed').value,
                'pit_dec_speed_loc': self.get_parameter('lap_state_machine.pit_dec_speed').value,
                'pit_stop': self.get_parameter('lap_state_machine.pit_stop').value,
            }
        }

    def opp_control(self, throttle, steer, L=2.971, Ka=5., dt=0.02):
        self.vehicle_state_opp[0] += self.vehicle_state_opp[3] * np.cos(self.vehicle_state_opp[2]) * dt
        self.vehicle_state_opp[1] += self.vehicle_state_opp[3] * np.sin(self.vehicle_state_opp[2]) * dt
        self.vehicle_state_opp[2] += self.vehicle_state_opp[3] * np.tan(steer) * dt / L 
        self.vehicle_state_opp[3] += Ka*throttle*dt
        self.vehicle_state_opp[4] = 0.
        self.vehicle_state_opp[5] = self.vehicle_state_opp[3] / L * np.tan(steer)

    def receive_pt_report(self, msg):
        self.current_gear = msg.current_gear
        self.engine_speed = msg.engine_rpm
        self.engine_running = msg.engine_rpm > 500
        self.reported_throttle = msg.throttle_position
        # print("Got gear: ", self.current_gear, " and engine speed: ", self.engine_speed, " and throttle: ", self.reported_throttle)

    def get_gear_shift_cmd(self):
        # Sets command to current gear if engine is not on or shift attempts denied over the limit
        if self.sim_mode_enabled:
            MS_PER_SHIFT_CALLBACK_CALL = 100
        else:
            MS_PER_SHIFT_CALLBACK_CALL = 10

        if not self.engine_running or self.shifting_counter * MS_PER_SHIFT_CALLBACK_CALL >= 100:
            self.shifting_counter = 0
            return self.current_gear

        # Check our speed against the shift table, and see if we should go down a gear or up a gear.
        current_speed = 2.23694 * self.vehicle_state[3]

        if self.current_gear > self.min_gear and self.engine_speed < self.downshift_rpm[self.current_gear] and current_speed < self.downshift_speed[self.current_gear]:
            self.shifting_counter += 1
            return self.current_gear - 1
        elif self.current_gear < self.max_gear and self.engine_speed > self.upshift_rpm[self.current_gear] and current_speed > self.upshift_speed[self.current_gear]:
            self.shifting_counter += 1
            self.shift_up = True
            self.last_gear = self.current_gear
            return self.current_gear + 1
        elif self.shift_up and self.current_gear == self.last_gear:
            self.shifting_counter += 1
            return self.current_gear + 1
        else:
            self.shifting_counter = 0
            self.shift_up = False
            return self.current_gear
        


    def sim_clock_time_callback(self, msg):
        self.sec = msg.clock.sec
        self.nsec = msg.clock.nanosec
        if msg.clock.sec != 0 and msg.clock.nanosec != 0:
            self.controller()
            self.state_machine()
        self.sim_time_increase_pub.publish(UInt16(data=20))

    def bestpos_callback(self, msg):
        lat = msg.lat
        lon = msg.lon
        height = msg.hgt
        x, y = transformer.transform(lon, lat)
            
        dx = x - self.prev_x
        dy = y - self.prev_y
        self.vehicle_state[2] = np.arctan2(dy, dx)
        self.prev_x = x
        self.prev_y = y

        self.vehicle_state[0] = x - 3.175 * np.cos(self.vehicle_state[2])
        self.vehicle_state[1] = y - 3.175 * np.sin(self.vehicle_state[2])
        # self.vehicle_state[3] = z

        self.previous_state = self.vehicle_state.copy()
        self.position_received = True

        odometry_msg = Odometry()
        odometry_msg.header.stamp = self.get_clock().now().to_msg()
        odometry_msg.header.frame_id = 'map'
        odometry_msg.child_frame_id = 'base_link'
        odometry_msg.pose.pose.position.x = self.vehicle_state[0]
        odometry_msg.pose.pose.position.y = self.vehicle_state[1]
        odometry_msg.pose.pose.position.z = self.vehicle_state[3]

        cy = np.cos(self.vehicle_state[2] * 0.5)
        sy = np.sin(self.vehicle_state[2] * 0.5)

        odometry_msg.pose.pose.orientation.x = 0.0
        odometry_msg.pose.pose.orientation.y = 0.0
        odometry_msg.pose.pose.orientation.z = sy
        odometry_msg.pose.pose.orientation.w = cy

        self.odometry_pub.publish(odometry_msg)

    def vel_filter_process_sample(self, sample):
        return self.prev_a + self.vel_kp * (sample - self.prev_a)

    def get_xyt_from_s(self,s):
        N = len(self.current_path)
        for i in range(N):
            if self.current_path[i,2] > s:
                break
        i -= 1
        i = i % N
        next_i = (i + 1) % N
        s0 = self.current_path[i,2]
        s1 = self.current_path[next_i,2]
        x0 = self.current_path[i,0]
        y0 = self.current_path[i,1]
        x1 = self.current_path[next_i,0]
        y1 = self.current_path[next_i,1]
        x = x0 + (x1 - x0) * (s - s0) / (s1 - s0)
        y = y0 + (y1 - y0) * (s - s0) / (s1 - s0)
        theta = np.arctan2(y1 - y0, x1 - x0)
        return x,y,theta

    def wheel_speed_callback(self, msg):
        fl = msg.ws_front_left
        fr = msg.ws_front_right
        rl = msg.ws_rear_left
        rr = msg.ws_rear_right
        avg_ws = (fl + fr + rl + rr) / 4.0 / 3.6

        current_time = self.get_clock().now().nanoseconds / 1e9
        dt = current_time - self.prev_time
        accel = self.vel_filter_process_sample((avg_ws - self.previous_state[3]) / dt)
        self.previous_state = self.vehicle_state.copy()
        self.prev_time = current_time
        self.vehicle_state[3] = abs(avg_ws)
        self.vehicle_state[4] = accel

        # vsquared = self.vehicle_state[3] ** 2

        # self.aerodynamic_drag_force = 0.5 * vsquared * self.AIR_DENSITY * self.AERO_DRAG_COEF * self.AERO_CROSS_AREA
        # self.rear_rolling_decel = (0.01 * 2) * 9.81
        # self.front_rolling_decel = (0.008 * 2) * 9.81
        # self.non_brake_decel = (self.rear_rolling_decel + self.front_rolling_decel) + (self.aerodynamic_drag_force + (self.engine_braking_decel / self.REAR_WHEEL_RAD)) / self.VEHICLE_MASS_KG
        # self.non_brake_decel = self.non_brake_decel if self.vehicle_state[0] > 10.0 else 0.0

        self.wheel_speed_received = True

    def receive_ct_input(self, msg):
        self.ct_input = msg.data
        print("Got ", self.ct_input)

    def receive_flags(self, msg):
        self.track_flag = msg.track_flag
        self.vehicle_flag = msg.veh_flag
        self.target_speed = msg.round_target_speed
        self.sys_state = msg.sys_state
        # print("Got flags: ", self.track_flag, self.vehicle_flag, self.target_speed, self.sys_state)

    def euler_matrix(self,roll, pitch, yaw):
        R_x = np.array([[1, 0, 0],
                        [0, np.cos(roll), -np.sin(roll)],
                        [0, np.sin(roll), np.cos(roll)]])
        R_y = np.array([[np.cos(pitch), 0, np.sin(pitch)],
                        [0, 1, 0],
                        [-np.sin(pitch), 0, np.cos(pitch)]])
        R_z = np.array([[np.cos(yaw), -np.sin(yaw), 0],
                        [np.sin(yaw), np.cos(yaw), 0],
                        [0, 0, 1]])
        R = np.dot(R_z, np.dot(R_y, R_x))
        return R

    def quaternion_from_euler(self, roll, pitch, yaw):
        cy = np.cos(yaw * 0.5)
        sy = np.sin(yaw * 0.5)
        cp = np.cos(pitch * 0.5)
        sp = np.sin(pitch * 0.5)
        cr = np.cos(roll * 0.5)
        sr = np.sin(roll * 0.5)

        w = cy * cp * cr + sy * sp * sr
        x = cy * cp * sr - sy * sp * cr
        y = sy * cp * sr + cy * sp * cr
        z = sy * cp * cr - cy * sp * sr
        return [x, y, z, w]

    def calc_shift(self,s,s_opp,vs,vs_opp,sf1=2.,sf2=0.1,t=1.0) :
        if vs == vs_opp :
            return 0.
        ttc = (s_opp-s)+(vs_opp-vs)*t
        eff_s = ttc
        if eff_s < -self.s_max/2. :
            eff_s += self.s_max
        if eff_s > self.s_max/2. :
            eff_s -= self.s_max
        factor = sf1*np.exp(-sf2*np.abs(eff_s)**2)
        return factor
    
    def mpc(self, pose, pose_opp, xytv, v_factor=1., sf1=2., sf2=1e-4, target_vel=80., lane_width=7., gap=2.):
            
        s,e,v = pose
        s_opp,e_opp,v_opp =  pose_opp
        # print(xytv)
        x,y,theta,v = xytv[:4]

        vehicle_state = np.array([x,y,theta,v])
        # Find the closest point on raceline from x,y
        dists = (self.current_path.T[:2] - np.array(vehicle_state[:2])[:,None]).T
        dists = np.sqrt(dists[:, 0] ** 2 + dists[:, 1] ** 2)
        N = len(self.current_path)
        closest_idx = (np.argmin(dists) + 1)%N
        
        curr_idx = (closest_idx)%N
        next_idx = (curr_idx+1)%N
        next_dist = np.sqrt((self.current_path[next_idx,0]-self.current_path[curr_idx,0])**2 + (self.current_path[next_idx,1]-self.current_path[curr_idx,1])**2)
        mpc_traj = []
        dist_target = 0
        _e = self.current_path[curr_idx,4]
        qp = (curr_idx + int((s_opp-s)/gap))
        if qp >= N :
            qp -= N
        if qp <= -N :
            qp += N
        _e_opp = self.current_path[qp,4]
        e = e + _e
        e_opp = e_opp + _e_opp
        for t in np.arange(0.1,1.05,0.1) :
            # print(v_factor, self.current_path[curr_idx,3])
            dist_target += v_factor*self.current_path[curr_idx,3]*0.1
            shift = self.calc_shift(s,s_opp,v,v_opp,sf1,sf2,t)
            if e>e_opp :
                shift = np.abs(shift)
            else :
                shift = -np.abs(shift)
            # print(shift,v,v_opp)
            if (shift+e_opp)*shift < 0. or abs(shift) < 0.03: 
                shift = 0.
            else :
                shift += e_opp
            e_ = -self.current_path[curr_idx,4]
            if e_ + shift > lane_width :
                shift = lane_width - e_
            if e_ + shift < -lane_width :
                shift = -lane_width - e_
            # print(dist_target, next_dist)
            while dist_target - next_dist > 0. :
                dist_target -= next_dist
                curr_idx = next_idx
                next_idx = (next_idx+1)%len(self.current_path)
                next_dist = np.sqrt((self.current_path[next_idx,0]-self.current_path[curr_idx,0])**2 + (self.current_path[next_idx,1]-self.current_path[curr_idx,1])**2)
            ratio = dist_target/next_dist
            pt = (1.-ratio)*self.current_path[next_idx,:2] + ratio*self.current_path[curr_idx,:2]
            theta_traj = np.arctan2(self.current_path[next_idx,1]-self.current_path[curr_idx,1],self.current_path[next_idx,0]-self.current_path[curr_idx,0]) + np.pi/2.
            shifted_pt = pt + shift*np.array([np.cos(theta_traj),np.sin(theta_traj)])
            mpc_traj.append(shifted_pt)
        print(s_opp, s, shift)
        
        # print(mpc_traj)
        if self.sec < 15. :
            throttle, steer = mpc(vehicle_state[:4], np.array(mpc_traj), vmax=40.)
        else :
            throttle, steer = mpc(vehicle_state[:4], np.array(mpc_traj), vmax=110.)
        return throttle, steer

    def controller(self, v_factor=1., sf1=2., sf2=1e-4, target_vel=80., lane_width=7., gap=1.):
        if not self.wheel_speed_received or not self.position_received or not self.path_loaded:
            return
        
        print("State:- x:",self.vehicle_state[0], " y:", self.vehicle_state[1], " psi:", self.vehicle_state[2], " v:", self.vehicle_state[3], " a:", self.vehicle_state[4])

        s,e = self.wg.generate(self.vehicle_state)
            
        self.pose[0] = s
        self.pose[1] = e
        self.pose[2] = self.vehicle_state[3]
        
        if self.first_time :
            self.first_time = False
            x_opp,y_opp,theta_opp = self.get_xyt_from_s(s+500.)
            self.vehicle_state_opp = np.array([x_opp,y_opp,theta_opp,0.,0.,0.])
        s_opp,e_opp = self.wg_opp.generate(self.vehicle_state_opp)
        self.pose_opp[0] = s_opp
        self.pose_opp[1] = e_opp
        self.pose_opp[2] = self.vehicle_state_opp[3]

        throttle, steer = self.mpc(self.pose, self.pose_opp, self.vehicle_state, v_factor, sf1, sf2, target_vel, lane_width, gap)
        throttle_opp, steer_opp = self.mpc(self.pose_opp, self.pose, self.vehicle_state_opp, 0.9, 1.2*sf1, sf2, target_vel, lane_width, gap)
        self.opp_control(throttle_opp, steer_opp, dt=0.02)
        cmds = VehicleInputs()

        cmds.steering_cmd = max(-.2,min(.2,steer)) * self.steering_ratio * (180./np.pi)
        cmds.steering_cmd_count = self.count
        cmds.throttle_cmd = 100*min(max(0.,throttle),1.)
        cmds.throttle_cmd_count = self.count
        cmds.brake_cmd = -500*max(-1.,min(0., throttle))
        cmds.brake_cmd_count = self.count
        cmds.header.stamp = self.get_clock().now().to_msg()
        cmds.gear_cmd = self.get_gear_shift_cmd()
        self.vehicle_cmd_pub.publish(cmds)
        self.count += 1
        print("Sent comand with throttle: ", cmds.throttle_cmd, " and steering: ", cmds.steering_cmd)
        if self.count >= 8:
            self.count = 0
        
        # body polygon
        pts = np.array([
            [LF, L/3],
            [LF, -L/3],
            [-LR, -L/3],
            [-LR, L/3],
        ])
        # transform to world frame
        R = self.euler_matrix(0, 0, self.vehicle_state[2])[:2, :2]
        pts = np.dot(R, pts.T).T
        pts += np.array([self.vehicle_state[0], self.vehicle_state[1]])
        body = PolygonStamped()
        body.header.frame_id = 'map'
        body.header.stamp = self.get_clock().now().to_msg()
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
        R = self.euler_matrix(0, 0, self.vehicle_state_opp[2])[:2, :2]
        pts = np.dot(R, pts.T).T
        pts += np.array([self.vehicle_state_opp[0], self.vehicle_state_opp[1]])
        body = PolygonStamped()
        body.header.frame_id = 'map'
        body.header.stamp = self.get_clock().now().to_msg()
        for i in range(pts.shape[0]):
            p = Point32()
            p.x = float(pts[i, 0])
            p.y = float(pts[i, 1])
            p.z = 0.
            body.polygon.points.append(p)
        self.body_pub_opp_.publish(body)

        q = self.quaternion_from_euler(0, 0, self.vehicle_state[2])
        # Create a TransformStamped message
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "map"  # Parent frame
        t.child_frame_id = "base_link"  # Child frame (unique for each car)
        t.transform.translation.x = self.vehicle_state[0] #- 0.2*np.cos(psi)
        t.transform.translation.y = self.vehicle_state[1] #- 0.2*np.sin(psi)
        t.transform.translation.z = 0.
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]  # No rotation (identity quaternion)
        self.tf_broadcaster.sendTransform(t)

        

    def slow_timer_callback(self):
        
        # return
        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(self.left_line.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(self.left_line[i][0])
            pose.pose.position.y = float(self.left_line[i][1])
            path.poses.append(pose)
        self.left_boundary_pub_.publish(path)

        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(self.right_line.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(self.right_line[i][0])
            pose.pose.position.y = float(self.right_line[i][1])
            path.poses.append(pose)
        self.right_boundary_pub_.publish(path)

        path = Path()
        path.header.frame_id = 'map'
        path.header.stamp = self.get_clock().now().to_msg()
        for i in range(self.race_line.shape[0]):
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = float(self.race_line[i][0])
            pose.pose.position.y = float(self.race_line[i][1])
            path.poses.append(pose)
        self.raceline_pub_.publish(path)

    def calculate_base_projections(self, path, current_position):
        start_index = 0
        best_distance = 1000000
        for i, point in enumerate(path['points']):
            dx = point['x'] - current_position['x']
            dy = point['y'] - current_position['y']
            distance = np.sqrt(dx * dx + dy * dy)
            if distance < best_distance:
                best_distance = distance
                start_index = i
        return start_index


    def long_control(self):
        # Implement long control logic
        pass

    def lateral_control(self):
        # Implement lateral control logic
        pass
    
    def dbw_state_machine(self, ct_state, track_flag, vehicle_flag, sys_state, estop, ct_input, velocity):
        print("ct_state:", ct_state, "track_flag:", track_flag, "vehicle_flag:", vehicle_flag, "sys_state:", sys_state, "estop:", estop, "ct_input:", ct_input, "velocity:", velocity)
        if ct_state == CT255_DEFAULT:  # CT255
            if track_flag == TF1_RED:
                ct_state = CT1_PWR_ON

        elif ct_state == CT1_PWR_ON:  # CT1
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            else:
                ct_state = CT2_INITIALIZED

        elif ct_state == CT2_INITIALIZED:  # CT2
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif track_flag == TF1_RED:
                ct_state = CT3_ACT_TEST

        elif ct_state == CT3_ACT_TEST:  # CT3
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif track_flag == TF1_RED:
                ct_state = CT4_CRANKREADY

        elif ct_state == CT4_CRANKREADY:  # CT4
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif track_flag == TF2_ORANGE:
                ct_state = CT5_CRANKING

        elif ct_state == CT5_CRANKING:  # CT5
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            elif sys_state == SS8_ENG_RUNNING:
                ct_state = CT6_RACEREADY

        elif ct_state == CT6_RACEREADY:  # CT6
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            else:
                ct_state = CT7_INIT_DRIVING

        elif ct_state == CT7_INIT_DRIVING:  # CT7
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            elif sys_state == SS9_DRIVING and track_flag == TF3_YELLOW:
                ct_state = CT8_CAUTION

        elif ct_state == CT8_CAUTION:  # CT8
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            elif vehicle_flag == VF8_PURPLE:
                ct_state = CT12_EMRG_SHUTDOWN
            # elif track_flag == TF4_GREEN:
            #     ct_state = CT9_NOM_RACE
            # elif track_flag == TF1_RED:
            #     ct_state = CT10_COORD_STOP

        elif ct_state == CT9_NOM_RACE:  # CT9
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            elif vehicle_flag == VF8_PURPLE:
                ct_state = CT12_EMRG_SHUTDOWN
            elif track_flag == TF3_YELLOW:
                ct_state = CT8_CAUTION
            elif track_flag == TF1_RED:
                ct_state = CT10_COORD_STOP

        elif ct_state == CT10_COORD_STOP:  # CT10
            if estop:
                ct_state = CT12_EMRG_SHUTDOWN
            elif ct_input == 11 and velocity <= 0.0:
                ct_state = CT11_CNTRL_SHUTDOWN
            elif vehicle_flag == VF8_PURPLE:
                ct_state = CT12_EMRG_SHUTDOWN
            elif track_flag == TF3_YELLOW:
                ct_state = CT8_CAUTION
            elif track_flag == TF4_GREEN:
                ct_state = CT9_NOM_RACE

        elif ct_state == CT11_CNTRL_SHUTDOWN:  # CT11
            if track_flag == TF2_ORANGE:
                ct_state = CT5_CRANKING

        elif ct_state == CT12_EMRG_SHUTDOWN:  # CT12
            pass

        if ct_input != 0:
            ct_input = 0

        return ct_state

    def state_machine(self):
        # Implement state machine logic
        if not self.position_received or not self.wheel_speed_received or not self.path_loaded:
            return

        # Process Drive by Wire State Machine
        self.ct_state = self.dbw_state_machine(self.ct_state, self.track_flag, self.vehicle_flag, self.sys_state, False, self.ct_input, self.vehicle_state[3])

        # Process Lap State Machine
        self.lap_state_inputs['ct_state'] = self.ct_state
        self.lap_state_inputs['vehicle_flag'] = self.vehicle_flag
        self.lap_state_inputs['track_flag'] = self.track_flag
        self.lap_state_inputs['target_speed'] = self.target_speed
        self.lap_state_inputs['current_speed'] = self.vehicle_state[3]
        # self.lap_state_inputs['center_line_s'] = self.center_line_s
        # self.lap_state_inputs['pit_lane_s'] = self.pit_line_s

        # self.lap_state_machine.transition(self.lap_state_inputs, self.lap_state_outputs)

        # self.desired_velocity = self.lap_state_outputs['des_vel'] / 2.23694  # Convert from MPH to m/s
        # if self.lap_state_outputs['path'] == "pits":
        #     self.current_path = self.pit_line
        # else:
        #     self.current_path = self.center_line

        # Publish CT Report
        ct_report_msg = ToRaptor()
        ct_report_msg.ct_state = int(self.ct_state)
        ct_report_msg.header.stamp = self.get_clock().now().to_msg()
        ct_report_msg.track_cond_ack = int(self.track_flag)
        ct_report_msg.veh_sig_ack = int(self.vehicle_flag)
        ct_report_msg.rolling_counter = self.ct_counter
        ct_report_msg.veh_num = 1
        self.ct_report_pub.publish(ct_report_msg)
        self.ct_counter = (self.ct_counter + 1) % 8

        # Populate Debug Message
        debug_msg = NPCDebug()
        debug_msg.ct_state = int(self.ct_state)
        debug_msg.track_flag = int(self.track_flag)
        debug_msg.vehicle_flag = int(self.vehicle_flag)
        debug_msg.sys_state = int(self.sys_state)
        # debug_msg.track_loc = int(self.lap_state_inputs['track_loc'])
        # debug_msg.lap_state = int(self.lap_state_inputs['lap_state'])
        # debug_msg.center_s = self.center_line_s
        # debug_msg.pit_s = self.pit_line_s
        self.debug_pub.publish(debug_msg)

    def load_path(self, filename):
        # Implement path loading logic
        trajectory = pd.read_csv(filename)
        # convert trajectory to numpy array
        trajectory = trajectory.to_numpy()
        return trajectory

def main(args=None):
    rclpy.init(args=args)
    controller_node = ControllerNode()
    rclpy.spin(controller_node)
    controller_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()