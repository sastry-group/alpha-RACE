// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ArrowPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__ARROW_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__ARROW_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/arrow_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ArrowPrimitive_color
{
public:
  explicit Init_ArrowPrimitive_color(::foxglove_msgs::msg::ArrowPrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ArrowPrimitive color(::foxglove_msgs::msg::ArrowPrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

class Init_ArrowPrimitive_head_diameter
{
public:
  explicit Init_ArrowPrimitive_head_diameter(::foxglove_msgs::msg::ArrowPrimitive & msg)
  : msg_(msg)
  {}
  Init_ArrowPrimitive_color head_diameter(::foxglove_msgs::msg::ArrowPrimitive::_head_diameter_type arg)
  {
    msg_.head_diameter = std::move(arg);
    return Init_ArrowPrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

class Init_ArrowPrimitive_head_length
{
public:
  explicit Init_ArrowPrimitive_head_length(::foxglove_msgs::msg::ArrowPrimitive & msg)
  : msg_(msg)
  {}
  Init_ArrowPrimitive_head_diameter head_length(::foxglove_msgs::msg::ArrowPrimitive::_head_length_type arg)
  {
    msg_.head_length = std::move(arg);
    return Init_ArrowPrimitive_head_diameter(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

class Init_ArrowPrimitive_shaft_diameter
{
public:
  explicit Init_ArrowPrimitive_shaft_diameter(::foxglove_msgs::msg::ArrowPrimitive & msg)
  : msg_(msg)
  {}
  Init_ArrowPrimitive_head_length shaft_diameter(::foxglove_msgs::msg::ArrowPrimitive::_shaft_diameter_type arg)
  {
    msg_.shaft_diameter = std::move(arg);
    return Init_ArrowPrimitive_head_length(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

class Init_ArrowPrimitive_shaft_length
{
public:
  explicit Init_ArrowPrimitive_shaft_length(::foxglove_msgs::msg::ArrowPrimitive & msg)
  : msg_(msg)
  {}
  Init_ArrowPrimitive_shaft_diameter shaft_length(::foxglove_msgs::msg::ArrowPrimitive::_shaft_length_type arg)
  {
    msg_.shaft_length = std::move(arg);
    return Init_ArrowPrimitive_shaft_diameter(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

class Init_ArrowPrimitive_pose
{
public:
  Init_ArrowPrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArrowPrimitive_shaft_length pose(::foxglove_msgs::msg::ArrowPrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ArrowPrimitive_shaft_length(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ArrowPrimitive>()
{
  return foxglove_msgs::msg::builder::Init_ArrowPrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__ARROW_PRIMITIVE__BUILDER_HPP_
