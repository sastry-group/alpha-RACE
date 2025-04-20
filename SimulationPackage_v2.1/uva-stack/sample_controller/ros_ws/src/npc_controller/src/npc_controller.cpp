#include <filesystem>
#include <stdlib.h>

#include <ament_index_cpp/get_package_share_directory.hpp>

#include "npc_controller/npc_controller.hpp"
#include <rclcpp/qos.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <libalglib/interpolation.h>

namespace controller
{
    ControllerNode::ControllerNode(const rclcpp::NodeOptions &options)
        : Node("npc_controller", options)
    {

        const auto history_size{declare_parameter("qos_history", 1)};
        const auto qos = rclcpp::QoS(rclcpp::KeepLast(history_size), rmw_qos_profile_iac);
        const auto sim_qos = rclcpp::QoS(rclcpp::KeepLast(history_size), rmw_qos_profile_sim_clock);

        if (std::getenv("SIM_CLOCK_MODE"))
        {
            if (std::string(std::getenv("SIM_CLOCK_MODE")) == "true")
                this->simModeEnabled = true;
            else
                this->simModeEnabled = false;
        }
        else
        {
            this->simModeEnabled = false;
        }

        // Initialize subscribers.
        bestpos_sub_ = create_subscription<novatel_oem7_msgs::msg::BESTPOS>(
            "bestpos", qos, std::bind(&ControllerNode::bestpos_callback, this, std::placeholders::_1));
        wheel_speed_sub_ = create_subscription<autonoma_msgs::msg::VehicleData>(
            "vehicle_data", qos, std::bind(&ControllerNode::wheel_speed_callback, this, std::placeholders::_1));
        pt_report_sub_ = create_subscription<autonoma_msgs::msg::PowertrainData>(
            "powertrain_data", qos, std::bind(&ControllerNode::receivePtReport, this, std::placeholders::_1));
        ct_input_sub_ = this->create_subscription<std_msgs::msg::Int32>("ct_input", qos, std::bind(&ControllerNode::receiveCtInput, this, std::placeholders::_1));
        flags_sub_ = this->create_subscription<autonoma_msgs::msg::RaceControl>("race_control", qos, std::bind(&ControllerNode::receiveFlags, this, std::placeholders::_1));
        if(this->simModeEnabled)
            simClockTime_ = this->create_subscription<rosgraph_msgs::msg::Clock>("clock", sim_qos, std::bind(&ControllerNode::simClockTimeCallback, this, std::placeholders::_1));

        // Load Track Paths
        std::string track_name = declare_parameter("track_name", "");
        std::filesystem::path share_dir = std::filesystem::path(ament_index_cpp::get_package_share_directory("npc_controller"));
        std::filesystem::path map_dir = share_dir /
                                        std::filesystem::path("maps") /
                                        std::filesystem::path(track_name);
        std::filesystem::path pit_line_dir =
            map_dir / map_dir / std::filesystem::path("pit_lane.csv");
        pit_line_ = load_path(pit_line_dir.string());
        std::filesystem::path center_line_dir =
            map_dir / map_dir / std::filesystem::path("center_line.csv");
        center_line_ = load_path(center_line_dir.string());
        path_loaded = true;

        current_path_ = &pit_line_;

        // Initialize timers.
        if(!this->simModeEnabled)
        {       
            pure_pursuit_timer_ = create_wall_timer(std::chrono::milliseconds((int)(10)), std::bind(&ControllerNode::pure_pursuit, this));
            long_control_timer_ = create_wall_timer(std::chrono::milliseconds((int)(10)), std::bind(&ControllerNode::long_control, this));
            control_timer_ = create_wall_timer(std::chrono::milliseconds((int)(10)), std::bind(&ControllerNode::lateral_control, this));
            state_machine_timer_ = create_wall_timer(std::chrono::milliseconds((int)(10)), std::bind(&ControllerNode::state_machine, this));
        }

        // Set time increase step to 10 ms
        sim_time_increase_msg_.data = 10;

        // Initialize publishers.
        vehicle_cmd_pub_ = create_publisher<autonoma_msgs::msg::VehicleInputs>("vehicle_inputs", qos);
        ct_report_pub_ = this->create_publisher<autonoma_msgs::msg::ToRaptor>("to_raptor", qos);
        sim_time_increase_pub_ = this->create_publisher<std_msgs::msg::UInt16>("sim_time_increase", sim_qos);
        // Debug Publishers
        odometry_pub_ = create_publisher<nav_msgs::msg::Odometry>("odometry", qos);
        target_point_pub_ = create_publisher<geometry_msgs::msg::PointStamped>("target_point", qos);
        base_point_pub_ = create_publisher<geometry_msgs::msg::PointStamped>("base_point", qos);
        debug_pub_ = create_publisher<npc_controller_msgs::msg::NPCDebug>("debug", qos);

        if(this->simModeEnabled)
        {
            prev_time_ = double(this->sec) + double(this->nsec) * 1e-9;
            prev_vel_time_ = double(this->sec) + double(this->nsec) * 1e-9;
            prev_acc_time_ = double(this->sec) + double(this->nsec) * 1e-9;
        }
        else
        {       
            prev_time_ = this->now().seconds() + this->now().nanoseconds() * 1e-9;
            prev_vel_time_ = this->now().seconds() + this->now().nanoseconds() * 1e-9;
            prev_acc_time_ = this->now().seconds() + this->now().nanoseconds() * 1e-9;
        }

        // Declare Parameters
        declare_parameter("vehicle.wheelbase", 2.971);
        declare_parameter("vehicle.steering_ratio", 15.0);
        declare_parameter("vehicle.min_steer", -0.2793);
        declare_parameter("vehicle.max_steer", 0.2793);
        declare_parameter("vehicle.min_lookahead_dist", 15.0);
        declare_parameter("vehicle.max_lookahead_dist", 45.0);
        declare_parameter("vehicle.lookahead_gain", 0.8);

        declare_parameter("vehicle.min_throttle", 0.0);
        declare_parameter("vehicle.max_throttle", 100.0);
        declare_parameter("vehicle.min_brake", 0.0);
        declare_parameter("vehicle.max_brake", 5500.0);
        declare_parameter("vehicle.max_acc", 5.5);
        declare_parameter("vehicle.min_acc", -6.0);
        declare_parameter("vehicle.vel_kp", 0.2);
        declare_parameter("vehicle.vel_ki", 0.005);
        declare_parameter("vehicle.vel_kd", 0.08);
        declare_parameter("vehicle.throttle_kp", 0.03);
        declare_parameter("vehicle.throttle_ki", 0.01);
        declare_parameter("vehicle.throttle_kd", 0.05);
        declare_parameter("vehicle.braking_kp", 0.002);
        declare_parameter("vehicle.braking_ki", 0.0001);
        declare_parameter("vehicle.braking_kd", 0.0001);

        declare_parameter("lap_state_machine.yellow_flag_box_exit", 18.0);
        declare_parameter("lap_state_machine.yellow_flag_pit_row", 30.0);
        declare_parameter("lap_state_machine.yellow_flag_pit_lane", 30.0);
        declare_parameter("lap_state_machine.yellow_flag_on_track", 60.0);
        declare_parameter("lap_state_machine.green_flag", 60.0);
        declare_parameter("lap_state_machine.black_flag", 50.0);
        declare_parameter("lap_state_machine.pit_transition_out", 1055.3165683121185);
        declare_parameter("lap_state_machine.pit_transition_in", 1093.7091990052456);
        declare_parameter("lap_state_machine.pit_entry_dec", 993.7091990052456);
        declare_parameter("lap_state_machine.pit_inc_speed", 160.21269895019626);
        declare_parameter("lap_state_machine.pit_dec_speed", 2003.823017429067);
        declare_parameter("lap_state_machine.pit_stop", 115.29526969674424);

        // Load Parameters
        wheelbase_ = get_parameter("vehicle.wheelbase").as_double();
        steering_ratio_ = get_parameter("vehicle.steering_ratio").as_double();
        min_steer_ = get_parameter("vehicle.min_steer").as_double();
        max_steer_ = get_parameter("vehicle.max_steer").as_double();
        min_lookahead_dist_ = get_parameter("vehicle.min_lookahead_dist").as_double();
        max_lookahead_dist_ = get_parameter("vehicle.max_lookahead_dist").as_double();
        lookahead_gain_ = get_parameter("vehicle.lookahead_gain").as_double();

        min_throttle_ = get_parameter("vehicle.min_throttle").as_double();
        max_throttle_ = get_parameter("vehicle.max_throttle").as_double();
        min_brake_ = get_parameter("vehicle.min_brake").as_double();
        max_brake_ = get_parameter("vehicle.max_brake").as_double();
        max_acc_ = get_parameter("vehicle.max_acc").as_double();
        min_acc_ = get_parameter("vehicle.min_acc").as_double();
        vel_kp_ = get_parameter("vehicle.vel_kp").as_double();
        vel_ki_ = get_parameter("vehicle.vel_ki").as_double();
        vel_kd_ = get_parameter("vehicle.vel_kd").as_double();
        throttle_kp_ = get_parameter("vehicle.throttle_kp").as_double();
        throttle_ki_ = get_parameter("vehicle.throttle_ki").as_double();
        throttle_kd_ = get_parameter("vehicle.throttle_kd").as_double();
        brake_kp_ = get_parameter("vehicle.braking_kp").as_double();
        brake_ki_ = get_parameter("vehicle.braking_ki").as_double();
        brake_kd_ = get_parameter("vehicle.braking_kd").as_double();

        // Initialize Lap State Machine Parameters
        LapStateSpeeds speeds;
        speeds.yellow_flag_box_exit = get_parameter("lap_state_machine.yellow_flag_box_exit").as_double();
        speeds.yellow_flag_pit_row = get_parameter("lap_state_machine.yellow_flag_pit_row").as_double();
        speeds.yellow_flag_pit_lane = get_parameter("lap_state_machine.yellow_flag_pit_lane").as_double();
        speeds.yellow_flag_on_track = get_parameter("lap_state_machine.yellow_flag_on_track").as_double();
        speeds.green_flag = get_parameter("lap_state_machine.green_flag").as_double();
        speeds.black_flag = get_parameter("lap_state_machine.black_flag").as_double();
        LapStateLocs locs;
        locs.pit_transition_out_loc = get_parameter("lap_state_machine.pit_transition_out").as_double();
        locs.pit_transition_in_loc = get_parameter("lap_state_machine.pit_transition_in").as_double();
        locs.pit_entry_dec_loc = get_parameter("lap_state_machine.pit_entry_dec").as_double();
        locs.pit_inc_speed_loc = get_parameter("lap_state_machine.pit_inc_speed").as_double();
        locs.pit_dec_speed_loc = get_parameter("lap_state_machine.pit_dec_speed").as_double();
        locs.pit_stop = get_parameter("lap_state_machine.pit_stop").as_double();

        lap_state_inputs_.speeds = speeds;
        lap_state_inputs_.locs = locs;
    }

