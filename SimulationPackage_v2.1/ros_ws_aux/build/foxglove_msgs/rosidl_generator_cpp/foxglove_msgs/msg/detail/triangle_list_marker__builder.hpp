// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TriangleListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/triangle_list_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TriangleListMarker_indices
{
public:
  explicit Init_TriangleListMarker_indices(::foxglove_msgs::msg::TriangleListMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TriangleListMarker indices(::foxglove_msgs::msg::TriangleListMarker::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListMarker msg_;
};

class Init_TriangleListMarker_colors
{
public:
  explicit Init_TriangleListMarker_colors(::foxglove_msgs::msg::TriangleListMarker & msg)
  : msg_(msg)
  {}
  Init_TriangleListMarker_indices colors(::foxglove_msgs::msg::TriangleListMarker::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_TriangleListMarker_indices(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListMarker msg_;
};

class Init_TriangleListMarker_color
{
public:
  explicit Init_TriangleListMarker_color(::foxglove_msgs::msg::TriangleListMarker & msg)
  : msg_(msg)
  {}
  Init_TriangleListMarker_colors color(::foxglove_msgs::msg::TriangleListMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TriangleListMarker_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListMarker msg_;
};

class Init_TriangleListMarker_points
{
public:
  explicit Init_TriangleListMarker_points(::foxglove_msgs::msg::TriangleListMarker & msg)
  : msg_(msg)
  {}
  Init_TriangleListMarker_color points(::foxglove_msgs::msg::TriangleListMarker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_TriangleListMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListMarker msg_;
};

class Init_TriangleListMarker_pose
{
public:
  Init_TriangleListMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriangleListMarker_points pose(::foxglove_msgs::msg::TriangleListMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TriangleListMarker_points(msg_);
  }

private:
  ::foxglove_msgs::msg::TriangleListMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TriangleListMarker>()
{
  return foxglove_msgs::msg::builder::Init_TriangleListMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__BUILDER_HPP_
