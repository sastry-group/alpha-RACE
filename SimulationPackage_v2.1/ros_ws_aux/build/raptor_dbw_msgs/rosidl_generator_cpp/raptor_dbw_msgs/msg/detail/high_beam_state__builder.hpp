// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/HighBeamState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/high_beam_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_HighBeamState_value
{
public:
  Init_HighBeamState_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::HighBeamState value(::raptor_dbw_msgs::msg::HighBeamState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HighBeamState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::HighBeamState>()
{
  return raptor_dbw_msgs::msg::builder::Init_HighBeamState_value();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__BUILDER_HPP_
