// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalEnableCmd_rolling_counter
{
public:
  explicit Init_GlobalEnableCmd_rolling_counter(::raptor_dbw_msgs::msg::GlobalEnableCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::GlobalEnableCmd rolling_counter(::raptor_dbw_msgs::msg::GlobalEnableCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GlobalEnableCmd msg_;
};

class Init_GlobalEnableCmd_ecu_build_number
{
public:
  explicit Init_GlobalEnableCmd_ecu_build_number(::raptor_dbw_msgs::msg::GlobalEnableCmd & msg)
  : msg_(msg)
  {}
  Init_GlobalEnableCmd_rolling_counter ecu_build_number(::raptor_dbw_msgs::msg::GlobalEnableCmd::_ecu_build_number_type arg)
  {
    msg_.ecu_build_number = std::move(arg);
    return Init_GlobalEnableCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GlobalEnableCmd msg_;
};

class Init_GlobalEnableCmd_enable_joystick_limits
{
public:
  explicit Init_GlobalEnableCmd_enable_joystick_limits(::raptor_dbw_msgs::msg::GlobalEnableCmd & msg)
  : msg_(msg)
  {}
  Init_GlobalEnableCmd_ecu_build_number enable_joystick_limits(::raptor_dbw_msgs::msg::GlobalEnableCmd::_enable_joystick_limits_type arg)
  {
    msg_.enable_joystick_limits = std::move(arg);
    return Init_GlobalEnableCmd_ecu_build_number(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GlobalEnableCmd msg_;
};

class Init_GlobalEnableCmd_global_enable
{
public:
  Init_GlobalEnableCmd_global_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalEnableCmd_enable_joystick_limits global_enable(::raptor_dbw_msgs::msg::GlobalEnableCmd::_global_enable_type arg)
  {
    msg_.global_enable = std::move(arg);
    return Init_GlobalEnableCmd_enable_joystick_limits(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GlobalEnableCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::GlobalEnableCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_GlobalEnableCmd_global_enable();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__BUILDER_HPP_
