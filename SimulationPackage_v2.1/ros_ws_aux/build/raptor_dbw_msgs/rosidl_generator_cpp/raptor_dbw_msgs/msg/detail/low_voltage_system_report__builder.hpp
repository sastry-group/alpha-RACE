// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/low_voltage_system_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_LowVoltageSystemReport_aux_inverter_contactor
{
public:
  explicit Init_LowVoltageSystemReport_aux_inverter_contactor(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport aux_inverter_contactor(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_aux_inverter_contactor_type arg)
  {
    msg_.aux_inverter_contactor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_alternator_current
{
public:
  explicit Init_LowVoltageSystemReport_alternator_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_aux_inverter_contactor alternator_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_alternator_current_type arg)
  {
    msg_.alternator_current = std::move(arg);
    return Init_LowVoltageSystemReport_aux_inverter_contactor(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_dcdc_current
{
public:
  explicit Init_LowVoltageSystemReport_dcdc_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_alternator_current dcdc_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_dcdc_current_type arg)
  {
    msg_.dcdc_current = std::move(arg);
    return Init_LowVoltageSystemReport_alternator_current(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_vehicle_alternator_current
{
public:
  explicit Init_LowVoltageSystemReport_vehicle_alternator_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_dcdc_current vehicle_alternator_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_vehicle_alternator_current_type arg)
  {
    msg_.vehicle_alternator_current = std::move(arg);
    return Init_LowVoltageSystemReport_dcdc_current(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_vehicle_battery_current
{
public:
  explicit Init_LowVoltageSystemReport_vehicle_battery_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_vehicle_alternator_current vehicle_battery_current(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_vehicle_battery_current_type arg)
  {
    msg_.vehicle_battery_current = std::move(arg);
    return Init_LowVoltageSystemReport_vehicle_alternator_current(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_vehicle_battery_volts
{
public:
  explicit Init_LowVoltageSystemReport_vehicle_battery_volts(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_vehicle_battery_current vehicle_battery_volts(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_vehicle_battery_volts_type arg)
  {
    msg_.vehicle_battery_volts = std::move(arg);
    return Init_LowVoltageSystemReport_vehicle_battery_current(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_dbw_battery_volts
{
public:
  explicit Init_LowVoltageSystemReport_dbw_battery_volts(::raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
  : msg_(msg)
  {}
  Init_LowVoltageSystemReport_vehicle_battery_volts dbw_battery_volts(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_dbw_battery_volts_type arg)
  {
    msg_.dbw_battery_volts = std::move(arg);
    return Init_LowVoltageSystemReport_vehicle_battery_volts(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

class Init_LowVoltageSystemReport_header
{
public:
  Init_LowVoltageSystemReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowVoltageSystemReport_dbw_battery_volts header(::raptor_dbw_msgs::msg::LowVoltageSystemReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LowVoltageSystemReport_dbw_battery_volts(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowVoltageSystemReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::LowVoltageSystemReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_LowVoltageSystemReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__BUILDER_HPP_
