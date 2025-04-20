// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/WatchdogStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/watchdog_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_WatchdogStatus_source
{
public:
  explicit Init_WatchdogStatus_source(::raptor_dbw_msgs::msg::WatchdogStatus & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::WatchdogStatus source(::raptor_dbw_msgs::msg::WatchdogStatus::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WatchdogStatus msg_;
};

class Init_WatchdogStatus_header
{
public:
  Init_WatchdogStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WatchdogStatus_source header(::raptor_dbw_msgs::msg::WatchdogStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WatchdogStatus_source(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WatchdogStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::WatchdogStatus>()
{
  return raptor_dbw_msgs::msg::builder::Init_WatchdogStatus_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__BUILDER_HPP_
