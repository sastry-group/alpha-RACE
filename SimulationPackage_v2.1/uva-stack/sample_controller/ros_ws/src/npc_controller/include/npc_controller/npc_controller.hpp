#ifndef NPC_CONTROLLER__NPC_CONTROLLER_HPP_
#define NPC_CONTROLLER__NPC_CONTROLLER_HPP_

#include <cmath>
#include <vector>
#include <iostream>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/bool.hpp>
#include "rosgraph_msgs/msg/clock.hpp"


#include <rclcpp/rclcpp.hpp>
#include <rclcpp/clock.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/subscription.hpp>
#include <novatel_oem7_msgs/msg/bestpos.hpp>
#include <novatel_oem7_msgs/msg/bestvel.hpp>
#include <raptor_dbw_msgs/msg/accelerator_pedal_cmd.hpp>
#include <raptor_dbw_msgs/msg/brake_cmd.hpp>
#include <raptor_dbw_msgs/msg/steering_cmd.hpp>
#include <raptor_dbw_msgs/msg/wheel_speed_report.hpp>

#include "autonoma_msgs/msg/vehicle_data.hpp"
#include "autonoma_msgs/msg/vehicle_inputs.hpp"
#include "autonoma_msgs/msg/race_control.hpp"
#include "autonoma_msgs/msg/to_raptor.hpp"
#include "autonoma_msgs/msg/powertrain_data.hpp"

#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>

#include <GeographicLib/LocalCartesian.hpp>
#include <GeographicLib/Geocentric.hpp>

#include "npc_controller/file_utils.hpp"
#include "npc_controller/rc_states.hpp"
#include "npc_controller/filter.hpp"
#include "npc_controller/dbw_state_machine.hpp"
#include "npc_controller/lap_state_machine.hpp"
#include "npc_controller/iac_qos.h"

#include "npc_controller_msgs/msg/npc_debug.hpp"
#include "npc_controller_msgs/msg/misc_report.hpp"
#include "npc_controller_msgs/msg/rc_to_ct.hpp"
#include "npc_controller_msgs/msg/pt_report.hpp"
#include "npc_controller_msgs/msg/ct_report.hpp"


namespace controller {

    // Vehicle State
    struct VehicleState {
        double x;
        double y;
        double z;
        double roll;
        double pitch;
        double yaw;
        double vx; //mph
        double vy; //mph
        double vz; //mph
        double ax;
        double ay;
        double az;
        double delta;
        double ddelta;
        double throttle;
        double brake;
    };

    struct PathPoint {
        double s;
        double x;
        double y;
        double z;
        double yaw;
    };

    struct Path {
        std::vector<PathPoint> points;
    };

    class ControllerNode : public rclcpp::Node {

        public:
            explicit ControllerNode(const rclcpp::NodeOptions & options);
            ~ControllerNode() = default;

        private:
            rclcpp::TimerBase::SharedPtr pure_pursuit_timer_;
            rclcpp::TimerBase::SharedPtr long_control_timer_;
            rclcpp::TimerBase::SharedPtr control_timer_;
            rclcpp::TimerBase::SharedPtr state_machine_timer_;

            // Main control callback
            int rolling_counter = 0;
            int shifting_counter_ = 0;
            int last_gear_ = 0;
            bool shift_up_ = false;
            
            // TODO: Set to actual value.
            // milliseconds
            const uint16_t shift_time_limit = 100; 
            
            // Engine Monitoring
            int8_t current_gear_ = 0;
            float engine_speed_;
            bool engine_running_ = false;
            float reported_throttle_ = 0.0f;
            bool engine_braking_decel = false;

            // Shift table
            uint16_t upshift_rpm[7] = {550, 4000, 5000, 5400, 6000, 6200, 0};
            double upshift_speed[7] = {-1.0, 30.0, 65.0, 95.0, 130.0, 160.0, 200.0};
            uint16_t downshift_rpm[7] = {0, 500, 2500, 3400, 4500, 5000, 5500};
            double downshift_speed[7] = {-1.0, 4.0, 25.0, 55.0, 90.0, 125.0, 150.0};

