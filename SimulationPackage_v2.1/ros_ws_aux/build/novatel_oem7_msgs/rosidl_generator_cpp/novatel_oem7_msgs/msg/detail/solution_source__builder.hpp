// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/SolutionSource.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/solution_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_SolutionSource_source
{
public:
  Init_SolutionSource_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::SolutionSource source(::novatel_oem7_msgs::msg::SolutionSource::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::SolutionSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::SolutionSource>()
{
  return novatel_oem7_msgs::msg::builder::Init_SolutionSource_source();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__BUILDER_HPP_