    // Callbacks
    void ControllerNode::simClockTimeCallback(const rosgraph_msgs::msg::Clock &msg)
    {
        // std::cout << "check controller now time second"<< this->now().seconds() << std::endl;
        // std::cout << "ccheck controller now time nanosecond"<< this->now().nanoseconds() << std::endl;
        // std::cout << "check controller message time second" << msg.clock.sec << std::endl;
        // std::cout << "check controller message time nanosecond" << msg.clock.nanosec << std::endl;
        this->sec = msg.clock.sec;
        this->nsec = msg.clock.nanosec;
        if (msg.clock.sec != 0 && msg.clock.nanosec != 0)
        {
            pure_pursuit();
            long_control();
            lateral_control();
            state_machine();
        }
        sim_time_increase_pub_->publish(sim_time_increase_msg_);
    }

    void ControllerNode::bestpos_callback(const novatel_oem7_msgs::msg::BESTPOS::SharedPtr msg)
    {
        double lat = msg->lat;
        double lon = msg->lon;
        double height = msg->hgt;
        double x, y, z;
        gps_map_.Forward(lat, lon, height, x, y, z);

        // Calculate Heading from Position Difference
        double dx = x - prev_x_;
        double dy = y - prev_y_;
        vehicle_state_.yaw = std::atan2(dy, dx);
        prev_x_ = x;
        prev_y_ = y;

        // Convert from Antenna to Rear Axle of Vehicle
        vehicle_state_.x = x - 3.175 * std::cos(vehicle_state_.yaw);
        vehicle_state_.y = y - 3.175 * std::sin(vehicle_state_.yaw);
        vehicle_state_.z = z;

        previous_state_ = vehicle_state_;
        position_received = true;

        // Publish Odometry
        odometry_msg_.header.stamp = this->now();
        odometry_msg_.header.frame_id = "map";
        odometry_msg_.child_frame_id = "base_link";
        odometry_msg_.pose.pose.position.x = vehicle_state_.x;
        odometry_msg_.pose.pose.position.y = vehicle_state_.y;
        odometry_msg_.pose.pose.position.z = vehicle_state_.z;

        double cy = std::cos(vehicle_state_.yaw * 0.5);
        double sy = std::sin(vehicle_state_.yaw * 0.5);

        odometry_msg_.pose.pose.orientation.x = 0.0;
        odometry_msg_.pose.pose.orientation.y = 0.0;
        odometry_msg_.pose.pose.orientation.z = sy;
        odometry_msg_.pose.pose.orientation.w = cy;

        odometry_pub_->publish(odometry_msg_);
    }