            //Vehicle Params
            const double VEHICLE_MASS_KG = 790; //kg
            const double BRAKE_PAD_RADIUS = 0.133; //m
            const double BRAKE_PAD_FRICTION_COEF = 0.41; //[]
            const double BRAKE_PISTON_AREA = 0.0050222; //m^2
            const double FRONT_WHEEL_RAD = 0.301; //m
            const double REAR_WHEEL_RAD = 0.3118; //m
            const double AERO_DRAG_COEF = 0.8581; //[]
            const double AERO_REAR_LIFT_COEF = 1.18;  // front lift coefficient
            const double AERO_FRONT_LIFT_COEF = 0.65;  // rear lift coefficient
            const double AIR_DENSITY = 1.22; //changes based on temp
            const double DRIVETRAIN_EFFICIENCY = 1.0; // x * 100 %
            const double AERO_CROSS_AREA = 1.0; //m^2 changes based on wing setup - needs to be calculated
            const double GEAR_RATIOS[7] = {0, 2.9167, 1.875, 1.3809, 1.1154, 0.96, 0.8889};
            const double FINAL_DRIVE_RATIO = 3.0;
            const int min_gear = 0;
            const int max_gear = 6;


            // Publishers.
            std_msgs::msg::UInt16 sim_time_increase_msg_;
            autonoma_msgs::msg::VehicleInputs vehicle_cmd_msg_;
            rclcpp::Publisher<autonoma_msgs::msg::VehicleInputs>::SharedPtr vehicle_cmd_pub_;
            rclcpp::Publisher<raptor_dbw_msgs::msg::SteeringCmd>::SharedPtr steering_cmd_pub_;
            rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr gear_cmd_pub_;
            rclcpp::Publisher<raptor_dbw_msgs::msg::BrakeCmd>::SharedPtr brake_cmd_pub_;
            rclcpp::Publisher<raptor_dbw_msgs::msg::AcceleratorPedalCmd>::SharedPtr throttle_cmd_pub_;
            rclcpp::Publisher<autonoma_msgs::msg::ToRaptor>::SharedPtr ct_report_pub_;
            rclcpp::Publisher<std_msgs::msg::UInt16>::SharedPtr sim_time_increase_pub_;

            // Debug Messages
            rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odometry_pub_;
            rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr target_point_pub_;
            rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr base_point_pub_;
            rclcpp::Publisher<npc_controller_msgs::msg::NPCDebug>::SharedPtr debug_pub_;

            nav_msgs::msg::Odometry odometry_msg_;
            geometry_msgs::msg::PointStamped target_point_msg_;
            geometry_msgs::msg::PointStamped base_point_msg_;
            npc_controller_msgs::msg::NPCDebug debug_msg_;



            // Subscribers
            rclcpp::Subscription<novatel_oem7_msgs::msg::BESTPOS>::SharedPtr bestpos_sub_;
            rclcpp::Subscription<autonoma_msgs::msg::VehicleData>::SharedPtr wheel_speed_sub_;
            rclcpp::Subscription<autonoma_msgs::msg::PowertrainData>::SharedPtr pt_report_sub_;
            rclcpp::Subscription<autonoma_msgs::msg::RaceControl>::SharedPtr flags_sub_;
            rclcpp::Subscription<rosgraph_msgs::msg::Clock>::SharedPtr simClockTime_;
            rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr ct_input_sub_;
            rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr estop_sub_;
            
            // Callbacks
            void simClockTimeCallback(const rosgraph_msgs::msg::Clock & msg);
            void bestpos_callback(const novatel_oem7_msgs::msg::BESTPOS::SharedPtr msg);
            void wheel_speed_callback(const autonoma_msgs::msg::VehicleData::SharedPtr msg);
            void receiveCtInput(const std_msgs::msg::Int32::SharedPtr msg);
            void receiveFlags(const autonoma_msgs::msg::RaceControl::SharedPtr msg);
            void receivePtReport(const autonoma_msgs::msg::PowertrainData::SharedPtr msg);
            void receiveEstop(const std_msgs::msg::Bool::SharedPtr msg);
            void long_control();
            void lateral_control();


            uint8_t get_gear_shift_cmd();

            // Helper Functions
            Path load_path(std::string filename);
            void pure_pursuit();
            PathPoint pure_pursuit_target_point(const Path& path, int start_index, const PathPoint& position, double lookahead) const;
            double calc_acceleration(double setpoint);
            void calc_throttle(double desired_acceleration);
            void calc_brake(double desired_acceleration);
            void state_machine();
            int calculate_base_projections(const Path &path, const PathPoint &current_position);

