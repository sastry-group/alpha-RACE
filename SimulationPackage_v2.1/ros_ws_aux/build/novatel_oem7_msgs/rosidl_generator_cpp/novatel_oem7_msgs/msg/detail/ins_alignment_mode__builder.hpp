// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSAlignmentMode.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSAlignmentMode_mode
{
public:
  Init_INSAlignmentMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::INSAlignmentMode mode(::novatel_oem7_msgs::msg::INSAlignmentMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSAlignmentMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSAlignmentMode>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSAlignmentMode_mode();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__BUILDER_HPP_
