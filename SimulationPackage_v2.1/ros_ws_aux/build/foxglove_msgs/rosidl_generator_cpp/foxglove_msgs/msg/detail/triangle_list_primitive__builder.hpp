// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TriangleListPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/triangle_list_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TriangleListPrimitive_indices
{
public:
  explicit Init_TriangleListPrimitive_indices(::foxglove_msgs::msg::TriangleListPrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TriangleListPrimitive indices(::foxglove_msgs::msg::TriangleListPrimitive::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListPrimitive msg_;
};

class Init_TriangleListPrimitive_colors
{
public:
  explicit Init_TriangleListPrimitive_colors(::foxglove_msgs::msg::TriangleListPrimitive & msg)
  : msg_(msg)
  {}
  Init_TriangleListPrimitive_indices colors(::foxglove_msgs::msg::TriangleListPrimitive::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_TriangleListPrimitive_indices(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListPrimitive msg_;
};

class Init_TriangleListPrimitive_color
{
public:
  explicit Init_TriangleListPrimitive_color(::foxglove_msgs::msg::TriangleListPrimitive & msg)
  : msg_(msg)
  {}
  Init_TriangleListPrimitive_colors color(::foxglove_msgs::msg::TriangleListPrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TriangleListPrimitive_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListPrimitive msg_;
};

class Init_TriangleListPrimitive_points
{
public:
  explicit Init_TriangleListPrimitive_points(::foxglove_msgs::msg::TriangleListPrimitive & msg)
  : msg_(msg)
  {}
  Init_TriangleListPrimitive_color points(::foxglove_msgs::msg::TriangleListPrimitive::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_TriangleListPrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListPrimitive msg_;
};

class Init_TriangleListPrimitive_pose
{
public:
  Init_TriangleListPrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriangleListPrimitive_points pose(::foxglove_msgs::msg::TriangleListPrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TriangleListPrimitive_points(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TriangleListPrimitive>()
{
  return foxglove_msgs::msg::builder::Init_TriangleListPrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__BUILDER_HPP_