    void ControllerNode::wheel_speed_callback(const autonoma_msgs::msg::VehicleData::SharedPtr msg)
    {
        // void ControllerNode::wheel_speed_callback(const raptor_dbw_msgs::msg::WheelSpeedReport::SharedPtr msg){
        double fl = msg->ws_front_left;
        double fr = msg->ws_front_right;
        double rl = msg->ws_rear_left;
        double rr = msg->ws_rear_right;
        double avg_ws = (fl + fr + rl + rr) / 4.0 / 3.6;

        double current_time;
        if(this->simModeEnabled) {current_time = double(msg->header.stamp.sec) + double(msg->header.stamp.nanosec) * 1e-9;}
        else {current_time = this->now().seconds() + this->now().nanoseconds() * 1e-9;}

        double dt = current_time - prev_time_;
        double accel = vel_filter_.processSample((avg_ws - previous_state_.vx) / dt);
        previous_state_ = vehicle_state_;
        prev_time_ = current_time;
        vehicle_state_.vx = avg_ws; // Convert to m/s
        vehicle_state_.ax = accel;

        double vsquared = vehicle_state_.vx * vehicle_state_.vx;

        aerodynamic_drag_force_ = 0.5 * vsquared * AIR_DENSITY * AERO_DRAG_COEF * AERO_CROSS_AREA;
        rear_rolling_decel_ = (0.01 * 2) * (9.81);
        front_rolling_decel_ = (0.008 * 2) * (9.81);
        non_brake_decel_ = (rear_rolling_decel_ + front_rolling_decel_) + (aerodynamic_drag_force_ + (engine_braking_decel / REAR_WHEEL_RAD)) / VEHICLE_MASS_KG;
        non_brake_decel_ = ((vehicle_state_.vx > 10.0) ? non_brake_decel_ : 0.0);

        wheel_speed_received = true;
    }

