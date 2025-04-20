// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CircleAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/circle_annotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CircleAnnotation_outline_color
{
public:
  explicit Init_CircleAnnotation_outline_color(::foxglove_msgs::msg::CircleAnnotation & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CircleAnnotation outline_color(::foxglove_msgs::msg::CircleAnnotation::_outline_color_type arg)
  {
    msg_.outline_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

class Init_CircleAnnotation_fill_color
{
public:
  explicit Init_CircleAnnotation_fill_color(::foxglove_msgs::msg::CircleAnnotation & msg)
  : msg_(msg)
  {}
  Init_CircleAnnotation_outline_color fill_color(::foxglove_msgs::msg::CircleAnnotation::_fill_color_type arg)
  {
    msg_.fill_color = std::move(arg);
    return Init_CircleAnnotation_outline_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

class Init_CircleAnnotation_thickness
{
public:
  explicit Init_CircleAnnotation_thickness(::foxglove_msgs::msg::CircleAnnotation & msg)
  : msg_(msg)
  {}
  Init_CircleAnnotation_fill_color thickness(::foxglove_msgs::msg::CircleAnnotation::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_CircleAnnotation_fill_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

class Init_CircleAnnotation_diameter
{
public:
  explicit Init_CircleAnnotation_diameter(::foxglove_msgs::msg::CircleAnnotation & msg)
  : msg_(msg)
  {}
  Init_CircleAnnotation_thickness diameter(::foxglove_msgs::msg::CircleAnnotation::_diameter_type arg)
  {
    msg_.diameter = std::move(arg);
    return Init_CircleAnnotation_thickness(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

class Init_CircleAnnotation_position
{
public:
  explicit Init_CircleAnnotation_position(::foxglove_msgs::msg::CircleAnnotation & msg)
  : msg_(msg)
  {}
  Init_CircleAnnotation_diameter position(::foxglove_msgs::msg::CircleAnnotation::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CircleAnnotation_diameter(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

class Init_CircleAnnotation_timestamp
{
public:
  Init_CircleAnnotation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CircleAnnotation_position timestamp(::foxglove_msgs::msg::CircleAnnotation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CircleAnnotation_position(msg_);
  }

private:
  ::foxglove_msgs::msg::CircleAnnotation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CircleAnnotation>()
{
  return foxglove_msgs::msg::builder::Init_CircleAnnotation_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__BUILDER_HPP_
