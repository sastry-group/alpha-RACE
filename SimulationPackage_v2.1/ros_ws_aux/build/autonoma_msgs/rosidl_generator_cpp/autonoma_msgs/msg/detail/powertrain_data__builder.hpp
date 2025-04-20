// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/powertrain_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_PowertrainData_torque_wheels_nm
{
public:
  explicit Init_PowertrainData_torque_wheels_nm(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::PowertrainData torque_wheels_nm(::autonoma_msgs::msg::PowertrainData::_torque_wheels_nm_type arg)
  {
    msg_.torque_wheels_nm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_vehicle_speed_kmph
{
public:
  explicit Init_PowertrainData_vehicle_speed_kmph(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_torque_wheels_nm vehicle_speed_kmph(::autonoma_msgs::msg::PowertrainData::_vehicle_speed_kmph_type arg)
  {
    msg_.vehicle_speed_kmph = std::move(arg);
    return Init_PowertrainData_torque_wheels_nm(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_transmission_oil_temperature
{
public:
  explicit Init_PowertrainData_transmission_oil_temperature(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_vehicle_speed_kmph transmission_oil_temperature(::autonoma_msgs::msg::PowertrainData::_transmission_oil_temperature_type arg)
  {
    msg_.transmission_oil_temperature = std::move(arg);
    return Init_PowertrainData_vehicle_speed_kmph(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_transmission_accumulator_pressure
{
public:
  explicit Init_PowertrainData_transmission_accumulator_pressure(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_transmission_oil_temperature transmission_accumulator_pressure(::autonoma_msgs::msg::PowertrainData::_transmission_accumulator_pressure_type arg)
  {
    msg_.transmission_accumulator_pressure = std::move(arg);
    return Init_PowertrainData_transmission_oil_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_transmission_oil_pressure
{
public:
  explicit Init_PowertrainData_transmission_oil_pressure(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_transmission_accumulator_pressure transmission_oil_pressure(::autonoma_msgs::msg::PowertrainData::_transmission_oil_pressure_type arg)
  {
    msg_.transmission_oil_pressure = std::move(arg);
    return Init_PowertrainData_transmission_accumulator_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_gear_shift_status
{
public:
  explicit Init_PowertrainData_gear_shift_status(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_transmission_oil_pressure gear_shift_status(::autonoma_msgs::msg::PowertrainData::_gear_shift_status_type arg)
  {
    msg_.gear_shift_status = std::move(arg);
    return Init_PowertrainData_transmission_oil_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_current_gear
{
public:
  explicit Init_PowertrainData_current_gear(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_gear_shift_status current_gear(::autonoma_msgs::msg::PowertrainData::_current_gear_type arg)
  {
    msg_.current_gear = std::move(arg);
    return Init_PowertrainData_gear_shift_status(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_throttle_position
{
public:
  explicit Init_PowertrainData_throttle_position(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_current_gear throttle_position(::autonoma_msgs::msg::PowertrainData::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_PowertrainData_current_gear(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_run_switch_status
{
public:
  explicit Init_PowertrainData_engine_run_switch_status(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_throttle_position engine_run_switch_status(::autonoma_msgs::msg::PowertrainData::_engine_run_switch_status_type arg)
  {
    msg_.engine_run_switch_status = std::move(arg);
    return Init_PowertrainData_throttle_position(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_on_status
{
public:
  explicit Init_PowertrainData_engine_on_status(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_run_switch_status engine_on_status(::autonoma_msgs::msg::PowertrainData::_engine_on_status_type arg)
  {
    msg_.engine_on_status = std::move(arg);
    return Init_PowertrainData_engine_run_switch_status(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_rpm
{
public:
  explicit Init_PowertrainData_engine_rpm(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_on_status engine_rpm(::autonoma_msgs::msg::PowertrainData::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_PowertrainData_engine_on_status(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_coolant_pressure
{
public:
  explicit Init_PowertrainData_engine_coolant_pressure(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_rpm engine_coolant_pressure(::autonoma_msgs::msg::PowertrainData::_engine_coolant_pressure_type arg)
  {
    msg_.engine_coolant_pressure = std::move(arg);
    return Init_PowertrainData_engine_rpm(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_coolant_temperature
{
public:
  explicit Init_PowertrainData_engine_coolant_temperature(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_coolant_pressure engine_coolant_temperature(::autonoma_msgs::msg::PowertrainData::_engine_coolant_temperature_type arg)
  {
    msg_.engine_coolant_temperature = std::move(arg);
    return Init_PowertrainData_engine_coolant_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_oil_temperature
{
public:
  explicit Init_PowertrainData_engine_oil_temperature(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_coolant_temperature engine_oil_temperature(::autonoma_msgs::msg::PowertrainData::_engine_oil_temperature_type arg)
  {
    msg_.engine_oil_temperature = std::move(arg);
    return Init_PowertrainData_engine_coolant_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_engine_oil_pressure
{
public:
  explicit Init_PowertrainData_engine_oil_pressure(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_oil_temperature engine_oil_pressure(::autonoma_msgs::msg::PowertrainData::_engine_oil_pressure_type arg)
  {
    msg_.engine_oil_pressure = std::move(arg);
    return Init_PowertrainData_engine_oil_temperature(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_fuel_pressure
{
public:
  explicit Init_PowertrainData_fuel_pressure(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_engine_oil_pressure fuel_pressure(::autonoma_msgs::msg::PowertrainData::_fuel_pressure_type arg)
  {
    msg_.fuel_pressure = std::move(arg);
    return Init_PowertrainData_engine_oil_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_fuel_level
{
public:
  explicit Init_PowertrainData_fuel_level(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_fuel_pressure fuel_level(::autonoma_msgs::msg::PowertrainData::_fuel_level_type arg)
  {
    msg_.fuel_level = std::move(arg);
    return Init_PowertrainData_fuel_pressure(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_lambda_sensor
{
public:
  explicit Init_PowertrainData_lambda_sensor(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_fuel_level lambda_sensor(::autonoma_msgs::msg::PowertrainData::_lambda_sensor_type arg)
  {
    msg_.lambda_sensor = std::move(arg);
    return Init_PowertrainData_fuel_level(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_map_sensor
{
public:
  explicit Init_PowertrainData_map_sensor(::autonoma_msgs::msg::PowertrainData & msg)
  : msg_(msg)
  {}
  Init_PowertrainData_lambda_sensor map_sensor(::autonoma_msgs::msg::PowertrainData::_map_sensor_type arg)
  {
    msg_.map_sensor = std::move(arg);
    return Init_PowertrainData_lambda_sensor(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

class Init_PowertrainData_header
{
public:
  Init_PowertrainData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowertrainData_map_sensor header(::autonoma_msgs::msg::PowertrainData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowertrainData_map_sensor(msg_);
  }

private:
  ::autonoma_msgs::msg::PowertrainData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::PowertrainData>()
{
  return autonoma_msgs::msg::builder::Init_PowertrainData_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__BUILDER_HPP_
