// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PrimitiveDeletion.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/primitive_deletion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PrimitiveDeletion_id
{
public:
  explicit Init_PrimitiveDeletion_id(::foxglove_msgs::msg::PrimitiveDeletion & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PrimitiveDeletion id(::foxglove_msgs::msg::PrimitiveDeletion::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PrimitiveDeletion msg_;
};

class Init_PrimitiveDeletion_type
{
public:
  explicit Init_PrimitiveDeletion_type(::foxglove_msgs::msg::PrimitiveDeletion & msg)
  : msg_(msg)
  {}
  Init_PrimitiveDeletion_id type(::foxglove_msgs::msg::PrimitiveDeletion::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PrimitiveDeletion_id(msg_);
  }

private:
  ::foxglove_msgs::msg::PrimitiveDeletion msg_;
};

class Init_PrimitiveDeletion_timestamp
{
public:
  Init_PrimitiveDeletion_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrimitiveDeletion_type timestamp(::foxglove_msgs::msg::PrimitiveDeletion::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PrimitiveDeletion_type(msg_);
  }

private:
  ::foxglove_msgs::msg::PrimitiveDeletion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PrimitiveDeletion>()
{
  return foxglove_msgs::msg::builder::Init_PrimitiveDeletion_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__BUILDER_HPP_
