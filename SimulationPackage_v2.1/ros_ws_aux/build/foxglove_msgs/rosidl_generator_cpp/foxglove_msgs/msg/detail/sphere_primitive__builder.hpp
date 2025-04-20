// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SpherePrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/sphere_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SpherePrimitive_color
{
public:
  explicit Init_SpherePrimitive_color(::foxglove_msgs::msg::SpherePrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SpherePrimitive color(::foxglove_msgs::msg::SpherePrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SpherePrimitive msg_;
};

class Init_SpherePrimitive_size
{
public:
  explicit Init_SpherePrimitive_size(::foxglove_msgs::msg::SpherePrimitive & msg)
  : msg_(msg)
  {}
  Init_SpherePrimitive_color size(::foxglove_msgs::msg::SpherePrimitive::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SpherePrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::SpherePrimitive msg_;
};

class Init_SpherePrimitive_pose
{
public:
  Init_SpherePrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpherePrimitive_size pose(::foxglove_msgs::msg::SpherePrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SpherePrimitive_size(msg_);
  }

private:
  ::foxglove_msgs::msg::SpherePrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SpherePrimitive>()
{
  return foxglove_msgs::msg::builder::Init_SpherePrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_PRIMITIVE__BUILDER_HPP_
