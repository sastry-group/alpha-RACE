// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_Transform_rotation
{
public:
  explicit Init_Transform_rotation(::foxglove_msgs::msg::Transform & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::Transform rotation(::foxglove_msgs::msg::Transform::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::Transform msg_;
};

class Init_Transform_translation
{
public:
  explicit Init_Transform_translation(::foxglove_msgs::msg::Transform & msg)
  : msg_(msg)
  {}
  Init_Transform_rotation translation(::foxglove_msgs::msg::Transform::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_Transform_rotation(msg_);
  }

private:
  ::foxglove_msgs::msg::Transform msg_;
};

class Init_Transform_timestamp
{
public:
  Init_Transform_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transform_translation timestamp(::foxglove_msgs::msg::Transform::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Transform_translation(msg_);
  }

private:
  ::foxglove_msgs::msg::Transform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::Transform>()
{
  return foxglove_msgs::msg::builder::Init_Transform_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
