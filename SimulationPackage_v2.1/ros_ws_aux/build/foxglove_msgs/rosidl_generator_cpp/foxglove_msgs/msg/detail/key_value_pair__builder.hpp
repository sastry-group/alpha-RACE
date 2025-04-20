// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/KeyValuePair.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/key_value_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValuePair_value
{
public:
  explicit Init_KeyValuePair_value(::foxglove_msgs::msg::KeyValuePair & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::KeyValuePair value(::foxglove_msgs::msg::KeyValuePair::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::KeyValuePair msg_;
};

class Init_KeyValuePair_key
{
public:
  Init_KeyValuePair_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValuePair_value key(::foxglove_msgs::msg::KeyValuePair::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValuePair_value(msg_);
  }

private:
  ::foxglove_msgs::msg::KeyValuePair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::KeyValuePair>()
{
  return foxglove_msgs::msg::builder::Init_KeyValuePair_key();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__BUILDER_HPP_
