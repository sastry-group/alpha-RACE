// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/FrameTransform.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/frame_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_FrameTransform_rotation
{
public:
  explicit Init_FrameTransform_rotation(::foxglove_msgs::msg::FrameTransform & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::FrameTransform rotation(::foxglove_msgs::msg::FrameTransform::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransform msg_;
};

class Init_FrameTransform_translation
{
public:
  explicit Init_FrameTransform_translation(::foxglove_msgs::msg::FrameTransform & msg)
  : msg_(msg)
  {}
  Init_FrameTransform_rotation translation(::foxglove_msgs::msg::FrameTransform::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_FrameTransform_rotation(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransform msg_;
};

class Init_FrameTransform_child_frame_id
{
public:
  explicit Init_FrameTransform_child_frame_id(::foxglove_msgs::msg::FrameTransform & msg)
  : msg_(msg)
  {}
  Init_FrameTransform_translation child_frame_id(::foxglove_msgs::msg::FrameTransform::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_FrameTransform_translation(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransform msg_;
};

class Init_FrameTransform_parent_frame_id
{
public:
  explicit Init_FrameTransform_parent_frame_id(::foxglove_msgs::msg::FrameTransform & msg)
  : msg_(msg)
  {}
  Init_FrameTransform_child_frame_id parent_frame_id(::foxglove_msgs::msg::FrameTransform::_parent_frame_id_type arg)
  {
    msg_.parent_frame_id = std::move(arg);
    return Init_FrameTransform_child_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransform msg_;
};

class Init_FrameTransform_timestamp
{
public:
  Init_FrameTransform_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrameTransform_parent_frame_id timestamp(::foxglove_msgs::msg::FrameTransform::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FrameTransform_parent_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::FrameTransform>()
{
  return foxglove_msgs::msg::builder::Init_FrameTransform_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__BUILDER_HPP_
