// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/RotationalOffset.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/rotational_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_RotationalOffset_offset
{
public:
  Init_RotationalOffset_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::RotationalOffset offset(::novatel_oem7_msgs::msg::RotationalOffset::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RotationalOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::RotationalOffset>()
{
  return novatel_oem7_msgs::msg::builder::Init_RotationalOffset_offset();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__BUILDER_HPP_