    void ControllerNode::receiveCtInput(const std_msgs::msg::Int32::SharedPtr msg)
    {
        ct_input_ = msg->data;
    }

    void ControllerNode::receiveFlags(const autonoma_msgs::msg::RaceControl::SharedPtr msg)
    {
        track_flag_ = int2tf(msg->track_flag);
        vehicle_flag_ = int2vf(msg->veh_flag);
        target_speed_ = msg->round_target_speed;
        sys_state_ = int2sys(msg->sys_state);
    }

    void ControllerNode::pure_pursuit()
    {
        /**
         * @brief This function computes the steering angle using the pure pursuit algorithm
         * @return The steering angle in radians
         */

        // Check to see if we have enough localization data.
        if (!wheel_speed_received || !position_received || !path_loaded) {return;}

        PathPoint current_position;
        current_position.x = vehicle_state_.x;
        current_position.y = vehicle_state_.y;
        current_position.z = vehicle_state_.z;
        current_position.yaw = vehicle_state_.yaw;

        int start_index = calculate_base_projections(*current_path_, current_position);

        double current_velocity = vehicle_state_.vx;
        double lookahead = std::max(min_lookahead_dist_, std::min(lookahead_gain_ * current_velocity, max_lookahead_dist_));

        PathPoint target_position = pure_pursuit_target_point(*current_path_, start_index, current_position, lookahead);

        double pursuit_vector_dx = target_position.x - current_position.x;
        double pursuit_vector_dy = target_position.y - current_position.y;

        double alpha = atan2(pursuit_vector_dy, pursuit_vector_dx) - vehicle_state_.yaw;
        double delta = atan((2 * wheelbase_ * sin(alpha)) / lookahead);

        // Update the steering angle.
        pure_pursuit_steering_angle = delta;

        // Visualize the pure pursuit base and target points
        base_point_msg_.header.stamp = this->now();
        base_point_msg_.header.frame_id = "map";
        base_point_msg_.point.x = current_path_->points[start_index].x;
        base_point_msg_.point.y = current_path_->points[start_index].y;

        target_point_msg_.header.stamp = this->now();
        target_point_msg_.header.frame_id = "map";
        target_point_msg_.point.x = target_position.x;
        target_point_msg_.point.y = target_position.y;

        base_point_pub_->publish(base_point_msg_);
        target_point_pub_->publish(target_point_msg_);
    }

