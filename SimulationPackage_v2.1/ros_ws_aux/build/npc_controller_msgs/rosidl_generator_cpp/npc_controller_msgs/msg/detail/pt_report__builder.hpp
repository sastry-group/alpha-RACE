// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/pt_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_PtReport_torque_wheels
{
public:
  explicit Init_PtReport_torque_wheels(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::PtReport torque_wheels(::npc_controller_msgs::msg::PtReport::_torque_wheels_type arg)
  {
    msg_.torque_wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_vehicle_speed_kmph
{
public:
  explicit Init_PtReport_vehicle_speed_kmph(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_torque_wheels vehicle_speed_kmph(::npc_controller_msgs::msg::PtReport::_vehicle_speed_kmph_type arg)
  {
    msg_.vehicle_speed_kmph = std::move(arg);
    return Init_PtReport_torque_wheels(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_transmission_oil_temperature
{
public:
  explicit Init_PtReport_transmission_oil_temperature(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_vehicle_speed_kmph transmission_oil_temperature(::npc_controller_msgs::msg::PtReport::_transmission_oil_temperature_type arg)
  {
    msg_.transmission_oil_temperature = std::move(arg);
    return Init_PtReport_vehicle_speed_kmph(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_transmission_accumulator_pressure
{
public:
  explicit Init_PtReport_transmission_accumulator_pressure(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_transmission_oil_temperature transmission_accumulator_pressure(::npc_controller_msgs::msg::PtReport::_transmission_accumulator_pressure_type arg)
  {
    msg_.transmission_accumulator_pressure = std::move(arg);
    return Init_PtReport_transmission_oil_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_transmission_oil_pressure
{
public:
  explicit Init_PtReport_transmission_oil_pressure(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_transmission_accumulator_pressure transmission_oil_pressure(::npc_controller_msgs::msg::PtReport::_transmission_oil_pressure_type arg)
  {
    msg_.transmission_oil_pressure = std::move(arg);
    return Init_PtReport_transmission_accumulator_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_gear_shift_status
{
public:
  explicit Init_PtReport_gear_shift_status(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_transmission_oil_pressure gear_shift_status(::npc_controller_msgs::msg::PtReport::_gear_shift_status_type arg)
  {
    msg_.gear_shift_status = std::move(arg);
    return Init_PtReport_transmission_oil_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_current_gear
{
public:
  explicit Init_PtReport_current_gear(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_gear_shift_status current_gear(::npc_controller_msgs::msg::PtReport::_current_gear_type arg)
  {
    msg_.current_gear = std::move(arg);
    return Init_PtReport_gear_shift_status(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_throttle_position
{
public:
  explicit Init_PtReport_throttle_position(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_current_gear throttle_position(::npc_controller_msgs::msg::PtReport::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_PtReport_current_gear(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_run_switch_status
{
public:
  explicit Init_PtReport_engine_run_switch_status(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_throttle_position engine_run_switch_status(::npc_controller_msgs::msg::PtReport::_engine_run_switch_status_type arg)
  {
    msg_.engine_run_switch_status = std::move(arg);
    return Init_PtReport_throttle_position(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_on_status
{
public:
  explicit Init_PtReport_engine_on_status(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_run_switch_status engine_on_status(::npc_controller_msgs::msg::PtReport::_engine_on_status_type arg)
  {
    msg_.engine_on_status = std::move(arg);
    return Init_PtReport_engine_run_switch_status(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_rpm
{
public:
  explicit Init_PtReport_engine_rpm(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_on_status engine_rpm(::npc_controller_msgs::msg::PtReport::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_PtReport_engine_on_status(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_coolant_pressure
{
public:
  explicit Init_PtReport_engine_coolant_pressure(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_rpm engine_coolant_pressure(::npc_controller_msgs::msg::PtReport::_engine_coolant_pressure_type arg)
  {
    msg_.engine_coolant_pressure = std::move(arg);
    return Init_PtReport_engine_rpm(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_coolant_temperature
{
public:
  explicit Init_PtReport_engine_coolant_temperature(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_coolant_pressure engine_coolant_temperature(::npc_controller_msgs::msg::PtReport::_engine_coolant_temperature_type arg)
  {
    msg_.engine_coolant_temperature = std::move(arg);
    return Init_PtReport_engine_coolant_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_oil_temperature
{
public:
  explicit Init_PtReport_engine_oil_temperature(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_coolant_temperature engine_oil_temperature(::npc_controller_msgs::msg::PtReport::_engine_oil_temperature_type arg)
  {
    msg_.engine_oil_temperature = std::move(arg);
    return Init_PtReport_engine_coolant_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_engine_oil_pressure
{
public:
  explicit Init_PtReport_engine_oil_pressure(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_oil_temperature engine_oil_pressure(::npc_controller_msgs::msg::PtReport::_engine_oil_pressure_type arg)
  {
    msg_.engine_oil_pressure = std::move(arg);
    return Init_PtReport_engine_oil_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_fuel_pressure
{
public:
  explicit Init_PtReport_fuel_pressure(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_engine_oil_pressure fuel_pressure(::npc_controller_msgs::msg::PtReport::_fuel_pressure_type arg)
  {
    msg_.fuel_pressure = std::move(arg);
    return Init_PtReport_engine_oil_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_fuel_level
{
public:
  explicit Init_PtReport_fuel_level(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_fuel_pressure fuel_level(::npc_controller_msgs::msg::PtReport::_fuel_level_type arg)
  {
    msg_.fuel_level = std::move(arg);
    return Init_PtReport_fuel_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_lambda_sensor
{
public:
  explicit Init_PtReport_lambda_sensor(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_fuel_level lambda_sensor(::npc_controller_msgs::msg::PtReport::_lambda_sensor_type arg)
  {
    msg_.lambda_sensor = std::move(arg);
    return Init_PtReport_fuel_level(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_map_sensor
{
public:
  explicit Init_PtReport_map_sensor(::npc_controller_msgs::msg::PtReport & msg)
  : msg_(msg)
  {}
  Init_PtReport_lambda_sensor map_sensor(::npc_controller_msgs::msg::PtReport::_map_sensor_type arg)
  {
    msg_.map_sensor = std::move(arg);
    return Init_PtReport_lambda_sensor(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

class Init_PtReport_stamp
{
public:
  Init_PtReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtReport_map_sensor stamp(::npc_controller_msgs::msg::PtReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PtReport_map_sensor(msg_);
  }

private:
  ::npc_controller_msgs::msg::PtReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::PtReport>()
{
  return npc_controller_msgs::msg::builder::Init_PtReport_stamp();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__BUILDER_HPP_
