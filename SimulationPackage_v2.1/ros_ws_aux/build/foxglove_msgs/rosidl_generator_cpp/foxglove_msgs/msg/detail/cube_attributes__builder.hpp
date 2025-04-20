// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CubeAttributes.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CUBE_ATTRIBUTES__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CUBE_ATTRIBUTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cube_attributes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CubeAttributes_color
{
public:
  explicit Init_CubeAttributes_color(::foxglove_msgs::msg::CubeAttributes & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CubeAttributes color(::foxglove_msgs::msg::CubeAttributes::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeAttributes msg_;
};

class Init_CubeAttributes_size
{
public:
  explicit Init_CubeAttributes_size(::foxglove_msgs::msg::CubeAttributes & msg)
  : msg_(msg)
  {}
  Init_CubeAttributes_color size(::foxglove_msgs::msg::CubeAttributes::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_CubeAttributes_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeAttributes msg_;
};

class Init_CubeAttributes_pose
{
public:
  Init_CubeAttributes_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CubeAttributes_size pose(::foxglove_msgs::msg::CubeAttributes::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CubeAttributes_size(msg_);
  }

private:
  ::foxglove_msgs::msg::CubeAttributes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CubeAttributes>()
{
  return foxglove_msgs::msg::builder::Init_CubeAttributes_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CUBE_ATTRIBUTES__BUILDER_HPP_
