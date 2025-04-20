// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleData_ws_rear_right
{
public:
  explicit Init_VehicleData_ws_rear_right(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::VehicleData ws_rear_right(::autonoma_msgs::msg::VehicleData::_ws_rear_right_type arg)
  {
    msg_.ws_rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_ws_rear_left
{
public:
  explicit Init_VehicleData_ws_rear_left(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_ws_rear_right ws_rear_left(::autonoma_msgs::msg::VehicleData::_ws_rear_left_type arg)
  {
    msg_.ws_rear_left = std::move(arg);
    return Init_VehicleData_ws_rear_right(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_ws_front_right
{
public:
  explicit Init_VehicleData_ws_front_right(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_ws_rear_left ws_front_right(::autonoma_msgs::msg::VehicleData::_ws_front_right_type arg)
  {
    msg_.ws_front_right = std::move(arg);
    return Init_VehicleData_ws_rear_left(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_ws_front_left
{
public:
  explicit Init_VehicleData_ws_front_left(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_ws_front_right ws_front_left(::autonoma_msgs::msg::VehicleData::_ws_front_left_type arg)
  {
    msg_.ws_front_left = std::move(arg);
    return Init_VehicleData_ws_front_right(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_steering_wheel_torque
{
public:
  explicit Init_VehicleData_steering_wheel_torque(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_ws_front_left steering_wheel_torque(::autonoma_msgs::msg::VehicleData::_steering_wheel_torque_type arg)
  {
    msg_.steering_wheel_torque = std::move(arg);
    return Init_VehicleData_ws_front_left(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_steering_wheel_angle_cmd
{
public:
  explicit Init_VehicleData_steering_wheel_angle_cmd(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_steering_wheel_torque steering_wheel_angle_cmd(::autonoma_msgs::msg::VehicleData::_steering_wheel_angle_cmd_type arg)
  {
    msg_.steering_wheel_angle_cmd = std::move(arg);
    return Init_VehicleData_steering_wheel_torque(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_steering_wheel_angle
{
public:
  explicit Init_VehicleData_steering_wheel_angle(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_steering_wheel_angle_cmd steering_wheel_angle(::autonoma_msgs::msg::VehicleData::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_VehicleData_steering_wheel_angle_cmd(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rear_brake_pressure
{
public:
  explicit Init_VehicleData_rear_brake_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_steering_wheel_angle rear_brake_pressure(::autonoma_msgs::msg::VehicleData::_rear_brake_pressure_type arg)
  {
    msg_.rear_brake_pressure = std::move(arg);
    return Init_VehicleData_steering_wheel_angle(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_front_brake_pressure
{
public:
  explicit Init_VehicleData_front_brake_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rear_brake_pressure front_brake_pressure(::autonoma_msgs::msg::VehicleData::_front_brake_pressure_type arg)
  {
    msg_.front_brake_pressure = std::move(arg);
    return Init_VehicleData_rear_brake_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_accel_pedal_output
{
public:
  explicit Init_VehicleData_accel_pedal_output(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_front_brake_pressure accel_pedal_output(::autonoma_msgs::msg::VehicleData::_accel_pedal_output_type arg)
  {
    msg_.accel_pedal_output = std::move(arg);
    return Init_VehicleData_front_brake_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_accel_pedal_input
{
public:
  explicit Init_VehicleData_accel_pedal_input(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_accel_pedal_output accel_pedal_input(::autonoma_msgs::msg::VehicleData::_accel_pedal_input_type arg)
  {
    msg_.accel_pedal_input = std::move(arg);
    return Init_VehicleData_accel_pedal_output(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_sys_state
{
public:
  explicit Init_VehicleData_sys_state(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_accel_pedal_input sys_state(::autonoma_msgs::msg::VehicleData::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return Init_VehicleData_accel_pedal_input(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_mode_switch_state
{
public:
  explicit Init_VehicleData_mode_switch_state(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_sys_state mode_switch_state(::autonoma_msgs::msg::VehicleData::_mode_switch_state_type arg)
  {
    msg_.mode_switch_state = std::move(arg);
    return Init_VehicleData_sys_state(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_safety_switch_state
{
public:
  explicit Init_VehicleData_safety_switch_state(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_mode_switch_state safety_switch_state(::autonoma_msgs::msg::VehicleData::_safety_switch_state_type arg)
  {
    msg_.safety_switch_state = std::move(arg);
    return Init_VehicleData_mode_switch_state(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_battery_voltage
{
public:
  explicit Init_VehicleData_battery_voltage(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_safety_switch_state battery_voltage(::autonoma_msgs::msg::VehicleData::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_VehicleData_safety_switch_state(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_brake_temp
{
public:
  explicit Init_VehicleData_rr_brake_temp(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_battery_voltage rr_brake_temp(::autonoma_msgs::msg::VehicleData::_rr_brake_temp_type arg)
  {
    msg_.rr_brake_temp = std::move(arg);
    return Init_VehicleData_battery_voltage(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_brake_temp
{
public:
  explicit Init_VehicleData_rl_brake_temp(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_brake_temp rl_brake_temp(::autonoma_msgs::msg::VehicleData::_rl_brake_temp_type arg)
  {
    msg_.rl_brake_temp = std::move(arg);
    return Init_VehicleData_rr_brake_temp(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_brake_temp
{
public:
  explicit Init_VehicleData_fr_brake_temp(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_brake_temp fr_brake_temp(::autonoma_msgs::msg::VehicleData::_fr_brake_temp_type arg)
  {
    msg_.fr_brake_temp = std::move(arg);
    return Init_VehicleData_rl_brake_temp(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_brake_temp
{
public:
  explicit Init_VehicleData_fl_brake_temp(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_brake_temp fl_brake_temp(::autonoma_msgs::msg::VehicleData::_fl_brake_temp_type arg)
  {
    msg_.fl_brake_temp = std::move(arg);
    return Init_VehicleData_fr_brake_temp(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_wheel_load
{
public:
  explicit Init_VehicleData_rr_wheel_load(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fl_brake_temp rr_wheel_load(::autonoma_msgs::msg::VehicleData::_rr_wheel_load_type arg)
  {
    msg_.rr_wheel_load = std::move(arg);
    return Init_VehicleData_fl_brake_temp(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_tire_pressure_gauge
{
public:
  explicit Init_VehicleData_rr_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_wheel_load rr_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData::_rr_tire_pressure_gauge_type arg)
  {
    msg_.rr_tire_pressure_gauge = std::move(arg);
    return Init_VehicleData_rr_wheel_load(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_tire_pressure
{
public:
  explicit Init_VehicleData_rr_tire_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_tire_pressure_gauge rr_tire_pressure(::autonoma_msgs::msg::VehicleData::_rr_tire_pressure_type arg)
  {
    msg_.rr_tire_pressure = std::move(arg);
    return Init_VehicleData_rr_tire_pressure_gauge(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_damper_linear_potentiometer
{
public:
  explicit Init_VehicleData_rr_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_tire_pressure rr_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData::_rr_damper_linear_potentiometer_type arg)
  {
    msg_.rr_damper_linear_potentiometer = std::move(arg);
    return Init_VehicleData_rr_tire_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rr_tire_temperature
{
public:
  explicit Init_VehicleData_rr_tire_temperature(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_damper_linear_potentiometer rr_tire_temperature(::autonoma_msgs::msg::VehicleData::_rr_tire_temperature_type arg)
  {
    msg_.rr_tire_temperature = std::move(arg);
    return Init_VehicleData_rr_damper_linear_potentiometer(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_wheel_load
{
public:
  explicit Init_VehicleData_rl_wheel_load(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rr_tire_temperature rl_wheel_load(::autonoma_msgs::msg::VehicleData::_rl_wheel_load_type arg)
  {
    msg_.rl_wheel_load = std::move(arg);
    return Init_VehicleData_rr_tire_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_tire_pressure_gauge
{
public:
  explicit Init_VehicleData_rl_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_wheel_load rl_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData::_rl_tire_pressure_gauge_type arg)
  {
    msg_.rl_tire_pressure_gauge = std::move(arg);
    return Init_VehicleData_rl_wheel_load(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_tire_pressure
{
public:
  explicit Init_VehicleData_rl_tire_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_tire_pressure_gauge rl_tire_pressure(::autonoma_msgs::msg::VehicleData::_rl_tire_pressure_type arg)
  {
    msg_.rl_tire_pressure = std::move(arg);
    return Init_VehicleData_rl_tire_pressure_gauge(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_damper_linear_potentiometer
{
public:
  explicit Init_VehicleData_rl_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_tire_pressure rl_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData::_rl_damper_linear_potentiometer_type arg)
  {
    msg_.rl_damper_linear_potentiometer = std::move(arg);
    return Init_VehicleData_rl_tire_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_rl_tire_temperature
{
public:
  explicit Init_VehicleData_rl_tire_temperature(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_damper_linear_potentiometer rl_tire_temperature(::autonoma_msgs::msg::VehicleData::_rl_tire_temperature_type arg)
  {
    msg_.rl_tire_temperature = std::move(arg);
    return Init_VehicleData_rl_damper_linear_potentiometer(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_wheel_load
{
public:
  explicit Init_VehicleData_fr_wheel_load(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_rl_tire_temperature fr_wheel_load(::autonoma_msgs::msg::VehicleData::_fr_wheel_load_type arg)
  {
    msg_.fr_wheel_load = std::move(arg);
    return Init_VehicleData_rl_tire_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_tire_pressure_gauge
{
public:
  explicit Init_VehicleData_fr_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_wheel_load fr_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData::_fr_tire_pressure_gauge_type arg)
  {
    msg_.fr_tire_pressure_gauge = std::move(arg);
    return Init_VehicleData_fr_wheel_load(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_tire_pressure
{
public:
  explicit Init_VehicleData_fr_tire_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_tire_pressure_gauge fr_tire_pressure(::autonoma_msgs::msg::VehicleData::_fr_tire_pressure_type arg)
  {
    msg_.fr_tire_pressure = std::move(arg);
    return Init_VehicleData_fr_tire_pressure_gauge(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_damper_linear_potentiometer
{
public:
  explicit Init_VehicleData_fr_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_tire_pressure fr_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData::_fr_damper_linear_potentiometer_type arg)
  {
    msg_.fr_damper_linear_potentiometer = std::move(arg);
    return Init_VehicleData_fr_tire_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fr_tire_temperature
{
public:
  explicit Init_VehicleData_fr_tire_temperature(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_damper_linear_potentiometer fr_tire_temperature(::autonoma_msgs::msg::VehicleData::_fr_tire_temperature_type arg)
  {
    msg_.fr_tire_temperature = std::move(arg);
    return Init_VehicleData_fr_damper_linear_potentiometer(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_wheel_load
{
public:
  explicit Init_VehicleData_fl_wheel_load(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fr_tire_temperature fl_wheel_load(::autonoma_msgs::msg::VehicleData::_fl_wheel_load_type arg)
  {
    msg_.fl_wheel_load = std::move(arg);
    return Init_VehicleData_fr_tire_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_tire_pressure_gauge
{
public:
  explicit Init_VehicleData_fl_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fl_wheel_load fl_tire_pressure_gauge(::autonoma_msgs::msg::VehicleData::_fl_tire_pressure_gauge_type arg)
  {
    msg_.fl_tire_pressure_gauge = std::move(arg);
    return Init_VehicleData_fl_wheel_load(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_tire_pressure
{
public:
  explicit Init_VehicleData_fl_tire_pressure(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fl_tire_pressure_gauge fl_tire_pressure(::autonoma_msgs::msg::VehicleData::_fl_tire_pressure_type arg)
  {
    msg_.fl_tire_pressure = std::move(arg);
    return Init_VehicleData_fl_tire_pressure_gauge(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_damper_linear_potentiometer
{
public:
  explicit Init_VehicleData_fl_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fl_tire_pressure fl_damper_linear_potentiometer(::autonoma_msgs::msg::VehicleData::_fl_damper_linear_potentiometer_type arg)
  {
    msg_.fl_damper_linear_potentiometer = std::move(arg);
    return Init_VehicleData_fl_tire_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_fl_tire_temperature
{
public:
  explicit Init_VehicleData_fl_tire_temperature(::autonoma_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_fl_damper_linear_potentiometer fl_tire_temperature(::autonoma_msgs::msg::VehicleData::_fl_tire_temperature_type arg)
  {
    msg_.fl_tire_temperature = std::move(arg);
    return Init_VehicleData_fl_damper_linear_potentiometer(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_header
{
public:
  Init_VehicleData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleData_fl_tire_temperature header(::autonoma_msgs::msg::VehicleData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleData_fl_tire_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::VehicleData>()
{
  return autonoma_msgs::msg::builder::Init_VehicleData_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
