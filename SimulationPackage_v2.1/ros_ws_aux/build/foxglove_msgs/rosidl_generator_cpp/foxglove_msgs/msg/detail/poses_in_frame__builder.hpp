// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PosesInFrame.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POSES_IN_FRAME__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POSES_IN_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/poses_in_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PosesInFrame_poses
{
public:
  explicit Init_PosesInFrame_poses(::foxglove_msgs::msg::PosesInFrame & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PosesInFrame poses(::foxglove_msgs::msg::PosesInFrame::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PosesInFrame msg_;
};

class Init_PosesInFrame_frame_id
{
public:
  explicit Init_PosesInFrame_frame_id(::foxglove_msgs::msg::PosesInFrame & msg)
  : msg_(msg)
  {}
  Init_PosesInFrame_poses frame_id(::foxglove_msgs::msg::PosesInFrame::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_PosesInFrame_poses(msg_);
  }

private:
  ::foxglove_msgs::msg::PosesInFrame msg_;
};

class Init_PosesInFrame_timestamp
{
public:
  Init_PosesInFrame_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosesInFrame_frame_id timestamp(::foxglove_msgs::msg::PosesInFrame::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PosesInFrame_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::PosesInFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PosesInFrame>()
{
  return foxglove_msgs::msg::builder::Init_PosesInFrame_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POSES_IN_FRAME__BUILDER_HPP_
