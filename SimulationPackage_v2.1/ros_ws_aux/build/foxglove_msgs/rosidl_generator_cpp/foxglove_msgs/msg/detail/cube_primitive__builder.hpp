// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CubePrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CUBE_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CUBE_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cube_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CubePrimitive_color
{
public:
  explicit Init_CubePrimitive_color(::foxglove_msgs::msg::CubePrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CubePrimitive color(::foxglove_msgs::msg::CubePrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CubePrimitive msg_;
};

class Init_CubePrimitive_size
{
public:
  explicit Init_CubePrimitive_size(::foxglove_msgs::msg::CubePrimitive & msg)
  : msg_(msg)
  {}
  Init_CubePrimitive_color size(::foxglove_msgs::msg::CubePrimitive::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_CubePrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CubePrimitive msg_;
};

class Init_CubePrimitive_pose
{
public:
  Init_CubePrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CubePrimitive_size pose(::foxglove_msgs::msg::CubePrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CubePrimitive_size(msg_);
  }

private:
  ::foxglove_msgs::msg::CubePrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CubePrimitive>()
{
  return foxglove_msgs::msg::builder::Init_CubePrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CUBE_PRIMITIVE__BUILDER_HPP_
