// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TextPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/text_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TextPrimitive_text
{
public:
  explicit Init_TextPrimitive_text(::foxglove_msgs::msg::TextPrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TextPrimitive text(::foxglove_msgs::msg::TextPrimitive::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

class Init_TextPrimitive_color
{
public:
  explicit Init_TextPrimitive_color(::foxglove_msgs::msg::TextPrimitive & msg)
  : msg_(msg)
  {}
  Init_TextPrimitive_text color(::foxglove_msgs::msg::TextPrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TextPrimitive_text(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

class Init_TextPrimitive_scale_invariant
{
public:
  explicit Init_TextPrimitive_scale_invariant(::foxglove_msgs::msg::TextPrimitive & msg)
  : msg_(msg)
  {}
  Init_TextPrimitive_color scale_invariant(::foxglove_msgs::msg::TextPrimitive::_scale_invariant_type arg)
  {
    msg_.scale_invariant = std::move(arg);
    return Init_TextPrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

class Init_TextPrimitive_font_size
{
public:
  explicit Init_TextPrimitive_font_size(::foxglove_msgs::msg::TextPrimitive & msg)
  : msg_(msg)
  {}
  Init_TextPrimitive_scale_invariant font_size(::foxglove_msgs::msg::TextPrimitive::_font_size_type arg)
  {
    msg_.font_size = std::move(arg);
    return Init_TextPrimitive_scale_invariant(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

class Init_TextPrimitive_billboard
{
public:
  explicit Init_TextPrimitive_billboard(::foxglove_msgs::msg::TextPrimitive & msg)
  : msg_(msg)
  {}
  Init_TextPrimitive_font_size billboard(::foxglove_msgs::msg::TextPrimitive::_billboard_type arg)
  {
    msg_.billboard = std::move(arg);
    return Init_TextPrimitive_font_size(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

class Init_TextPrimitive_pose
{
public:
  Init_TextPrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TextPrimitive_billboard pose(::foxglove_msgs::msg::TextPrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TextPrimitive_billboard(msg_);
  }

private:
  ::foxglove_msgs::msg::TextPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TextPrimitive>()
{
  return foxglove_msgs::msg::builder::Init_TextPrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__BUILDER_HPP_
