// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/compressed_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CompressedImage_format
{
public:
  explicit Init_CompressedImage_format(::foxglove_msgs::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CompressedImage format(::foxglove_msgs::msg::CompressedImage::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedImage msg_;
};

class Init_CompressedImage_data
{
public:
  explicit Init_CompressedImage_data(::foxglove_msgs::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_format data(::foxglove_msgs::msg::CompressedImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CompressedImage_format(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedImage msg_;
};

class Init_CompressedImage_frame_id
{
public:
  explicit Init_CompressedImage_frame_id(::foxglove_msgs::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_data frame_id(::foxglove_msgs::msg::CompressedImage::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CompressedImage_data(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedImage msg_;
};

class Init_CompressedImage_timestamp
{
public:
  Init_CompressedImage_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedImage_frame_id timestamp(::foxglove_msgs::msg::CompressedImage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CompressedImage_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::CompressedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CompressedImage>()
{
  return foxglove_msgs::msg::builder::Init_CompressedImage_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
