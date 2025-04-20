// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/brake_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeCmd_park_brake_cmd
{
public:
  explicit Init_BrakeCmd_park_brake_cmd(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::BrakeCmd park_brake_cmd(::raptor_dbw_msgs::msg::BrakeCmd::_park_brake_cmd_type arg)
  {
    msg_.park_brake_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_decel_negative_jerk_limit
{
public:
  explicit Init_BrakeCmd_decel_negative_jerk_limit(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_park_brake_cmd decel_negative_jerk_limit(::raptor_dbw_msgs::msg::BrakeCmd::_decel_negative_jerk_limit_type arg)
  {
    msg_.decel_negative_jerk_limit = std::move(arg);
    return Init_BrakeCmd_park_brake_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_control_type
{
public:
  explicit Init_BrakeCmd_control_type(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_decel_negative_jerk_limit control_type(::raptor_dbw_msgs::msg::BrakeCmd::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_BrakeCmd_decel_negative_jerk_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_decel_limit
{
public:
  explicit Init_BrakeCmd_decel_limit(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_control_type decel_limit(::raptor_dbw_msgs::msg::BrakeCmd::_decel_limit_type arg)
  {
    msg_.decel_limit = std::move(arg);
    return Init_BrakeCmd_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_torque_cmd
{
public:
  explicit Init_BrakeCmd_torque_cmd(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_decel_limit torque_cmd(::raptor_dbw_msgs::msg::BrakeCmd::_torque_cmd_type arg)
  {
    msg_.torque_cmd = std::move(arg);
    return Init_BrakeCmd_decel_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_rolling_counter
{
public:
  explicit Init_BrakeCmd_rolling_counter(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_torque_cmd rolling_counter(::raptor_dbw_msgs::msg::BrakeCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_BrakeCmd_torque_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_enable
{
public:
  explicit Init_BrakeCmd_enable(::raptor_dbw_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_rolling_counter enable(::raptor_dbw_msgs::msg::BrakeCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_BrakeCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_pedal_cmd
{
public:
  Init_BrakeCmd_pedal_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeCmd_enable pedal_cmd(::raptor_dbw_msgs::msg::BrakeCmd::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_BrakeCmd_enable(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::BrakeCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_BrakeCmd_pedal_cmd();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_
