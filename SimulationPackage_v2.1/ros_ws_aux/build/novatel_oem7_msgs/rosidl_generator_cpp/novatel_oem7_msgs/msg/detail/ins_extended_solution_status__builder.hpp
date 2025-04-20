// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSExtendedSolutionStatus_status
{
public:
  Init_INSExtendedSolutionStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::INSExtendedSolutionStatus status(::novatel_oem7_msgs::msg::INSExtendedSolutionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSExtendedSolutionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSExtendedSolutionStatus>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSExtendedSolutionStatus_status();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_
