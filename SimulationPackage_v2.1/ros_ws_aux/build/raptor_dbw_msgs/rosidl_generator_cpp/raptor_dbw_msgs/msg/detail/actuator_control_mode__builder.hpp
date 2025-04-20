// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/ActuatorControlMode.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorControlMode_value
{
public:
  Init_ActuatorControlMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::ActuatorControlMode value(::raptor_dbw_msgs::msg::ActuatorControlMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ActuatorControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::ActuatorControlMode>()
{
  return raptor_dbw_msgs::msg::builder::Init_ActuatorControlMode_value();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__BUILDER_HPP_
