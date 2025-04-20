// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CubeMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CUBE_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CUBE_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cube_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CubeMarker_color
{
public:
  explicit Init_CubeMarker_color(::foxglove_msgs::msg::CubeMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CubeMarker color(::foxglove_msgs::msg::CubeMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeMarker msg_;
};

class Init_CubeMarker_size
{
public:
  explicit Init_CubeMarker_size(::foxglove_msgs::msg::CubeMarker & msg)
  : msg_(msg)
  {}
  Init_CubeMarker_color size(::foxglove_msgs::msg::CubeMarker::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_CubeMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeMarker msg_;
};

class Init_CubeMarker_pose
{
public:
  Init_CubeMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CubeMarker_size pose(::foxglove_msgs::msg::CubeMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CubeMarker_size(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CubeMarker>()
{
  return foxglove_msgs::msg::builder::Init_CubeMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CUBE_MARKER__BUILDER_HPP_
