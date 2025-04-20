// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/PositionOrVelocityType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionOrVelocityType_type
{
public:
  Init_PositionOrVelocityType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::PositionOrVelocityType type(::novatel_oem7_msgs::msg::PositionOrVelocityType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::PositionOrVelocityType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::PositionOrVelocityType>()
{
  return novatel_oem7_msgs::msg::builder::Init_PositionOrVelocityType_type();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__BUILDER_HPP_
