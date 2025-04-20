// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_AcceleratorPedalReport_control_type
{
public:
  explicit Init_AcceleratorPedalReport_control_type(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport control_type(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_torque_actual
{
public:
  explicit Init_AcceleratorPedalReport_torque_actual(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_control_type torque_actual(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_torque_actual_type arg)
  {
    msg_.torque_actual = std::move(arg);
    return Init_AcceleratorPedalReport_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_rolling_counter
{
public:
  explicit Init_AcceleratorPedalReport_rolling_counter(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_torque_actual rolling_counter(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_AcceleratorPedalReport_torque_actual(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_fault_ch2
{
public:
  explicit Init_AcceleratorPedalReport_fault_ch2(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_rolling_counter fault_ch2(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_fault_ch2_type arg)
  {
    msg_.fault_ch2 = std::move(arg);
    return Init_AcceleratorPedalReport_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_fault_ch1
{
public:
  explicit Init_AcceleratorPedalReport_fault_ch1(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_fault_ch2 fault_ch1(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_fault_ch1_type arg)
  {
    msg_.fault_ch1 = std::move(arg);
    return Init_AcceleratorPedalReport_fault_ch2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_fault_accel_pedal_system
{
public:
  explicit Init_AcceleratorPedalReport_fault_accel_pedal_system(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_fault_ch1 fault_accel_pedal_system(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_fault_accel_pedal_system_type arg)
  {
    msg_.fault_accel_pedal_system = std::move(arg);
    return Init_AcceleratorPedalReport_fault_ch1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_driver_activity
{
public:
  explicit Init_AcceleratorPedalReport_driver_activity(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_fault_accel_pedal_system driver_activity(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_driver_activity_type arg)
  {
    msg_.driver_activity = std::move(arg);
    return Init_AcceleratorPedalReport_fault_accel_pedal_system(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_ignore_driver
{
public:
  explicit Init_AcceleratorPedalReport_ignore_driver(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_driver_activity ignore_driver(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_ignore_driver_type arg)
  {
    msg_.ignore_driver = std::move(arg);
    return Init_AcceleratorPedalReport_driver_activity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_enabled
{
public:
  explicit Init_AcceleratorPedalReport_enabled(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_ignore_driver enabled(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_AcceleratorPedalReport_ignore_driver(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_pedal_output
{
public:
  explicit Init_AcceleratorPedalReport_pedal_output(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_enabled pedal_output(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_pedal_output_type arg)
  {
    msg_.pedal_output = std::move(arg);
    return Init_AcceleratorPedalReport_enabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_pedal_input
{
public:
  explicit Init_AcceleratorPedalReport_pedal_input(::raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalReport_pedal_output pedal_input(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_pedal_input_type arg)
  {
    msg_.pedal_input = std::move(arg);
    return Init_AcceleratorPedalReport_pedal_output(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

class Init_AcceleratorPedalReport_header
{
public:
  Init_AcceleratorPedalReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcceleratorPedalReport_pedal_input header(::raptor_dbw_msgs::msg::AcceleratorPedalReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcceleratorPedalReport_pedal_input(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::AcceleratorPedalReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_AcceleratorPedalReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__BUILDER_HPP_
