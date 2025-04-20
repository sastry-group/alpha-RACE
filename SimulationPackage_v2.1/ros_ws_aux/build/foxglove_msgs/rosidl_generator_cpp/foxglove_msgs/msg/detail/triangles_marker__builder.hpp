// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/TrianglesMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLES_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLES_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/triangles_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_TrianglesMarker_indices
{
public:
  explicit Init_TrianglesMarker_indices(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::TrianglesMarker indices(::foxglove_msgs::msg::TrianglesMarker::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_colors
{
public:
  explicit Init_TrianglesMarker_colors(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_indices colors(::foxglove_msgs::msg::TrianglesMarker::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_TrianglesMarker_indices(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_color
{
public:
  explicit Init_TrianglesMarker_color(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_colors color(::foxglove_msgs::msg::TrianglesMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrianglesMarker_colors(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_points
{
public:
  explicit Init_TrianglesMarker_points(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_color points(::foxglove_msgs::msg::TrianglesMarker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_TrianglesMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_pose
{
public:
  explicit Init_TrianglesMarker_pose(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_points pose(::foxglove_msgs::msg::TrianglesMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrianglesMarker_points(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_metadata
{
public:
  explicit Init_TrianglesMarker_metadata(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_pose metadata(::foxglove_msgs::msg::TrianglesMarker::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_TrianglesMarker_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_frame_locked
{
public:
  explicit Init_TrianglesMarker_frame_locked(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_metadata frame_locked(::foxglove_msgs::msg::TrianglesMarker::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_TrianglesMarker_metadata(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_lifetime
{
public:
  explicit Init_TrianglesMarker_lifetime(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_frame_locked lifetime(::foxglove_msgs::msg::TrianglesMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_TrianglesMarker_frame_locked(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_id
{
public:
  explicit Init_TrianglesMarker_id(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_lifetime id(::foxglove_msgs::msg::TrianglesMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrianglesMarker_lifetime(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_frame_id
{
public:
  explicit Init_TrianglesMarker_frame_id(::foxglove_msgs::msg::TrianglesMarker & msg)
  : msg_(msg)
  {}
  Init_TrianglesMarker_id frame_id(::foxglove_msgs::msg::TrianglesMarker::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_TrianglesMarker_id(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

class Init_TrianglesMarker_timestamp
{
public:
  Init_TrianglesMarker_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrianglesMarker_frame_id timestamp(::foxglove_msgs::msg::TrianglesMarker::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrianglesMarker_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::TrianglesMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::TrianglesMarker>()
{
  return foxglove_msgs::msg::builder::Init_TrianglesMarker_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLES_MARKER__BUILDER_HPP_
