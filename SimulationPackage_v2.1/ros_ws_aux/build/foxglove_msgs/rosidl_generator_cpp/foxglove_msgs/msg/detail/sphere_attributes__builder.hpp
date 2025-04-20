// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SphereAttributes.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_ATTRIBUTES__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_ATTRIBUTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/sphere_attributes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SphereAttributes_color
{
public:
  explicit Init_SphereAttributes_color(::foxglove_msgs::msg::SphereAttributes & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SphereAttributes color(::foxglove_msgs::msg::SphereAttributes::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereAttributes msg_;
};

class Init_SphereAttributes_size
{
public:
  explicit Init_SphereAttributes_size(::foxglove_msgs::msg::SphereAttributes & msg)
  : msg_(msg)
  {}
  Init_SphereAttributes_color size(::foxglove_msgs::msg::SphereAttributes::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SphereAttributes_color(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereAttributes msg_;
};

class Init_SphereAttributes_pose
{
public:
  Init_SphereAttributes_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SphereAttributes_size pose(::foxglove_msgs::msg::SphereAttributes::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SphereAttributes_size(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereAttributes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SphereAttributes>()
{
  return foxglove_msgs::msg::builder::Init_SphereAttributes_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_ATTRIBUTES__BUILDER_HPP_
