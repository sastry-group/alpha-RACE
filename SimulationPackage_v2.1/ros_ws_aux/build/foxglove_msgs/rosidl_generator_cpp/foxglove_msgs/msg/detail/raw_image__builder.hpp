// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/RawImage.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__RAW_IMAGE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__RAW_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/raw_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_RawImage_data
{
public:
  explicit Init_RawImage_data(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::RawImage data(::foxglove_msgs::msg::RawImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_step
{
public:
  explicit Init_RawImage_step(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  Init_RawImage_data step(::foxglove_msgs::msg::RawImage::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_RawImage_data(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_encoding
{
public:
  explicit Init_RawImage_encoding(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  Init_RawImage_step encoding(::foxglove_msgs::msg::RawImage::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_RawImage_step(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_height
{
public:
  explicit Init_RawImage_height(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  Init_RawImage_encoding height(::foxglove_msgs::msg::RawImage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RawImage_encoding(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_width
{
public:
  explicit Init_RawImage_width(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  Init_RawImage_height width(::foxglove_msgs::msg::RawImage::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RawImage_height(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_frame_id
{
public:
  explicit Init_RawImage_frame_id(::foxglove_msgs::msg::RawImage & msg)
  : msg_(msg)
  {}
  Init_RawImage_width frame_id(::foxglove_msgs::msg::RawImage::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_RawImage_width(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

class Init_RawImage_timestamp
{
public:
  Init_RawImage_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawImage_frame_id timestamp(::foxglove_msgs::msg::RawImage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RawImage_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::RawImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::RawImage>()
{
  return foxglove_msgs::msg::builder::Init_RawImage_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__RAW_IMAGE__BUILDER_HPP_
