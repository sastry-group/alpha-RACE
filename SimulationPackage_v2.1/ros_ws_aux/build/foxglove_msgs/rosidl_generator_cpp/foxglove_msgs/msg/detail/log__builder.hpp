// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_Log_line
{
public:
  explicit Init_Log_line(::foxglove_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::Log line(::foxglove_msgs::msg::Log::_line_type arg)
  {
    msg_.line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

class Init_Log_file
{
public:
  explicit Init_Log_file(::foxglove_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_line file(::foxglove_msgs::msg::Log::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_Log_line(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

class Init_Log_name
{
public:
  explicit Init_Log_name(::foxglove_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_file name(::foxglove_msgs::msg::Log::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Log_file(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

class Init_Log_message
{
public:
  explicit Init_Log_message(::foxglove_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_name message(::foxglove_msgs::msg::Log::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Log_name(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

class Init_Log_level
{
public:
  explicit Init_Log_level(::foxglove_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_message level(::foxglove_msgs::msg::Log::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Log_message(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

class Init_Log_timestamp
{
public:
  Init_Log_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Log_level timestamp(::foxglove_msgs::msg::Log::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Log_level(msg_);
  }

private:
  ::foxglove_msgs::msg::Log msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::Log>()
{
  return foxglove_msgs::msg::builder::Init_Log_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_
