// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSResetType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/ins_reset_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSResetType_type
{
public:
  Init_INSResetType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::INSResetType type(::novatel_oem7_msgs::msg::INSResetType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSResetType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSResetType>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSResetType_type();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__BUILDER_HPP_
