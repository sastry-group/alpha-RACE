// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ArrowMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/arrow_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ArrowMarker_color
{
public:
  explicit Init_ArrowMarker_color(::foxglove_msgs::msg::ArrowMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ArrowMarker color(::foxglove_msgs::msg::ArrowMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

class Init_ArrowMarker_head_length
{
public:
  explicit Init_ArrowMarker_head_length(::foxglove_msgs::msg::ArrowMarker & msg)
  : msg_(msg)
  {}
  Init_ArrowMarker_color head_length(::foxglove_msgs::msg::ArrowMarker::_head_length_type arg)
  {
    msg_.head_length = std::move(arg);
    return Init_ArrowMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

class Init_ArrowMarker_head_diameter
{
public:
  explicit Init_ArrowMarker_head_diameter(::foxglove_msgs::msg::ArrowMarker & msg)
  : msg_(msg)
  {}
  Init_ArrowMarker_head_length head_diameter(::foxglove_msgs::msg::ArrowMarker::_head_diameter_type arg)
  {
    msg_.head_diameter = std::move(arg);
    return Init_ArrowMarker_head_length(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

class Init_ArrowMarker_shaft_diameter
{
public:
  explicit Init_ArrowMarker_shaft_diameter(::foxglove_msgs::msg::ArrowMarker & msg)
  : msg_(msg)
  {}
  Init_ArrowMarker_head_diameter shaft_diameter(::foxglove_msgs::msg::ArrowMarker::_shaft_diameter_type arg)
  {
    msg_.shaft_diameter = std::move(arg);
    return Init_ArrowMarker_head_diameter(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

class Init_ArrowMarker_length
{
public:
  explicit Init_ArrowMarker_length(::foxglove_msgs::msg::ArrowMarker & msg)
  : msg_(msg)
  {}
  Init_ArrowMarker_shaft_diameter length(::foxglove_msgs::msg::ArrowMarker::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ArrowMarker_shaft_diameter(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

class Init_ArrowMarker_pose
{
public:
  Init_ArrowMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArrowMarker_length pose(::foxglove_msgs::msg::ArrowMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ArrowMarker_length(msg_);
  }

private:
  ::foxglove_msgs::msg::ArrowMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ArrowMarker>()
{
  return foxglove_msgs::msg::builder::Init_ArrowMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__BUILDER_HPP_
