// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/twist_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistCmd_decel_limit
{
public:
  explicit Init_TwistCmd_decel_limit(::raptor_dbw_msgs::msg::TwistCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::TwistCmd decel_limit(::raptor_dbw_msgs::msg::TwistCmd::_decel_limit_type arg)
  {
    msg_.decel_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::TwistCmd msg_;
};

class Init_TwistCmd_accel_limit
{
public:
  explicit Init_TwistCmd_accel_limit(::raptor_dbw_msgs::msg::TwistCmd & msg)
  : msg_(msg)
  {}
  Init_TwistCmd_decel_limit accel_limit(::raptor_dbw_msgs::msg::TwistCmd::_accel_limit_type arg)
  {
    msg_.accel_limit = std::move(arg);
    return Init_TwistCmd_decel_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::TwistCmd msg_;
};

class Init_TwistCmd_twist
{
public:
  Init_TwistCmd_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistCmd_accel_limit twist(::raptor_dbw_msgs::msg::TwistCmd::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_TwistCmd_accel_limit(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::TwistCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::TwistCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_TwistCmd_twist();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_