            uint32_t nsec = 0;
            uint32_t sec = 0;
            bool simModeEnabled = false;

            // Parameters
            // Constants
            double wgs84_a = 6378137.0;
            double wgs84_f = 1.0 / 298.257223563;

            // This origin is for Autoverse TMS (Testing purposes only)
            // double lat0 = 33.03644607463397;
            // double lon0 = -97.28266786858255;
            // double hgt0 = 191.2938295872882;

            // This origin is for IMS
            double lat0 = 39.7947350319205384;
            double lon0 = -86.2352425671970906;
            double hgt0 = 224.1435846661534015;
            
            // Vehicle Parameters
            double wheelbase_;
            double steering_ratio_;
            // Input Constraints
            double max_throttle_;
            double max_brake_;
            double min_throttle_;
            double min_brake_;
            double max_acc_;
            double min_acc_;

            double min_steer_;
            double max_steer_;

            // Pure Pursuit
            double lookahead_gain_;
            double min_lookahead_dist_;
            double max_lookahead_dist_;


            double vel_kp_;
            double vel_ki_;
            double vel_kd_;

            double throttle_kp_;
            double throttle_ki_;
            double throttle_kd_;

            double brake_kp_;
            double brake_ki_;
            double brake_kd_;

            // GPS Map
            GeographicLib::LocalCartesian gps_map_ = GeographicLib::LocalCartesian(lat0, lon0, hgt0, GeographicLib::Geocentric(wgs84_a, wgs84_f));

            // Vehicle State
            bool wheel_speed_received = false;
            bool position_received = false;
            VehicleState vehicle_state_;
            VehicleState previous_state_;
            double prev_time_ = 0.0;
            double prev_x_ = 0.0;
            double prev_y_ = 0.0;

            // Pure Pursuit
            // Made a global variable so it can be accessed directly from the control() timer callback.
            double pure_pursuit_steering_angle = -10000.0;

            // Path
            bool path_loaded = false;
            Path pit_line_;
            Path center_line_;
            Path *current_path_;

            // Velocity Controller
            ButterworthLowPassFilter vel_filter_ = ButterworthLowPassFilter(100.0, 3.0);
            double prev_vel_error_ = 0.0;
            double prev_acc_error_ = 0.0;
            double vel_integral_error_ = 0.0;
            double vel_derivative_error_ = 0.0;

            double acc_integral_error_ = 0.0;
            double acc_derivative_error_ = 0.0;

            double acc_error_ = 0.0;
            
            double prev_vel_time_ = 0.0;
            double prev_acc_time_ = 0.0;


            double aerodynamic_drag_force_ = 0.0;
            double aerodynamic_downforce_ = 0.0;
            double rear_rolling_decel_ = 0.0;
            double front_rolling_decel_ = 0.0;
            double brake_decel_ = 0.0;
            double engine_braking_decel_ = 0.0;
            double non_brake_decel_ = 0.0;


            std::vector<double> vel_error_arr_;
            std::vector<double> vel_diff_arr_;
            std::vector<double> acc_error_arr_;

            // State Machine
            LapStateMachine lap_state_machine_;
            LapStateInputs lap_state_inputs_;
            LapStateOutputs lap_state_outputs_;

            autonoma_msgs::msg::ToRaptor ct_report_msg_;
            CTState ct_state_ = CTState::CT255_DEFAULT;
            SysState sys_state_ = SysState::SS255_DEFAULT;
            TrackFlag track_flag_ = TrackFlag::TF_DEFAULT;
            LapState lap_state_ = LapState::LS255_DEFAULT;
            TrackLocation track_loc_ = TrackLocation::LOC_DEFAULT;
            VehicleFlag vehicle_flag_ = VehicleFlag::VF1_NULL;

            int ct_input_ = 0;
            int target_speed_ = 0;
            bool estop_ = false;
            int ct_counter_ = 0;
            double center_line_s_ = 0.0;
            double pit_line_s_ = 0.0;
            double desired_velocity_ = 0.0;

            
    
    };

} // namespace

#endif  // NPC_CONTROLLER__NPC_CONTROLLER_HPP_