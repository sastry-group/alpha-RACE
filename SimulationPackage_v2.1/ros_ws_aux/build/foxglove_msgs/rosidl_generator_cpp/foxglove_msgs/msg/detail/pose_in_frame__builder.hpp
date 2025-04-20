// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PoseInFrame.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/pose_in_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseInFrame_pose
{
public:
  explicit Init_PoseInFrame_pose(::foxglove_msgs::msg::PoseInFrame & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PoseInFrame pose(::foxglove_msgs::msg::PoseInFrame::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PoseInFrame msg_;
};

class Init_PoseInFrame_frame_id
{
public:
  explicit Init_PoseInFrame_frame_id(::foxglove_msgs::msg::PoseInFrame & msg)
  : msg_(msg)
  {}
  Init_PoseInFrame_pose frame_id(::foxglove_msgs::msg::PoseInFrame::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_PoseInFrame_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::PoseInFrame msg_;
};

class Init_PoseInFrame_timestamp
{
public:
  Init_PoseInFrame_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseInFrame_frame_id timestamp(::foxglove_msgs::msg::PoseInFrame::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PoseInFrame_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::PoseInFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PoseInFrame>()
{
  return foxglove_msgs::msg::builder::Init_PoseInFrame_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__BUILDER_HPP_
