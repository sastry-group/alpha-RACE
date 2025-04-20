// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ImageMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/image_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageMarkerArray_markers
{
public:
  Init_ImageMarkerArray_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::foxglove_msgs::msg::ImageMarkerArray markers(::foxglove_msgs::msg::ImageMarkerArray::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ImageMarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ImageMarkerArray>()
{
  return foxglove_msgs::msg::builder::Init_ImageMarkerArray_markers();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__BUILDER_HPP_
