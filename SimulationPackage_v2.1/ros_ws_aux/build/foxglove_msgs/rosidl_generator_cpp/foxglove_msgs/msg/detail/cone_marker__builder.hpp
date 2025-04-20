// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ConeMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cone_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeMarker_color
{
public:
  explicit Init_ConeMarker_color(::foxglove_msgs::msg::ConeMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ConeMarker color(::foxglove_msgs::msg::ConeMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeMarker msg_;
};

class Init_ConeMarker_top_scale
{
public:
  explicit Init_ConeMarker_top_scale(::foxglove_msgs::msg::ConeMarker & msg)
  : msg_(msg)
  {}
  Init_ConeMarker_color top_scale(::foxglove_msgs::msg::ConeMarker::_top_scale_type arg)
  {
    msg_.top_scale = std::move(arg);
    return Init_ConeMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeMarker msg_;
};

class Init_ConeMarker_bottom_scale
{
public:
  explicit Init_ConeMarker_bottom_scale(::foxglove_msgs::msg::ConeMarker & msg)
  : msg_(msg)
  {}
  Init_ConeMarker_top_scale bottom_scale(::foxglove_msgs::msg::ConeMarker::_bottom_scale_type arg)
  {
    msg_.bottom_scale = std::move(arg);
    return Init_ConeMarker_top_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeMarker msg_;
};

class Init_ConeMarker_size
{
public:
  explicit Init_ConeMarker_size(::foxglove_msgs::msg::ConeMarker & msg)
  : msg_(msg)
  {}
  Init_ConeMarker_bottom_scale size(::foxglove_msgs::msg::ConeMarker::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ConeMarker_bottom_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeMarker msg_;
};

class Init_ConeMarker_pose
{
public:
  Init_ConeMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeMarker_size pose(::foxglove_msgs::msg::ConeMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ConeMarker_size(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ConeMarker>()
{
  return foxglove_msgs::msg::builder::Init_ConeMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__BUILDER_HPP_
