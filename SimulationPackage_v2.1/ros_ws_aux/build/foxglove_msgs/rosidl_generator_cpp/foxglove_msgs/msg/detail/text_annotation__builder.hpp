// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TextAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/text_annotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TextAnnotation_background_color
{
public:
  explicit Init_TextAnnotation_background_color(::foxglove_msgs::msg::TextAnnotation & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TextAnnotation background_color(::foxglove_msgs::msg::TextAnnotation::_background_color_type arg)
  {
    msg_.background_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

class Init_TextAnnotation_text_color
{
public:
  explicit Init_TextAnnotation_text_color(::foxglove_msgs::msg::TextAnnotation & msg)
  : msg_(msg)
  {}
  Init_TextAnnotation_background_color text_color(::foxglove_msgs::msg::TextAnnotation::_text_color_type arg)
  {
    msg_.text_color = std::move(arg);
    return Init_TextAnnotation_background_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

class Init_TextAnnotation_font_size
{
public:
  explicit Init_TextAnnotation_font_size(::foxglove_msgs::msg::TextAnnotation & msg)
  : msg_(msg)
  {}
  Init_TextAnnotation_text_color font_size(::foxglove_msgs::msg::TextAnnotation::_font_size_type arg)
  {
    msg_.font_size = std::move(arg);
    return Init_TextAnnotation_text_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

class Init_TextAnnotation_text
{
public:
  explicit Init_TextAnnotation_text(::foxglove_msgs::msg::TextAnnotation & msg)
  : msg_(msg)
  {}
  Init_TextAnnotation_font_size text(::foxglove_msgs::msg::TextAnnotation::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_TextAnnotation_font_size(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

class Init_TextAnnotation_position
{
public:
  explicit Init_TextAnnotation_position(::foxglove_msgs::msg::TextAnnotation & msg)
  : msg_(msg)
  {}
  Init_TextAnnotation_text position(::foxglove_msgs::msg::TextAnnotation::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TextAnnotation_text(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

class Init_TextAnnotation_timestamp
{
public:
  Init_TextAnnotation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TextAnnotation_position timestamp(::foxglove_msgs::msg::TextAnnotation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TextAnnotation_position(msg_);
  }

private:
  ::foxglove_msgs::msg::TextAnnotation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TextAnnotation>()
{
  return foxglove_msgs::msg::builder::Init_TextAnnotation_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__BUILDER_HPP_