    int ControllerNode::calculate_base_projections(const Path &path, const PathPoint &current_position)
    {
        // Calculate start index. Find the closest point to us.
        int start_index = 0;
        double best_distance = 1000000;
        for (unsigned int i = 0; i < path.points.size(); i++)
        {
            double dx = path.points[i].x - current_position.x;
            double dy = path.points[i].y - current_position.y;
            double distance = sqrt(dx * dx + dy * dy);
            if (distance < best_distance)
            {
                best_distance = distance;
                start_index = i;
            }
        }
        return start_index;
    }

    void ControllerNode::long_control()
    {
        // Update Long Control Parameters
        min_throttle_ = get_parameter("vehicle.min_throttle").as_double();
        max_throttle_ = get_parameter("vehicle.max_throttle").as_double();
        min_brake_ = get_parameter("vehicle.min_brake").as_double();
        max_brake_ = get_parameter("vehicle.max_brake").as_double();
        max_acc_ = get_parameter("vehicle.max_acc").as_double();
        min_acc_ = get_parameter("vehicle.min_acc").as_double();
        vel_kp_ = get_parameter("vehicle.vel_kp").as_double();
        vel_ki_ = get_parameter("vehicle.vel_ki").as_double();
        vel_kd_ = get_parameter("vehicle.vel_kd").as_double();
        throttle_kp_ = get_parameter("vehicle.throttle_kp").as_double();
        throttle_ki_ = get_parameter("vehicle.throttle_ki").as_double();
        throttle_kd_ = get_parameter("vehicle.throttle_kd").as_double();
        brake_kp_ = get_parameter("vehicle.braking_kp").as_double();
        brake_ki_ = get_parameter("vehicle.braking_ki").as_double();
        brake_kd_ = get_parameter("vehicle.braking_kd").as_double();

        // Calculate Desired Acceleration
        double desired_acceleration = calc_acceleration(desired_velocity_);
        desired_acceleration = std::max(min_acc_, std::min(desired_acceleration, max_acc_));
        // double throttle = vehicle_state_.throttle;
        // bool is_accelerating = throttle > 0;

        calc_throttle(desired_acceleration);
        calc_brake(desired_acceleration);

        double max_thr = ((4.0 * 2.23694 * vehicle_state_.vx) / 8.0) + 25.0;

        vehicle_cmd_msg_.throttle_cmd = std::max(min_throttle_, std::min(vehicle_state_.throttle, max_thr));
        vehicle_cmd_msg_.throttle_cmd_count = rolling_counter;

        vehicle_cmd_msg_.brake_cmd = std::max(min_brake_, std::min(vehicle_state_.brake, max_brake_));
        vehicle_cmd_msg_.brake_cmd_count = rolling_counter;

        vehicle_cmd_msg_.gear_cmd = get_gear_shift_cmd();

        vehicle_cmd_msg_.header.stamp = this->now();
        vehicle_cmd_pub_->publish(vehicle_cmd_msg_);

        // Debug Publisher
        debug_msg_.desired_velocity = desired_velocity_;
        debug_msg_.current_velocity = vehicle_state_.vx;
        debug_msg_.desired_acceleration = desired_acceleration;
        debug_msg_.current_acceleration = vehicle_state_.ax;
        debug_msg_.output_throttle = vehicle_state_.throttle;
        debug_msg_.output_brake = vehicle_state_.brake;
        debug_msg_.max_throttle = max_thr;

        debug_pub_->publish(debug_msg_);
    }

