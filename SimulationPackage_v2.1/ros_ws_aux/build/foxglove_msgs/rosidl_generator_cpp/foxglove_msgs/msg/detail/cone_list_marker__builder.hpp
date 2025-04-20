// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ConeListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/cone_list_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeListMarker_attributes
{
public:
  explicit Init_ConeListMarker_attributes(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ConeListMarker attributes(::foxglove_msgs::msg::ConeListMarker::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_metadata
{
public:
  explicit Init_ConeListMarker_metadata(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  Init_ConeListMarker_attributes metadata(::foxglove_msgs::msg::ConeListMarker::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_ConeListMarker_attributes(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_frame_locked
{
public:
  explicit Init_ConeListMarker_frame_locked(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  Init_ConeListMarker_metadata frame_locked(::foxglove_msgs::msg::ConeListMarker::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_ConeListMarker_metadata(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_lifetime
{
public:
  explicit Init_ConeListMarker_lifetime(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  Init_ConeListMarker_frame_locked lifetime(::foxglove_msgs::msg::ConeListMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_ConeListMarker_frame_locked(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_id
{
public:
  explicit Init_ConeListMarker_id(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  Init_ConeListMarker_lifetime id(::foxglove_msgs::msg::ConeListMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ConeListMarker_lifetime(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_frame_id
{
public:
  explicit Init_ConeListMarker_frame_id(::foxglove_msgs::msg::ConeListMarker & msg)
  : msg_(msg)
  {}
  Init_ConeListMarker_id frame_id(::foxglove_msgs::msg::ConeListMarker::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ConeListMarker_id(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

class Init_ConeListMarker_timestamp
{
public:
  Init_ConeListMarker_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeListMarker_frame_id timestamp(::foxglove_msgs::msg::ConeListMarker::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ConeListMarker_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::ConeListMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ConeListMarker>()
{
  return foxglove_msgs::msg::builder::Init_ConeListMarker_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__BUILDER_HPP_
