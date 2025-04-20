// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/motec_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_MotecReport_rl_wheel_speed_sensor_fault
{
public:
  explicit Init_MotecReport_rl_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::MotecReport rl_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport::_rl_wheel_speed_sensor_fault_type arg)
  {
    msg_.rl_wheel_speed_sensor_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_rr_wheel_speed_sensor_fault
{
public:
  explicit Init_MotecReport_rr_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_rl_wheel_speed_sensor_fault rr_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport::_rr_wheel_speed_sensor_fault_type arg)
  {
    msg_.rr_wheel_speed_sensor_fault = std::move(arg);
    return Init_MotecReport_rl_wheel_speed_sensor_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fl_wheel_speed_sensor_fault
{
public:
  explicit Init_MotecReport_fl_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_rr_wheel_speed_sensor_fault fl_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport::_fl_wheel_speed_sensor_fault_type arg)
  {
    msg_.fl_wheel_speed_sensor_fault = std::move(arg);
    return Init_MotecReport_rr_wheel_speed_sensor_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fr_wheel_speed_sensor_fault
{
public:
  explicit Init_MotecReport_fr_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fl_wheel_speed_sensor_fault fr_wheel_speed_sensor_fault(::raptor_dbw_msgs::msg::MotecReport::_fr_wheel_speed_sensor_fault_type arg)
  {
    msg_.fr_wheel_speed_sensor_fault = std::move(arg);
    return Init_MotecReport_fl_wheel_speed_sensor_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_torque_wheels
{
public:
  explicit Init_MotecReport_torque_wheels(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fr_wheel_speed_sensor_fault torque_wheels(::raptor_dbw_msgs::msg::MotecReport::_torque_wheels_type arg)
  {
    msg_.torque_wheels = std::move(arg);
    return Init_MotecReport_fr_wheel_speed_sensor_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_gear_shift_req
{
public:
  explicit Init_MotecReport_gear_shift_req(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_torque_wheels gear_shift_req(::raptor_dbw_msgs::msg::MotecReport::_gear_shift_req_type arg)
  {
    msg_.gear_shift_req = std::move(arg);
    return Init_MotecReport_torque_wheels(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_gear_shift
{
public:
  explicit Init_MotecReport_gear_shift(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_gear_shift_req gear_shift(::raptor_dbw_msgs::msg::MotecReport::_gear_shift_type arg)
  {
    msg_.gear_shift = std::move(arg);
    return Init_MotecReport_gear_shift_req(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_gear_100hz
{
public:
  explicit Init_MotecReport_gear_100hz(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_gear_shift gear_100hz(::raptor_dbw_msgs::msg::MotecReport::_gear_100hz_type arg)
  {
    msg_.gear_100hz = std::move(arg);
    return Init_MotecReport_gear_shift(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_gearratio
{
public:
  explicit Init_MotecReport_gearratio(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_gear_100hz gearratio(::raptor_dbw_msgs::msg::MotecReport::_gearratio_type arg)
  {
    msg_.gearratio = std::move(arg);
    return Init_MotecReport_gear_100hz(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_vehicle_speed
{
public:
  explicit Init_MotecReport_vehicle_speed(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_gearratio vehicle_speed(::raptor_dbw_msgs::msg::MotecReport::_vehicle_speed_type arg)
  {
    msg_.vehicle_speed = std::move(arg);
    return Init_MotecReport_gearratio(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pressure_direct_b1_control
{
public:
  explicit Init_MotecReport_fuel_pressure_direct_b1_control(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_vehicle_speed fuel_pressure_direct_b1_control(::raptor_dbw_msgs::msg::MotecReport::_fuel_pressure_direct_b1_control_type arg)
  {
    msg_.fuel_pressure_direct_b1_control = std::move(arg);
    return Init_MotecReport_vehicle_speed(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pressure_direct_b1_aim
{
public:
  explicit Init_MotecReport_fuel_pressure_direct_b1_aim(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pressure_direct_b1_control fuel_pressure_direct_b1_aim(::raptor_dbw_msgs::msg::MotecReport::_fuel_pressure_direct_b1_aim_type arg)
  {
    msg_.fuel_pressure_direct_b1_aim = std::move(arg);
    return Init_MotecReport_fuel_pressure_direct_b1_control(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pressure_direct_b1
{
public:
  explicit Init_MotecReport_fuel_pressure_direct_b1(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pressure_direct_b1_aim fuel_pressure_direct_b1(::raptor_dbw_msgs::msg::MotecReport::_fuel_pressure_direct_b1_type arg)
  {
    msg_.fuel_pressure_direct_b1 = std::move(arg);
    return Init_MotecReport_fuel_pressure_direct_b1_aim(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_exhaust_lambda
{
public:
  explicit Init_MotecReport_exhaust_lambda(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pressure_direct_b1 exhaust_lambda(::raptor_dbw_msgs::msg::MotecReport::_exhaust_lambda_type arg)
  {
    msg_.exhaust_lambda = std::move(arg);
    return Init_MotecReport_fuel_pressure_direct_b1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_driver_switch_3
{
public:
  explicit Init_MotecReport_driver_switch_3(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_exhaust_lambda driver_switch_3(::raptor_dbw_msgs::msg::MotecReport::_driver_switch_3_type arg)
  {
    msg_.driver_switch_3 = std::move(arg);
    return Init_MotecReport_exhaust_lambda(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_driver_switch_2
{
public:
  explicit Init_MotecReport_driver_switch_2(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_driver_switch_3 driver_switch_2(::raptor_dbw_msgs::msg::MotecReport::_driver_switch_2_type arg)
  {
    msg_.driver_switch_2 = std::move(arg);
    return Init_MotecReport_driver_switch_3(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_driver_switch_1
{
public:
  explicit Init_MotecReport_driver_switch_1(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_driver_switch_2 driver_switch_1(::raptor_dbw_msgs::msg::MotecReport::_driver_switch_1_type arg)
  {
    msg_.driver_switch_1 = std::move(arg);
    return Init_MotecReport_driver_switch_2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_run_time_total
{
public:
  explicit Init_MotecReport_engine_run_time_total(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_driver_switch_1 engine_run_time_total(::raptor_dbw_msgs::msg::MotecReport::_engine_run_time_total_type arg)
  {
    msg_.engine_run_time_total = std::move(arg);
    return Init_MotecReport_driver_switch_1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_speed_limit_state
{
public:
  explicit Init_MotecReport_engine_speed_limit_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_run_time_total engine_speed_limit_state(::raptor_dbw_msgs::msg::MotecReport::_engine_speed_limit_state_type arg)
  {
    msg_.engine_speed_limit_state = std::move(arg);
    return Init_MotecReport_engine_run_time_total(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_gear
{
public:
  explicit Init_MotecReport_gear(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_speed_limit_state gear(::raptor_dbw_msgs::msg::MotecReport::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_MotecReport_engine_speed_limit_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_speed_reference_state
{
public:
  explicit Init_MotecReport_engine_speed_reference_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_gear engine_speed_reference_state(::raptor_dbw_msgs::msg::MotecReport::_engine_speed_reference_state_type arg)
  {
    msg_.engine_speed_reference_state = std::move(arg);
    return Init_MotecReport_gear(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_throttle_aim_state
{
public:
  explicit Init_MotecReport_throttle_aim_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_speed_reference_state throttle_aim_state(::raptor_dbw_msgs::msg::MotecReport::_throttle_aim_state_type arg)
  {
    msg_.throttle_aim_state = std::move(arg);
    return Init_MotecReport_engine_speed_reference_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_knock_state
{
public:
  explicit Init_MotecReport_knock_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_throttle_aim_state knock_state(::raptor_dbw_msgs::msg::MotecReport::_knock_state_type arg)
  {
    msg_.knock_state = std::move(arg);
    return Init_MotecReport_throttle_aim_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_boost_aim_state
{
public:
  explicit Init_MotecReport_boost_aim_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_knock_state boost_aim_state(::raptor_dbw_msgs::msg::MotecReport::_boost_aim_state_type arg)
  {
    msg_.boost_aim_state = std::move(arg);
    return Init_MotecReport_knock_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_launch_state
{
public:
  explicit Init_MotecReport_launch_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_boost_aim_state launch_state(::raptor_dbw_msgs::msg::MotecReport::_launch_state_type arg)
  {
    msg_.launch_state = std::move(arg);
    return Init_MotecReport_boost_aim_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pump_state
{
public:
  explicit Init_MotecReport_fuel_pump_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_launch_state fuel_pump_state(::raptor_dbw_msgs::msg::MotecReport::_fuel_pump_state_type arg)
  {
    msg_.fuel_pump_state = std::move(arg);
    return Init_MotecReport_launch_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_state
{
public:
  explicit Init_MotecReport_engine_state(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pump_state engine_state(::raptor_dbw_msgs::msg::MotecReport::_engine_state_type arg)
  {
    msg_.engine_state = std::move(arg);
    return Init_MotecReport_fuel_pump_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_knock_warning
{
public:
  explicit Init_MotecReport_knock_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_state knock_warning(::raptor_dbw_msgs::msg::MotecReport::_knock_warning_type arg)
  {
    msg_.knock_warning = std::move(arg);
    return Init_MotecReport_engine_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_used
{
public:
  explicit Init_MotecReport_fuel_used(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_knock_warning fuel_used(::raptor_dbw_msgs::msg::MotecReport::_fuel_used_type arg)
  {
    msg_.fuel_used = std::move(arg);
    return Init_MotecReport_knock_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pressure_warning
{
public:
  explicit Init_MotecReport_fuel_pressure_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_used fuel_pressure_warning(::raptor_dbw_msgs::msg::MotecReport::_fuel_pressure_warning_type arg)
  {
    msg_.fuel_pressure_warning = std::move(arg);
    return Init_MotecReport_fuel_used(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_crankcase_pressure_warning
{
public:
  explicit Init_MotecReport_crankcase_pressure_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pressure_warning crankcase_pressure_warning(::raptor_dbw_msgs::msg::MotecReport::_crankcase_pressure_warning_type arg)
  {
    msg_.crankcase_pressure_warning = std::move(arg);
    return Init_MotecReport_fuel_pressure_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_oil_pressure_warning
{
public:
  explicit Init_MotecReport_engine_oil_pressure_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_crankcase_pressure_warning engine_oil_pressure_warning(::raptor_dbw_msgs::msg::MotecReport::_engine_oil_pressure_warning_type arg)
  {
    msg_.engine_oil_pressure_warning = std::move(arg);
    return Init_MotecReport_crankcase_pressure_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_oil_temperature_warning
{
public:
  explicit Init_MotecReport_engine_oil_temperature_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_oil_pressure_warning engine_oil_temperature_warning(::raptor_dbw_msgs::msg::MotecReport::_engine_oil_temperature_warning_type arg)
  {
    msg_.engine_oil_temperature_warning = std::move(arg);
    return Init_MotecReport_engine_oil_pressure_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_speed_warning
{
public:
  explicit Init_MotecReport_engine_speed_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_oil_temperature_warning engine_speed_warning(::raptor_dbw_msgs::msg::MotecReport::_engine_speed_warning_type arg)
  {
    msg_.engine_speed_warning = std::move(arg);
    return Init_MotecReport_engine_oil_temperature_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_coolant_pressure_warning
{
public:
  explicit Init_MotecReport_coolant_pressure_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_speed_warning coolant_pressure_warning(::raptor_dbw_msgs::msg::MotecReport::_coolant_pressure_warning_type arg)
  {
    msg_.coolant_pressure_warning = std::move(arg);
    return Init_MotecReport_engine_speed_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_coolant_temperature_warning
{
public:
  explicit Init_MotecReport_coolant_temperature_warning(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_coolant_pressure_warning coolant_temperature_warning(::raptor_dbw_msgs::msg::MotecReport::_coolant_temperature_warning_type arg)
  {
    msg_.coolant_temperature_warning = std::move(arg);
    return Init_MotecReport_coolant_pressure_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_coolant_temperature
{
public:
  explicit Init_MotecReport_coolant_temperature(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_coolant_temperature_warning coolant_temperature(::raptor_dbw_msgs::msg::MotecReport::_coolant_temperature_type arg)
  {
    msg_.coolant_temperature = std::move(arg);
    return Init_MotecReport_coolant_temperature_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_warning_source
{
public:
  explicit Init_MotecReport_warning_source(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_coolant_temperature warning_source(::raptor_dbw_msgs::msg::MotecReport::_warning_source_type arg)
  {
    msg_.warning_source = std::move(arg);
    return Init_MotecReport_coolant_temperature(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_ecu_battery_voltage
{
public:
  explicit Init_MotecReport_ecu_battery_voltage(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_warning_source ecu_battery_voltage(::raptor_dbw_msgs::msg::MotecReport::_ecu_battery_voltage_type arg)
  {
    msg_.ecu_battery_voltage = std::move(arg);
    return Init_MotecReport_warning_source(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_ecu_up_time
{
public:
  explicit Init_MotecReport_ecu_up_time(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_ecu_battery_voltage ecu_up_time(::raptor_dbw_msgs::msg::MotecReport::_ecu_up_time_type arg)
  {
    msg_.ecu_up_time = std::move(arg);
    return Init_MotecReport_ecu_battery_voltage(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_run_time
{
public:
  explicit Init_MotecReport_engine_run_time(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_ecu_up_time engine_run_time(::raptor_dbw_msgs::msg::MotecReport::_engine_run_time_type arg)
  {
    msg_.engine_run_time = std::move(arg);
    return Init_MotecReport_ecu_up_time(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_wheel_speed_rear_right
{
public:
  explicit Init_MotecReport_wheel_speed_rear_right(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_run_time wheel_speed_rear_right(::raptor_dbw_msgs::msg::MotecReport::_wheel_speed_rear_right_type arg)
  {
    msg_.wheel_speed_rear_right = std::move(arg);
    return Init_MotecReport_engine_run_time(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_wheel_speed_rear_left
{
public:
  explicit Init_MotecReport_wheel_speed_rear_left(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_wheel_speed_rear_right wheel_speed_rear_left(::raptor_dbw_msgs::msg::MotecReport::_wheel_speed_rear_left_type arg)
  {
    msg_.wheel_speed_rear_left = std::move(arg);
    return Init_MotecReport_wheel_speed_rear_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_wheel_speed_front_right
{
public:
  explicit Init_MotecReport_wheel_speed_front_right(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_wheel_speed_rear_left wheel_speed_front_right(::raptor_dbw_msgs::msg::MotecReport::_wheel_speed_front_right_type arg)
  {
    msg_.wheel_speed_front_right = std::move(arg);
    return Init_MotecReport_wheel_speed_rear_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_wheel_speed_front_left
{
public:
  explicit Init_MotecReport_wheel_speed_front_left(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_wheel_speed_front_right wheel_speed_front_left(::raptor_dbw_msgs::msg::MotecReport::_wheel_speed_front_left_type arg)
  {
    msg_.wheel_speed_front_left = std::move(arg);
    return Init_MotecReport_wheel_speed_front_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_boost_aim
{
public:
  explicit Init_MotecReport_boost_aim(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_wheel_speed_front_left boost_aim(::raptor_dbw_msgs::msg::MotecReport::_boost_aim_type arg)
  {
    msg_.boost_aim = std::move(arg);
    return Init_MotecReport_wheel_speed_front_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_boost_pressure
{
public:
  explicit Init_MotecReport_boost_pressure(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_boost_aim boost_pressure(::raptor_dbw_msgs::msg::MotecReport::_boost_pressure_type arg)
  {
    msg_.boost_pressure = std::move(arg);
    return Init_MotecReport_boost_aim(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_oil_pressure
{
public:
  explicit Init_MotecReport_engine_oil_pressure(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_boost_pressure engine_oil_pressure(::raptor_dbw_msgs::msg::MotecReport::_engine_oil_pressure_type arg)
  {
    msg_.engine_oil_pressure = std::move(arg);
    return Init_MotecReport_boost_pressure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_ambient_temperature
{
public:
  explicit Init_MotecReport_ambient_temperature(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_oil_pressure ambient_temperature(::raptor_dbw_msgs::msg::MotecReport::_ambient_temperature_type arg)
  {
    msg_.ambient_temperature = std::move(arg);
    return Init_MotecReport_engine_oil_pressure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_oil_temperature
{
public:
  explicit Init_MotecReport_engine_oil_temperature(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_ambient_temperature engine_oil_temperature(::raptor_dbw_msgs::msg::MotecReport::_engine_oil_temperature_type arg)
  {
    msg_.engine_oil_temperature = std::move(arg);
    return Init_MotecReport_ambient_temperature(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_load
{
public:
  explicit Init_MotecReport_engine_load(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_oil_temperature engine_load(::raptor_dbw_msgs::msg::MotecReport::_engine_load_type arg)
  {
    msg_.engine_load = std::move(arg);
    return Init_MotecReport_engine_oil_temperature(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_throttle_pedal
{
public:
  explicit Init_MotecReport_throttle_pedal(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_load throttle_pedal(::raptor_dbw_msgs::msg::MotecReport::_throttle_pedal_type arg)
  {
    msg_.throttle_pedal = std::move(arg);
    return Init_MotecReport_engine_load(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_efficiency
{
public:
  explicit Init_MotecReport_engine_efficiency(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_throttle_pedal engine_efficiency(::raptor_dbw_msgs::msg::MotecReport::_engine_efficiency_type arg)
  {
    msg_.engine_efficiency = std::move(arg);
    return Init_MotecReport_throttle_pedal(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_fuel_pressure_sensor
{
public:
  explicit Init_MotecReport_fuel_pressure_sensor(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_engine_efficiency fuel_pressure_sensor(::raptor_dbw_msgs::msg::MotecReport::_fuel_pressure_sensor_type arg)
  {
    msg_.fuel_pressure_sensor = std::move(arg);
    return Init_MotecReport_engine_efficiency(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_throttle_position
{
public:
  explicit Init_MotecReport_throttle_position(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_fuel_pressure_sensor throttle_position(::raptor_dbw_msgs::msg::MotecReport::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_MotecReport_fuel_pressure_sensor(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_inlet_air_temperature
{
public:
  explicit Init_MotecReport_inlet_air_temperature(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_throttle_position inlet_air_temperature(::raptor_dbw_msgs::msg::MotecReport::_inlet_air_temperature_type arg)
  {
    msg_.inlet_air_temperature = std::move(arg);
    return Init_MotecReport_throttle_position(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_inlet_manifold_pressure
{
public:
  explicit Init_MotecReport_inlet_manifold_pressure(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_inlet_air_temperature inlet_manifold_pressure(::raptor_dbw_msgs::msg::MotecReport::_inlet_manifold_pressure_type arg)
  {
    msg_.inlet_manifold_pressure = std::move(arg);
    return Init_MotecReport_inlet_air_temperature(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_engine_speed
{
public:
  explicit Init_MotecReport_engine_speed(::raptor_dbw_msgs::msg::MotecReport & msg)
  : msg_(msg)
  {}
  Init_MotecReport_inlet_manifold_pressure engine_speed(::raptor_dbw_msgs::msg::MotecReport::_engine_speed_type arg)
  {
    msg_.engine_speed = std::move(arg);
    return Init_MotecReport_inlet_manifold_pressure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

class Init_MotecReport_header
{
public:
  Init_MotecReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotecReport_engine_speed header(::raptor_dbw_msgs::msg::MotecReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotecReport_engine_speed(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MotecReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::MotecReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_MotecReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__BUILDER_HPP_
