// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/misc_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_MiscReport_ambient_temp
{
public:
  explicit Init_MiscReport_ambient_temp(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::MiscReport ambient_temp(::raptor_dbw_msgs::msg::MiscReport::_ambient_temp_type arg)
  {
    msg_.ambient_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_comms_fault
{
public:
  explicit Init_MiscReport_comms_fault(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_ambient_temp comms_fault(::raptor_dbw_msgs::msg::MiscReport::_comms_fault_type arg)
  {
    msg_.comms_fault = std::move(arg);
    return Init_MiscReport_ambient_temp(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_general_driver_activity
{
public:
  explicit Init_MiscReport_general_driver_activity(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_comms_fault general_driver_activity(::raptor_dbw_msgs::msg::MiscReport::_general_driver_activity_type arg)
  {
    msg_.general_driver_activity = std::move(arg);
    return Init_MiscReport_comms_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_by_wire_ready
{
public:
  explicit Init_MiscReport_by_wire_ready(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_general_driver_activity by_wire_ready(::raptor_dbw_msgs::msg::MiscReport::_by_wire_ready_type arg)
  {
    msg_.by_wire_ready = std::move(arg);
    return Init_MiscReport_general_driver_activity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_general_actuator_fault
{
public:
  explicit Init_MiscReport_general_actuator_fault(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_by_wire_ready general_actuator_fault(::raptor_dbw_msgs::msg::MiscReport::_general_actuator_fault_type arg)
  {
    msg_.general_actuator_fault = std::move(arg);
    return Init_MiscReport_by_wire_ready(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_software_build_number
{
public:
  explicit Init_MiscReport_software_build_number(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_general_actuator_fault software_build_number(::raptor_dbw_msgs::msg::MiscReport::_software_build_number_type arg)
  {
    msg_.software_build_number = std::move(arg);
    return Init_MiscReport_general_actuator_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_vehicle_speed
{
public:
  explicit Init_MiscReport_vehicle_speed(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_software_build_number vehicle_speed(::raptor_dbw_msgs::msg::MiscReport::_vehicle_speed_type arg)
  {
    msg_.vehicle_speed = std::move(arg);
    return Init_MiscReport_software_build_number(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_drive_by_wire_enabled
{
public:
  explicit Init_MiscReport_drive_by_wire_enabled(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_vehicle_speed drive_by_wire_enabled(::raptor_dbw_msgs::msg::MiscReport::_drive_by_wire_enabled_type arg)
  {
    msg_.drive_by_wire_enabled = std::move(arg);
    return Init_MiscReport_vehicle_speed(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_fuel_level
{
public:
  explicit Init_MiscReport_fuel_level(::raptor_dbw_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_drive_by_wire_enabled fuel_level(::raptor_dbw_msgs::msg::MiscReport::_fuel_level_type arg)
  {
    msg_.fuel_level = std::move(arg);
    return Init_MiscReport_drive_by_wire_enabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_header
{
public:
  Init_MiscReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MiscReport_fuel_level header(::raptor_dbw_msgs::msg::MiscReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MiscReport_fuel_level(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::MiscReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_MiscReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_