    double ControllerNode::calc_acceleration(double set_point)
    {
        // removes oldest instant vel error from vector
        if (vel_error_arr_.size() >= 10)
        {
            vel_integral_error_ -= vel_error_arr_[0];
            vel_error_arr_.erase(vel_error_arr_.begin());
        }

        // Calculate Acceleration Required using PID
        vel_integral_error_ += prev_vel_error_ / 10.0;
        vel_error_arr_.push_back(prev_vel_error_ / 10.0);

        double vel_error = set_point - vehicle_state_.vx;
        double dt;
        if(this->simModeEnabled)
            dt = double(this->sec) + double(this->nsec) * 1e-9 - prev_vel_time_;
        else
            dt = this->now().seconds() + this->now().nanoseconds() * 1e-9 - prev_vel_time_;
        double vel_derivative_error_ = (vel_error - prev_vel_error_) / dt;

        double des_accel = (vel_kp_ * vel_error + vel_ki_ * vel_integral_error_ + vel_kd_ * vel_derivative_error_);
        prev_vel_error_ = vel_error;
        if(this->simModeEnabled)
            prev_vel_time_ = double(this->sec) + double(this->nsec) * 1e-9;
        else
            prev_vel_time_ = this->now().seconds() + this->now().nanoseconds() * 1e-9;
        // removes oldest instant vel error from vector
        if (acc_error_arr_.size() >= 10)
        {
            acc_integral_error_ -= acc_error_arr_[0];
            acc_error_arr_.erase(acc_error_arr_.begin());
        }

        // Calculate Throttle using PID
        acc_integral_error_ += prev_acc_error_ / double(10);
        acc_error_arr_.push_back(prev_acc_error_ / double(10));

        acc_error_ = des_accel - vehicle_state_.ax;
        if(this->simModeEnabled)
            dt = double(this->sec) + double(this->nsec) * 1e-9 - prev_acc_time_;
        else
            dt = this->now().seconds() + this->now().nanoseconds() * 1e-9 - prev_acc_time_;

        acc_derivative_error_ = (acc_error_ - prev_acc_error_) / dt;

        prev_acc_error_ = acc_error_;

        if(this->simModeEnabled)
            prev_acc_time_ = double(this->sec) + double(this->nsec) * 1e-9;
        else
            prev_acc_time_ = this->now().seconds() + this->now().nanoseconds() * 1e-9;

        debug_msg_.vel_p = vel_kp_ * vel_error;
        debug_msg_.vel_i = vel_ki_ * vel_integral_error_;
        debug_msg_.vel_d = vel_kd_ * vel_derivative_error_;
        debug_msg_.thr_p = throttle_kp_ * acc_error_;
        debug_msg_.thr_i = throttle_ki_ * acc_integral_error_; // NaN
        debug_msg_.thr_d = throttle_kd_ * acc_derivative_error_;
        debug_msg_.brk_p = brake_kp_ * acc_error_;
        debug_msg_.brk_i = brake_ki_ * acc_integral_error_; // NaN
        debug_msg_.brk_d = brake_kd_ * acc_derivative_error_;
        debug_msg_.error_acceleration = acc_error_;
        debug_msg_.error_velocity = vel_error;

        return des_accel;
    }

    void ControllerNode::calc_throttle(double desired_acceleration)
    {

        // Calculate Deadband
        double db = -non_brake_decel_;
        if (vehicle_state_.brake > 250.0)
        {
            vehicle_state_.throttle = 0.0;
        }
        else if (desired_acceleration > db || (desired_acceleration > 0.1 && vehicle_state_.vx < 5.0))
        {
            double delta_throttle = (throttle_kp_ * acc_error_ + throttle_ki_ * acc_integral_error_ + throttle_kd_ * acc_derivative_error_);
            vehicle_state_.throttle += delta_throttle;
        }
        else
        {
            vehicle_state_.throttle = 0.0;
        }
    }

    void ControllerNode::calc_brake(double desired_acceleration)
    {

        // Calculate Deadband
        double db = -non_brake_decel_ + 0.05;
        double brake_setpoint = (acc_error_ - db);
        debug_msg_.brake_deadband = db;
        if (vehicle_state_.vx < 1.0 && desired_acceleration < 0.0)
        {
            vehicle_state_.brake = 0.0;
        }
        else if (desired_acceleration < db)
        {

            vehicle_state_.brake = -(desired_acceleration - db) * VEHICLE_MASS_KG * REAR_WHEEL_RAD;
            vehicle_state_.brake += -(brake_kp_ * brake_setpoint + brake_ki_ * acc_integral_error_ + brake_kd_ * acc_derivative_error_) * this->REAR_WHEEL_RAD * this->VEHICLE_MASS_KG;
        }
        else
        {
            vehicle_state_.brake = 0.0;
        }
    }

    PathPoint ControllerNode::pure_pursuit_target_point(const Path &path, int start_index, const PathPoint &position, double lookahead) const
    {
        int min_ind = 0;
        double min_diff = 1000000.0;
        // todo: make better w/ interpolation between indices
        // the path.points.size()/2 is to make sure we don't accidentally look behind ourselves
        for (unsigned int i = start_index; i < path.points.size() / 2 + start_index; i++)
        {
            double dx = (path.points[i % path.points.size()].x - position.x);
            double dy = (path.points[i % path.points.size()].y - position.y);
            // Finds the point that is along the circle at a distance `lookahead` away.
            double diff = abs(lookahead - sqrt(dx * dx + dy * dy));
            if (diff < min_diff)
            {
                min_diff = diff;
                min_ind = i;
            }
        }
        return path.points[min_ind % path.points.size()];
    }

