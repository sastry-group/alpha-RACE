// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/LineMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/line_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_LineMarker_indices
{
public:
  explicit Init_LineMarker_indices(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::LineMarker indices(::foxglove_msgs::msg::LineMarker::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_colors
{
public:
  explicit Init_LineMarker_colors(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_indices colors(::foxglove_msgs::msg::LineMarker::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_LineMarker_indices(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_color
{
public:
  explicit Init_LineMarker_color(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_colors color(::foxglove_msgs::msg::LineMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_LineMarker_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_points
{
public:
  explicit Init_LineMarker_points(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_color points(::foxglove_msgs::msg::LineMarker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_LineMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_scale_invariant
{
public:
  explicit Init_LineMarker_scale_invariant(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_points scale_invariant(::foxglove_msgs::msg::LineMarker::_scale_invariant_type arg)
  {
    msg_.scale_invariant = std::move(arg);
    return Init_LineMarker_points(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_thickness
{
public:
  explicit Init_LineMarker_thickness(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_scale_invariant thickness(::foxglove_msgs::msg::LineMarker::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_LineMarker_scale_invariant(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_pose
{
public:
  explicit Init_LineMarker_pose(::foxglove_msgs::msg::LineMarker & msg)
  : msg_(msg)
  {}
  Init_LineMarker_thickness pose(::foxglove_msgs::msg::LineMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LineMarker_thickness(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

class Init_LineMarker_type
{
public:
  Init_LineMarker_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineMarker_pose type(::foxglove_msgs::msg::LineMarker::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LineMarker_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::LineMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::LineMarker>()
{
  return foxglove_msgs::msg::builder::Init_LineMarker_type();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__BUILDER_HPP_
