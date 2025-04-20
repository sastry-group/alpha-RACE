// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PointsAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/points_annotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PointsAnnotation_thickness
{
public:
  explicit Init_PointsAnnotation_thickness(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PointsAnnotation thickness(::foxglove_msgs::msg::PointsAnnotation::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_fill_color
{
public:
  explicit Init_PointsAnnotation_fill_color(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  Init_PointsAnnotation_thickness fill_color(::foxglove_msgs::msg::PointsAnnotation::_fill_color_type arg)
  {
    msg_.fill_color = std::move(arg);
    return Init_PointsAnnotation_thickness(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_outline_colors
{
public:
  explicit Init_PointsAnnotation_outline_colors(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  Init_PointsAnnotation_fill_color outline_colors(::foxglove_msgs::msg::PointsAnnotation::_outline_colors_type arg)
  {
    msg_.outline_colors = std::move(arg);
    return Init_PointsAnnotation_fill_color(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_outline_color
{
public:
  explicit Init_PointsAnnotation_outline_color(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  Init_PointsAnnotation_outline_colors outline_color(::foxglove_msgs::msg::PointsAnnotation::_outline_color_type arg)
  {
    msg_.outline_color = std::move(arg);
    return Init_PointsAnnotation_outline_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_points
{
public:
  explicit Init_PointsAnnotation_points(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  Init_PointsAnnotation_outline_color points(::foxglove_msgs::msg::PointsAnnotation::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_PointsAnnotation_outline_color(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_type
{
public:
  explicit Init_PointsAnnotation_type(::foxglove_msgs::msg::PointsAnnotation & msg)
  : msg_(msg)
  {}
  Init_PointsAnnotation_points type(::foxglove_msgs::msg::PointsAnnotation::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PointsAnnotation_points(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

class Init_PointsAnnotation_timestamp
{
public:
  Init_PointsAnnotation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointsAnnotation_type timestamp(::foxglove_msgs::msg::PointsAnnotation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PointsAnnotation_type(msg_);
  }

private:
  ::foxglove_msgs::msg::PointsAnnotation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PointsAnnotation>()
{
  return foxglove_msgs::msg::builder::Init_PointsAnnotation_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__BUILDER_HPP_
