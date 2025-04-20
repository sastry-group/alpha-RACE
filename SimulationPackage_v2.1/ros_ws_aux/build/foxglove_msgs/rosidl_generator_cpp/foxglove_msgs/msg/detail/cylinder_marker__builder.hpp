// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CylinderMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cylinder_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CylinderMarker_color
{
public:
  explicit Init_CylinderMarker_color(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CylinderMarker color(::foxglove_msgs::msg::CylinderMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_height
{
public:
  explicit Init_CylinderMarker_height(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_color height(::foxglove_msgs::msg::CylinderMarker::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CylinderMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_top_radius
{
public:
  explicit Init_CylinderMarker_top_radius(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_height top_radius(::foxglove_msgs::msg::CylinderMarker::_top_radius_type arg)
  {
    msg_.top_radius = std::move(arg);
    return Init_CylinderMarker_height(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_bottom_radius
{
public:
  explicit Init_CylinderMarker_bottom_radius(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_top_radius bottom_radius(::foxglove_msgs::msg::CylinderMarker::_bottom_radius_type arg)
  {
    msg_.bottom_radius = std::move(arg);
    return Init_CylinderMarker_top_radius(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_pose
{
public:
  explicit Init_CylinderMarker_pose(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_bottom_radius pose(::foxglove_msgs::msg::CylinderMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CylinderMarker_bottom_radius(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_metadata
{
public:
  explicit Init_CylinderMarker_metadata(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_pose metadata(::foxglove_msgs::msg::CylinderMarker::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_CylinderMarker_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_frame_locked
{
public:
  explicit Init_CylinderMarker_frame_locked(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_metadata frame_locked(::foxglove_msgs::msg::CylinderMarker::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_CylinderMarker_metadata(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_lifetime
{
public:
  explicit Init_CylinderMarker_lifetime(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_frame_locked lifetime(::foxglove_msgs::msg::CylinderMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_CylinderMarker_frame_locked(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_id
{
public:
  explicit Init_CylinderMarker_id(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_lifetime id(::foxglove_msgs::msg::CylinderMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CylinderMarker_lifetime(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_frame_id
{
public:
  explicit Init_CylinderMarker_frame_id(::foxglove_msgs::msg::CylinderMarker & msg)
  : msg_(msg)
  {}
  Init_CylinderMarker_id frame_id(::foxglove_msgs::msg::CylinderMarker::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CylinderMarker_id(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

class Init_CylinderMarker_timestamp
{
public:
  Init_CylinderMarker_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CylinderMarker_frame_id timestamp(::foxglove_msgs::msg::CylinderMarker::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CylinderMarker_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::CylinderMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CylinderMarker>()
{
  return foxglove_msgs::msg::builder::Init_CylinderMarker_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__BUILDER_HPP_