    void ControllerNode::lateral_control()
    {
        /**
         * @brief This function is called at a fixed rate to compute the steering angle
         */
        if (!position_received || !wheel_speed_received || !path_loaded) {return;}

        // Update Lateral Control Parameters
        wheelbase_ = get_parameter("vehicle.wheelbase").as_double();
        steering_ratio_ = get_parameter("vehicle.steering_ratio").as_double();
        min_steer_ = get_parameter("vehicle.min_steer").as_double();
        max_steer_ = get_parameter("vehicle.max_steer").as_double();
        min_lookahead_dist_ = get_parameter("vehicle.min_lookahead_dist").as_double();
        max_lookahead_dist_ = get_parameter("vehicle.max_lookahead_dist").as_double();
        lookahead_gain_ = get_parameter("vehicle.lookahead_gain").as_double();

        // Saturate and Translate Wheel Angle to Steering Wheel Angle
        double steering_angle = std::max(min_steer_, std::min(pure_pursuit_steering_angle, max_steer_));
        vehicle_cmd_msg_.steering_cmd = steering_angle * (180.0 / M_PI) * steering_ratio_;
        vehicle_cmd_msg_.steering_cmd_count = rolling_counter;
        rolling_counter++;
        if (rolling_counter >= 8)
        {
            rolling_counter = 0;
        }
        
        // steering_cmd_pub_->publish(steering_cmd);
        vehicle_cmd_msg_.header.stamp = this->now();
        vehicle_cmd_pub_->publish(vehicle_cmd_msg_);
    }

    void ControllerNode::receivePtReport(const autonoma_msgs::msg::PowertrainData::SharedPtr msg)
    {
        current_gear_ = msg->current_gear;
        engine_speed_ = msg->engine_rpm;
        engine_running_ = bool(msg->engine_rpm > 500);
        reported_throttle_ = msg->throttle_position;
        engine_braking_decel = ((engine_speed_ > 1300 && vehicle_state_.vx > 5.0 && reported_throttle_ < 5.0) ? (30 * GEAR_RATIOS[current_gear_] * FINAL_DRIVE_RATIO) : 0.0);
    }

    uint8_t ControllerNode::get_gear_shift_cmd()
    {
        // Sets command to current gear if engine is not on or shift attempts denied over the limit
        int MS_PER_SHIFT_CALLBACK_CALL;
        if (this->simModeEnabled){MS_PER_SHIFT_CALLBACK_CALL = 100;}
        else {MS_PER_SHIFT_CALLBACK_CALL = 10;}
        
        if (!engine_running_ || shifting_counter_ * MS_PER_SHIFT_CALLBACK_CALL >= shift_time_limit)
        {
            shifting_counter_ = 0;
            return current_gear_;
        }

        // Check our speed against the shift table, and see if we should go down a gear or up a gear.
        float current_speed = 2.23694 * vehicle_state_.vx;

        if (current_gear_ > min_gear && engine_speed_ < downshift_rpm[current_gear_] && current_speed < downshift_speed[current_gear_])
        {
            shifting_counter_++;
            return current_gear_ - 1;
        }
        else if (current_gear_ < max_gear && engine_speed_ > upshift_rpm[current_gear_] && current_speed > upshift_speed[current_gear_])
        {
            shifting_counter_++;
            shift_up_ = true;
            last_gear_ = current_gear_;
            return current_gear_ + 1;
        }
        else if (shift_up_ == true && current_gear_ == last_gear_)
        {
            shifting_counter_++;
            return current_gear_ + 1;
        }
        else
        {
            shifting_counter_ = 0;
            shift_up_ = false;
            return current_gear_;
        }
    }

