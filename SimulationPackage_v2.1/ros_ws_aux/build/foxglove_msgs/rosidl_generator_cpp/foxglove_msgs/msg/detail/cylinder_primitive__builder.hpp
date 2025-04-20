// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CylinderPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cylinder_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CylinderPrimitive_color
{
public:
  explicit Init_CylinderPrimitive_color(::foxglove_msgs::msg::CylinderPrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CylinderPrimitive color(::foxglove_msgs::msg::CylinderPrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderPrimitive msg_;
};

class Init_CylinderPrimitive_top_scale
{
public:
  explicit Init_CylinderPrimitive_top_scale(::foxglove_msgs::msg::CylinderPrimitive & msg)
  : msg_(msg)
  {}
  Init_CylinderPrimitive_color top_scale(::foxglove_msgs::msg::CylinderPrimitive::_top_scale_type arg)
  {
    msg_.top_scale = std::move(arg);
    return Init_CylinderPrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderPrimitive msg_;
};

class Init_CylinderPrimitive_bottom_scale
{
public:
  explicit Init_CylinderPrimitive_bottom_scale(::foxglove_msgs::msg::CylinderPrimitive & msg)
  : msg_(msg)
  {}
  Init_CylinderPrimitive_top_scale bottom_scale(::foxglove_msgs::msg::CylinderPrimitive::_bottom_scale_type arg)
  {
    msg_.bottom_scale = std::move(arg);
    return Init_CylinderPrimitive_top_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderPrimitive msg_;
};

class Init_CylinderPrimitive_size
{
public:
  explicit Init_CylinderPrimitive_size(::foxglove_msgs::msg::CylinderPrimitive & msg)
  : msg_(msg)
  {}
  Init_CylinderPrimitive_bottom_scale size(::foxglove_msgs::msg::CylinderPrimitive::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_CylinderPrimitive_bottom_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderPrimitive msg_;
};

class Init_CylinderPrimitive_pose
{
public:
  Init_CylinderPrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CylinderPrimitive_size pose(::foxglove_msgs::msg::CylinderPrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CylinderPrimitive_size(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CylinderPrimitive>()
{
  return foxglove_msgs::msg::builder::Init_CylinderPrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__BUILDER_HPP_
