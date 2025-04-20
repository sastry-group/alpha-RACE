// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/BestExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_BestExtendedSolutionStatus_status
{
public:
  Init_BestExtendedSolutionStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::BestExtendedSolutionStatus status(::novatel_oem7_msgs::msg::BestExtendedSolutionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BestExtendedSolutionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::BestExtendedSolutionStatus>()
{
  return novatel_oem7_msgs::msg::builder::Init_BestExtendedSolutionStatus_status();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__BUILDER_HPP_