    // Helper Functions
    Path ControllerNode::load_path(std::string filename)
    {
        std::vector<std::vector<double>> path_data = read_csv(filename, 4, ",");

        alglib::spline1dinterpolant x_interpolator, y_interpolator;

        // Calculate Arc Length
        std::vector<double> arc_length;
        std::vector<double> x;
        std::vector<double> y;
        std::vector<double> z;
        arc_length.push_back(0.0);
        x.push_back(path_data[0][0]);
        y.push_back(path_data[0][1]);

        for (unsigned int i = 1; i < path_data[0].size(); i++)
        {
            x.push_back(path_data[0][i]);
            y.push_back(path_data[1][i]);
            double dx = path_data[0][i] - path_data[0][i - 1];
            double dy = path_data[1][i] - path_data[1][i - 1];
            double ds = std::sqrt(dx * dx + dy * dy);
            arc_length.push_back(arc_length[i - 1] + ds);
        }

        // Generate Splines
        alglib::real_1d_array xs, ys, s;
        xs.setcontent(x.size(), x.data());
        ys.setcontent(y.size(), y.data());
        s.setcontent(arc_length.size(), arc_length.data());

        alglib::spline1dbuildlinear(s, xs, x_interpolator);
        alglib::spline1dbuildlinear(s, ys, y_interpolator);

        double xp, yp, dxp, dyp, ddxp, ddyp;
        std::vector<double> s_sample;
        double track_length = arc_length[arc_length.size() - 1];
        Path path;
        for (double i = 0; i < track_length; i++)
        {
            alglib::spline1ddiff(x_interpolator, i, xp, dxp, ddxp);
            alglib::spline1ddiff(y_interpolator, i, yp, dyp, ddyp);
            PathPoint point;
            point.s = i;
            point.x = xp;
            point.y = yp;
            point.z = 0.0;
            point.yaw = std::atan2(dyp, dxp);
            path.points.push_back(point);
        }

        return path;
    }

    void ControllerNode::state_machine()
    {
        if (!position_received || !wheel_speed_received || !path_loaded)
        {
            return;
        }
        // Calculate Path Base Projections
        PathPoint current_position;
        current_position.x = vehicle_state_.x;
        current_position.y = vehicle_state_.y;
        current_position.z = vehicle_state_.z;
        current_position.yaw = vehicle_state_.yaw;

        // TODO: Adjust for multiple static lines
        int center_bp = calculate_base_projections(center_line_, current_position);
        center_line_s_ = center_line_.points[center_bp].s;
        int pit_bp = calculate_base_projections(pit_line_, current_position);
        pit_line_s_ = pit_line_.points[pit_bp].s;

        // Process Drive by Wire State Machine
        ct_state_ = dbw_state_machine(ct_state_, track_flag_, vehicle_flag_, sys_state_, estop_, ct_input_, vehicle_state_.vx);

        // Process Lap State Machine
        lap_state_inputs_.ct_state = ct_state_;
        lap_state_inputs_.vehicle_flag = vehicle_flag_;
        lap_state_inputs_.track_flag = track_flag_;
        lap_state_inputs_.target_speed = target_speed_;
        lap_state_inputs_.current_speed = vehicle_state_.vx;
        lap_state_inputs_.center_line_s = center_line_s_;
        lap_state_inputs_.pit_lane_s = pit_line_s_;

        lap_state_machine_.transition(lap_state_inputs_, lap_state_outputs_);

        desired_velocity_ = lap_state_outputs_.des_vel / 2.23694; // Convert to from MPH to m/s
        if (lap_state_outputs_.path == "pits")
        {
            current_path_ = &pit_line_;
        }
        else
        {
            current_path_ = &center_line_;
        }

        // Publish CT Report
        ct_report_msg_.ct_state = static_cast<int>(ct_state_);
        ct_report_msg_.header.stamp = this->now();

        ct_report_msg_.track_cond_ack = static_cast<int>(track_flag_);
        ct_report_msg_.veh_sig_ack = static_cast<int>(vehicle_flag_);
        ct_report_msg_.rolling_counter = ct_counter_;
        ct_report_msg_.veh_num = 1;
        ct_report_pub_->publish(ct_report_msg_);
        ct_counter_ = (ct_counter_ + 1) % 8;

        // Populate Debug Message
        debug_msg_.ct_state = static_cast<int>(ct_state_);
        debug_msg_.track_flag = static_cast<int>(track_flag_);
        debug_msg_.vehicle_flag = static_cast<int>(vehicle_flag_);
        debug_msg_.sys_state = static_cast<int>(sys_state_);
        debug_msg_.track_loc = static_cast<int>(lap_state_inputs_.track_loc);
        debug_msg_.lap_state = static_cast<int>(lap_state_inputs_.lap_state);
        debug_msg_.center_s = center_line_s_;
        debug_msg_.pit_s = pit_line_s_;
    }

} // namespace controller

RCLCPP_COMPONENTS_REGISTER_NODE(controller::ControllerNode)
