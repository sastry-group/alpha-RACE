// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SphereMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/sphere_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SphereMarker_color
{
public:
  explicit Init_SphereMarker_color(::foxglove_msgs::msg::SphereMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SphereMarker color(::foxglove_msgs::msg::SphereMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereMarker msg_;
};

class Init_SphereMarker_size
{
public:
  explicit Init_SphereMarker_size(::foxglove_msgs::msg::SphereMarker & msg)
  : msg_(msg)
  {}
  Init_SphereMarker_color size(::foxglove_msgs::msg::SphereMarker::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SphereMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereMarker msg_;
};

class Init_SphereMarker_pose
{
public:
  Init_SphereMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SphereMarker_size pose(::foxglove_msgs::msg::SphereMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SphereMarker_size(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SphereMarker>()
{
  return foxglove_msgs::msg::builder::Init_SphereMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_MARKER__BUILDER_HPP_
