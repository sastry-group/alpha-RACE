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
from rosgraph_msgs.msg import Clock
import numpy as np
import pandas as pd
from scipy.interpolate import interp1d
from mpc_controller import mpc

class ControllerNode(Node):
    def __init__(self):
        super().__init__('npc_controller')

        # Parameters
        self.declare_parameter('qos_history', 1)
        self.declare_parameter('track_name', '')
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
            durability=QoSDurabilityPolicy.VOLATILE
        )

        self.vehicle_state = np.array([0.,0.,0.,0.])
        # Simulation Mode
        self.sim_mode_enabled = os.getenv('SIM_CLOCK_MODE', 'false').lower() == 'true'

        # Subscribers
        self.bestpos_sub = self.create_subscription(
            BESTPOS, 'bestpos', self.bestpos_callback, qos)
        self.wheel_speed_sub = self.create_subscription(
            VehicleData, 'vehicle_data', self.wheel_speed_callback, qos)
        # self.pt_report_sub = self.create_subscription(
        #     PowertrainData, 'powertrain_data', self.receive_pt_report, qos)
        self.ct_input_sub = self.create_subscription(
            Int32, 'ct_input', self.receive_ct_input, qos)
        self.flags_sub = self.create_subscription(
            RaceControl, 'race_control', self.receive_flags, qos)
        if self.sim_mode_enabled:
            self.sim_clock_time_sub = self.create_subscription(
                Clock, 'clock', self.sim_clock_time_callback, sim_qos)

        # Load Track Paths
        track_name = self.get_parameter('track_name').value
        share_dir = '/root/ros_ws/src/npc_controller/'
        map_dir = os.path.join(share_dir, 'maps', track_name)
        pit_line_dir = os.path.join(map_dir, 'pit_lane.csv')
        self.pit_line = self.load_path(pit_line_dir)
        center_line_dir = os.path.join(map_dir, 'center_line.csv')
        self.center_line = self.load_path(center_line_dir)
        self.path_loaded = True

        self.current_path = self.pit_line

        self.prev_a = 0.

        # Timers
        if not self.sim_mode_enabled:
            self.pure_pursuit_timer = self.create_timer(0.01, self.pure_pursuit)
            self.long_control_timer = self.create_timer(0.01, self.long_control)
            self.control_timer = self.create_timer(0.01, self.lateral_control)
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

    def sim_clock_time_callback(self, msg):
        self.sec = msg.clock.sec
        self.nsec = msg.clock.nanosec
        if msg.clock.sec != 0 and msg.clock.nanosec != 0:
            self.controller()
        self.sim_time_increase_pub.publish(UInt16(data=10))

    def bestpos_callback(self, msg):
        lat = msg.lat
        lon = msg.lon
        height = msg.hgt
        x, y, z = self.gps_map_forward(lat, lon, height)

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

    def wheel_speed_callback(self, msg):
        fl = msg.ws_front_left
        fr = msg.ws_front_right
        rl = msg.ws_rear_left
        rr = msg.ws_rear_right
        avg_ws = (fl + fr + rl + rr) / 4.0 / 3.6

        current_time = self.get_clock().now().nanoseconds / 1e9
        dt = current_time - self.prev_time
        accel = self.vel_filter_process_sample((avg_ws - self.previous_state[0]) / dt)
        self.previous_state = self.vehicle_state.copy()
        self.prev_time = current_time
        self.vehicle_state[3] = avg_ws
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

    def receive_flags(self, msg):
        self.track_flag = self.int2tf(msg.track_flag)
        self.vehicle_flag = self.int2vf(msg.veh_flag)
        self.target_speed = msg.round_target_speed
        self.sys_state = self.int2sys(msg.sys_state)

    def controller(self, target_vel=10.):
        if not self.wheel_speed_received or not self.position_received or not self.path_loaded:
            return

        dists = (self.current_path.T - self.vehicle_state[:2]).T
        dists = np.sqrt(dists[:, 0] ** 2 + dists[:, 1] ** 2)

        closest_id = np.argmin(dists)
        mpc_traj = []
        next_dist = target_vel * 0.1
        N = len(self.current_path)
        for i in range(10):
            consec_dist = np.linalg.norm(self.current_path[(closest_id + 1)%N] - self.current_path[closest_id])
            while next_dist > consec_dist:
                next_dist -= consec_dist
                closest_id = (closest_id + 1)%N
                consec_dist = np.linalg.norm(self.current_path[(closest_id + 1)%N] - self.current_path[closest_id])
            ratio = next_dist / consec_dist
            mpc_traj.append(self.current_path[closest_id] + ratio * (self.current_path[(closest_id + 1)%N] - self.current_path[closest_id]))
            next_dist += target_vel * 0.1
        
        throttle, steer = mpc(self.vehicle_state[:4], np.array(mpc_traj), target_vel)
        cmds = VehicleInputs()

        cmds.steering_cmd = steer * self.steering_ratio * (180./np.pi)
        cmds.steering_cmd_count = self.count
        cmds.throttle_cmd = 100*max(0.,throttle)
        cmds.throttle_cmd_count = self.count
        cmds.brake_cmd = -5000*min(0., throttle)
        cmds.brake_cmd_count = self.count
        cmds.header.stamp = self.get_clock().now().to_msg()
        self.vehicle_cmd_pub.publish(cmds)
        self.count += 1
        if self.count >= 8:
            self.count = 0


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

    def state_machine(self):
        # Implement state machine logic
        pass

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