// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/MarkerDeletion.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MARKER_DELETION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MARKER_DELETION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/marker_deletion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkerDeletion_id
{
public:
  explicit Init_MarkerDeletion_id(::foxglove_msgs::msg::MarkerDeletion & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::MarkerDeletion id(::foxglove_msgs::msg::MarkerDeletion::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::MarkerDeletion msg_;
};

class Init_MarkerDeletion_type
{
public:
  explicit Init_MarkerDeletion_type(::foxglove_msgs::msg::MarkerDeletion & msg)
  : msg_(msg)
  {}
  Init_MarkerDeletion_id type(::foxglove_msgs::msg::MarkerDeletion::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MarkerDeletion_id(msg_);
  }

private:
  ::foxglove_msgs::msg::MarkerDeletion msg_;
};

class Init_MarkerDeletion_timestamp
{
public:
  Init_MarkerDeletion_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkerDeletion_type timestamp(::foxglove_msgs::msg::MarkerDeletion::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MarkerDeletion_type(msg_);
  }

private:
  ::foxglove_msgs::msg::MarkerDeletion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::MarkerDeletion>()
{
  return foxglove_msgs::msg::builder::Init_MarkerDeletion_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MARKER_DELETION__BUILDER_HPP_
