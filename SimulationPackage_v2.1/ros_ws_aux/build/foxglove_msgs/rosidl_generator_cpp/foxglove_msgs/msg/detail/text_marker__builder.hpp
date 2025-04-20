// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TextMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/text_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TextMarker_text
{
public:
  explicit Init_TextMarker_text(::foxglove_msgs::msg::TextMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TextMarker text(::foxglove_msgs::msg::TextMarker::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

class Init_TextMarker_color
{
public:
  explicit Init_TextMarker_color(::foxglove_msgs::msg::TextMarker & msg)
  : msg_(msg)
  {}
  Init_TextMarker_text color(::foxglove_msgs::msg::TextMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TextMarker_text(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

class Init_TextMarker_scale_invariant
{
public:
  explicit Init_TextMarker_scale_invariant(::foxglove_msgs::msg::TextMarker & msg)
  : msg_(msg)
  {}
  Init_TextMarker_color scale_invariant(::foxglove_msgs::msg::TextMarker::_scale_invariant_type arg)
  {
    msg_.scale_invariant = std::move(arg);
    return Init_TextMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

class Init_TextMarker_font_size
{
public:
  explicit Init_TextMarker_font_size(::foxglove_msgs::msg::TextMarker & msg)
  : msg_(msg)
  {}
  Init_TextMarker_scale_invariant font_size(::foxglove_msgs::msg::TextMarker::_font_size_type arg)
  {
    msg_.font_size = std::move(arg);
    return Init_TextMarker_scale_invariant(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

class Init_TextMarker_billboard
{
public:
  explicit Init_TextMarker_billboard(::foxglove_msgs::msg::TextMarker & msg)
  : msg_(msg)
  {}
  Init_TextMarker_font_size billboard(::foxglove_msgs::msg::TextMarker::_billboard_type arg)
  {
    msg_.billboard = std::move(arg);
    return Init_TextMarker_font_size(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

class Init_TextMarker_pose
{
public:
  Init_TextMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TextMarker_billboard pose(::foxglove_msgs::msg::TextMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TextMarker_billboard(msg_);
  }

private:
  ::foxglove_msgs::msg::TextMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TextMarker>()
{
  return foxglove_msgs::msg::builder::Init_TextMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__BUILDER_HPP_
