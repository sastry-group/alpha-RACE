// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_AcceleratorPedalCmd_accel_positive_jerk_limit
{
public:
  explicit Init_AcceleratorPedalCmd_accel_positive_jerk_limit(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd accel_positive_jerk_limit(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_accel_positive_jerk_limit_type arg)
  {
    msg_.accel_positive_jerk_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_accel_limit
{
public:
  explicit Init_AcceleratorPedalCmd_accel_limit(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_accel_positive_jerk_limit accel_limit(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_accel_limit_type arg)
  {
    msg_.accel_limit = std::move(arg);
    return Init_AcceleratorPedalCmd_accel_positive_jerk_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_control_type
{
public:
  explicit Init_AcceleratorPedalCmd_control_type(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_accel_limit control_type(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_AcceleratorPedalCmd_accel_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_road_slope
{
public:
  explicit Init_AcceleratorPedalCmd_road_slope(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_control_type road_slope(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_road_slope_type arg)
  {
    msg_.road_slope = std::move(arg);
    return Init_AcceleratorPedalCmd_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_rolling_counter
{
public:
  explicit Init_AcceleratorPedalCmd_rolling_counter(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_road_slope rolling_counter(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_AcceleratorPedalCmd_road_slope(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_ignore
{
public:
  explicit Init_AcceleratorPedalCmd_ignore(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_rolling_counter ignore(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_ignore_type arg)
  {
    msg_.ignore = std::move(arg);
    return Init_AcceleratorPedalCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_enable
{
public:
  explicit Init_AcceleratorPedalCmd_enable(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_ignore enable(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_AcceleratorPedalCmd_ignore(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_speed_cmd
{
public:
  explicit Init_AcceleratorPedalCmd_speed_cmd(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_enable speed_cmd(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_speed_cmd_type arg)
  {
    msg_.speed_cmd = std::move(arg);
    return Init_AcceleratorPedalCmd_enable(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_torque_cmd
{
public:
  explicit Init_AcceleratorPedalCmd_torque_cmd(::raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
  : msg_(msg)
  {}
  Init_AcceleratorPedalCmd_speed_cmd torque_cmd(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_torque_cmd_type arg)
  {
    msg_.torque_cmd = std::move(arg);
    return Init_AcceleratorPedalCmd_speed_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

class Init_AcceleratorPedalCmd_pedal_cmd
{
public:
  Init_AcceleratorPedalCmd_pedal_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcceleratorPedalCmd_torque_cmd pedal_cmd(::raptor_dbw_msgs::msg::AcceleratorPedalCmd::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_AcceleratorPedalCmd_torque_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::AcceleratorPedalCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::AcceleratorPedalCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_AcceleratorPedalCmd_pedal_cmd();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__BUILDER_HPP_
