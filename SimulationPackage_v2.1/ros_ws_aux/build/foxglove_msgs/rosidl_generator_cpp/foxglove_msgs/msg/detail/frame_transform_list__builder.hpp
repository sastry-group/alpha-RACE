// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/FrameTransformList.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/frame_transform_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_FrameTransformList_transforms
{
public:
  Init_FrameTransformList_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::foxglove_msgs::msg::FrameTransformList transforms(::foxglove_msgs::msg::FrameTransformList::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::FrameTransformList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::FrameTransformList>()
{
  return foxglove_msgs::msg::builder::Init_FrameTransformList_transforms();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__BUILDER_HPP_
