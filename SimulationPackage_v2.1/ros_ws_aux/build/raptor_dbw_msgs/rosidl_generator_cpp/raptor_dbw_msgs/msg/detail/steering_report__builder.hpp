// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/steering_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringReport_steering_overheat_warning
{
public:
  explicit Init_SteeringReport_steering_overheat_warning(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::SteeringReport steering_overheat_warning(::raptor_dbw_msgs::msg::SteeringReport::_steering_overheat_warning_type arg)
  {
    msg_.steering_overheat_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_control_type
{
public:
  explicit Init_SteeringReport_control_type(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_overheat_warning control_type(::raptor_dbw_msgs::msg::SteeringReport::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_SteeringReport_steering_overheat_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_rolling_counter
{
public:
  explicit Init_SteeringReport_rolling_counter(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_control_type rolling_counter(::raptor_dbw_msgs::msg::SteeringReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_SteeringReport_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_overheat_prevention_mode
{
public:
  explicit Init_SteeringReport_overheat_prevention_mode(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_rolling_counter overheat_prevention_mode(::raptor_dbw_msgs::msg::SteeringReport::_overheat_prevention_mode_type arg)
  {
    msg_.overheat_prevention_mode = std::move(arg);
    return Init_SteeringReport_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_fault_steering_system
{
public:
  explicit Init_SteeringReport_fault_steering_system(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_overheat_prevention_mode fault_steering_system(::raptor_dbw_msgs::msg::SteeringReport::_fault_steering_system_type arg)
  {
    msg_.fault_steering_system = std::move(arg);
    return Init_SteeringReport_overheat_prevention_mode(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_driver_activity
{
public:
  explicit Init_SteeringReport_driver_activity(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_steering_system driver_activity(::raptor_dbw_msgs::msg::SteeringReport::_driver_activity_type arg)
  {
    msg_.driver_activity = std::move(arg);
    return Init_SteeringReport_fault_steering_system(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_enabled
{
public:
  explicit Init_SteeringReport_enabled(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_driver_activity enabled(::raptor_dbw_msgs::msg::SteeringReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SteeringReport_driver_activity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_torque
{
public:
  explicit Init_SteeringReport_steering_wheel_torque(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_enabled steering_wheel_torque(::raptor_dbw_msgs::msg::SteeringReport::_steering_wheel_torque_type arg)
  {
    msg_.steering_wheel_torque = std::move(arg);
    return Init_SteeringReport_enabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_angle_cmd
{
public:
  explicit Init_SteeringReport_steering_wheel_angle_cmd(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_wheel_torque steering_wheel_angle_cmd(::raptor_dbw_msgs::msg::SteeringReport::_steering_wheel_angle_cmd_type arg)
  {
    msg_.steering_wheel_angle_cmd = std::move(arg);
    return Init_SteeringReport_steering_wheel_torque(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_angle
{
public:
  explicit Init_SteeringReport_steering_wheel_angle(::raptor_dbw_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_wheel_angle_cmd steering_wheel_angle(::raptor_dbw_msgs::msg::SteeringReport::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_SteeringReport_steering_wheel_angle_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_header
{
public:
  Init_SteeringReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringReport_steering_wheel_angle header(::raptor_dbw_msgs::msg::SteeringReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringReport_steering_wheel_angle(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::SteeringReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_SteeringReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_
