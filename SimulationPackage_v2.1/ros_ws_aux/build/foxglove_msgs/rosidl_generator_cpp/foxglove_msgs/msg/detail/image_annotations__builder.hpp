// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/image_annotations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageAnnotations_texts
{
public:
  explicit Init_ImageAnnotations_texts(::foxglove_msgs::msg::ImageAnnotations & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ImageAnnotations texts(::foxglove_msgs::msg::ImageAnnotations::_texts_type arg)
  {
    msg_.texts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ImageAnnotations msg_;
};

class Init_ImageAnnotations_points
{
public:
  explicit Init_ImageAnnotations_points(::foxglove_msgs::msg::ImageAnnotations & msg)
  : msg_(msg)
  {}
  Init_ImageAnnotations_texts points(::foxglove_msgs::msg::ImageAnnotations::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_ImageAnnotations_texts(msg_);
  }

private:
  ::foxglove_msgs::msg::ImageAnnotations msg_;
};

class Init_ImageAnnotations_circles
{
public:
  Init_ImageAnnotations_circles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageAnnotations_points circles(::foxglove_msgs::msg::ImageAnnotations::_circles_type arg)
  {
    msg_.circles = std::move(arg);
    return Init_ImageAnnotations_points(msg_);
  }

private:
  ::foxglove_msgs::msg::ImageAnnotations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ImageAnnotations>()
{
  return foxglove_msgs::msg::builder::Init_ImageAnnotations_circles();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__BUILDER_HPP_
