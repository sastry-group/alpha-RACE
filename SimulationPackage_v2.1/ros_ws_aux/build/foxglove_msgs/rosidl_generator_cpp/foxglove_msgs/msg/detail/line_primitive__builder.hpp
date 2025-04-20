// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/LinePrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LINE_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LINE_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/line_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_LinePrimitive_indices
{
public:
  explicit Init_LinePrimitive_indices(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::LinePrimitive indices(::foxglove_msgs::msg::LinePrimitive::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_colors
{
public:
  explicit Init_LinePrimitive_colors(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_indices colors(::foxglove_msgs::msg::LinePrimitive::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_LinePrimitive_indices(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_color
{
public:
  explicit Init_LinePrimitive_color(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_colors color(::foxglove_msgs::msg::LinePrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_LinePrimitive_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_points
{
public:
  explicit Init_LinePrimitive_points(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_color points(::foxglove_msgs::msg::LinePrimitive::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_LinePrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_scale_invariant
{
public:
  explicit Init_LinePrimitive_scale_invariant(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_points scale_invariant(::foxglove_msgs::msg::LinePrimitive::_scale_invariant_type arg)
  {
    msg_.scale_invariant = std::move(arg);
    return Init_LinePrimitive_points(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_thickness
{
public:
  explicit Init_LinePrimitive_thickness(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_scale_invariant thickness(::foxglove_msgs::msg::LinePrimitive::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_LinePrimitive_scale_invariant(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_pose
{
public:
  explicit Init_LinePrimitive_pose(::foxglove_msgs::msg::LinePrimitive & msg)
  : msg_(msg)
  {}
  Init_LinePrimitive_thickness pose(::foxglove_msgs::msg::LinePrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LinePrimitive_thickness(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

class Init_LinePrimitive_type
{
public:
  Init_LinePrimitive_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinePrimitive_pose type(::foxglove_msgs::msg::LinePrimitive::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LinePrimitive_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::LinePrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::LinePrimitive>()
{
  return foxglove_msgs::msg::builder::Init_LinePrimitive_type();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LINE_PRIMITIVE__BUILDER_HPP_
