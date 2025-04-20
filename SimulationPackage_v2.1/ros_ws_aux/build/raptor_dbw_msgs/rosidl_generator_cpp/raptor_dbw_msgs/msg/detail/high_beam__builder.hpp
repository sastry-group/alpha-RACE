// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/HighBeam.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/high_beam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_HighBeam_status
{
public:
  Init_HighBeam_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::HighBeam status(::raptor_dbw_msgs::msg::HighBeam::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HighBeam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::HighBeam>()
{
  return raptor_dbw_msgs::msg::builder::Init_HighBeam_status();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__BUILDER_HPP_
