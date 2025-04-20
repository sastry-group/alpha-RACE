// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/gear_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_GearCmd_rolling_counter
{
public:
  explicit Init_GearCmd_rolling_counter(::raptor_dbw_msgs::msg::GearCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::GearCmd rolling_counter(::raptor_dbw_msgs::msg::GearCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearCmd msg_;
};

class Init_GearCmd_enable
{
public:
  explicit Init_GearCmd_enable(::raptor_dbw_msgs::msg::GearCmd & msg)
  : msg_(msg)
  {}
  Init_GearCmd_rolling_counter enable(::raptor_dbw_msgs::msg::GearCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_GearCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearCmd msg_;
};

class Init_GearCmd_cmd
{
public:
  Init_GearCmd_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearCmd_enable cmd(::raptor_dbw_msgs::msg::GearCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_GearCmd_enable(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::GearCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_GearCmd_cmd();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_
