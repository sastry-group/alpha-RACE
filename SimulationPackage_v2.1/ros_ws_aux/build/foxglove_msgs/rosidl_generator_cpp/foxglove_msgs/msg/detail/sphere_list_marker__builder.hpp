// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SphereListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_LIST_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_LIST_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/sphere_list_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SphereListMarker_attributes
{
public:
  explicit Init_SphereListMarker_attributes(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SphereListMarker attributes(::foxglove_msgs::msg::SphereListMarker::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_metadata
{
public:
  explicit Init_SphereListMarker_metadata(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  Init_SphereListMarker_attributes metadata(::foxglove_msgs::msg::SphereListMarker::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_SphereListMarker_attributes(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_frame_locked
{
public:
  explicit Init_SphereListMarker_frame_locked(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  Init_SphereListMarker_metadata frame_locked(::foxglove_msgs::msg::SphereListMarker::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_SphereListMarker_metadata(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_lifetime
{
public:
  explicit Init_SphereListMarker_lifetime(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  Init_SphereListMarker_frame_locked lifetime(::foxglove_msgs::msg::SphereListMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_SphereListMarker_frame_locked(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_id
{
public:
  explicit Init_SphereListMarker_id(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  Init_SphereListMarker_lifetime id(::foxglove_msgs::msg::SphereListMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SphereListMarker_lifetime(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_frame_id
{
public:
  explicit Init_SphereListMarker_frame_id(::foxglove_msgs::msg::SphereListMarker & msg)
  : msg_(msg)
  {}
  Init_SphereListMarker_id frame_id(::foxglove_msgs::msg::SphereListMarker::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_SphereListMarker_id(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

class Init_SphereListMarker_timestamp
{
public:
  Init_SphereListMarker_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SphereListMarker_frame_id timestamp(::foxglove_msgs::msg::SphereListMarker::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SphereListMarker_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::SphereListMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SphereListMarker>()
{
  return foxglove_msgs::msg::builder::Init_SphereListMarker_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SPHERE_LIST_MARKER__BUILDER_HPP_
