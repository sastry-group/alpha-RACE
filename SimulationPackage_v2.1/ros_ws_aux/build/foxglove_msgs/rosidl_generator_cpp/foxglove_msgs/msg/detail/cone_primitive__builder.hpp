// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ConePrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cone_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ConePrimitive_color
{
public:
  explicit Init_ConePrimitive_color(::foxglove_msgs::msg::ConePrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ConePrimitive color(::foxglove_msgs::msg::ConePrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ConePrimitive msg_;
};

class Init_ConePrimitive_top_scale
{
public:
  explicit Init_ConePrimitive_top_scale(::foxglove_msgs::msg::ConePrimitive & msg)
  : msg_(msg)
  {}
  Init_ConePrimitive_color top_scale(::foxglove_msgs::msg::ConePrimitive::_top_scale_type arg)
  {
    msg_.top_scale = std::move(arg);
    return Init_ConePrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ConePrimitive msg_;
};

class Init_ConePrimitive_bottom_scale
{
public:
  explicit Init_ConePrimitive_bottom_scale(::foxglove_msgs::msg::ConePrimitive & msg)
  : msg_(msg)
  {}
  Init_ConePrimitive_top_scale bottom_scale(::foxglove_msgs::msg::ConePrimitive::_bottom_scale_type arg)
  {
    msg_.bottom_scale = std::move(arg);
    return Init_ConePrimitive_top_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ConePrimitive msg_;
};

class Init_ConePrimitive_size
{
public:
  explicit Init_ConePrimitive_size(::foxglove_msgs::msg::ConePrimitive & msg)
  : msg_(msg)
  {}
  Init_ConePrimitive_bottom_scale size(::foxglove_msgs::msg::ConePrimitive::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ConePrimitive_bottom_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ConePrimitive msg_;
};

class Init_ConePrimitive_pose
{
public:
  Init_ConePrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConePrimitive_size pose(::foxglove_msgs::msg::ConePrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ConePrimitive_size(msg_);
  }

private:
  ::foxglove_msgs::msg::ConePrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ConePrimitive>()
{
  return foxglove_msgs::msg::builder::Init_ConePrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_PRIMITIVE__BUILDER_HPP_
