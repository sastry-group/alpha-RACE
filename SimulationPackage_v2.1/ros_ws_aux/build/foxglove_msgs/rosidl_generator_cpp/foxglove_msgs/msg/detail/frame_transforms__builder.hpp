// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/FrameTransforms.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/frame_transforms__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_FrameTransforms_transforms
{
public:
  Init_FrameTransforms_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::foxglove_msgs::msg::FrameTransforms transforms(::foxglove_msgs::msg::FrameTransforms::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransforms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::FrameTransforms>()
{
  return foxglove_msgs::msg::builder::Init_FrameTransforms_transforms();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__BUILDER_HPP_
