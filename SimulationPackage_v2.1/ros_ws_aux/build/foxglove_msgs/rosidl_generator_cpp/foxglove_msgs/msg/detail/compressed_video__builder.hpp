// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CompressedVideo.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_VIDEO__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_VIDEO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/compressed_video__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CompressedVideo_format
{
public:
  explicit Init_CompressedVideo_format(::foxglove_msgs::msg::CompressedVideo & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CompressedVideo format(::foxglove_msgs::msg::CompressedVideo::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedVideo msg_;
};

class Init_CompressedVideo_data
{
public:
  explicit Init_CompressedVideo_data(::foxglove_msgs::msg::CompressedVideo & msg)
  : msg_(msg)
  {}
  Init_CompressedVideo_format data(::foxglove_msgs::msg::CompressedVideo::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CompressedVideo_format(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedVideo msg_;
};

class Init_CompressedVideo_frame_id
{
public:
  explicit Init_CompressedVideo_frame_id(::foxglove_msgs::msg::CompressedVideo & msg)
  : msg_(msg)
  {}
  Init_CompressedVideo_data frame_id(::foxglove_msgs::msg::CompressedVideo::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CompressedVideo_data(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedVideo msg_;
};

class Init_CompressedVideo_timestamp
{
public:
  Init_CompressedVideo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedVideo_frame_id timestamp(::foxglove_msgs::msg::CompressedVideo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CompressedVideo_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedVideo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CompressedVideo>()
{
  return foxglove_msgs::msg::builder::Init_CompressedVideo_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_VIDEO__BUILDER_HPP_
