// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/gear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_Gear_gear
{
public:
  Init_Gear_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::Gear gear(::raptor_dbw_msgs::msg::Gear::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Gear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::Gear>()
{
  return raptor_dbw_msgs::msg::builder::Init_Gear_gear();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_
