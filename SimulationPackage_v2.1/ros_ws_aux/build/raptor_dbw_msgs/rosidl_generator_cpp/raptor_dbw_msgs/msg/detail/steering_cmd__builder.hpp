// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/steering_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringCmd_control_type
{
public:
  explicit Init_SteeringCmd_control_type(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::SteeringCmd control_type(::raptor_dbw_msgs::msg::SteeringCmd::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_vehicle_curvature_cmd
{
public:
  explicit Init_SteeringCmd_vehicle_curvature_cmd(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_control_type vehicle_curvature_cmd(::raptor_dbw_msgs::msg::SteeringCmd::_vehicle_curvature_cmd_type arg)
  {
    msg_.vehicle_curvature_cmd = std::move(arg);
    return Init_SteeringCmd_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_torque_cmd
{
public:
  explicit Init_SteeringCmd_torque_cmd(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_vehicle_curvature_cmd torque_cmd(::raptor_dbw_msgs::msg::SteeringCmd::_torque_cmd_type arg)
  {
    msg_.torque_cmd = std::move(arg);
    return Init_SteeringCmd_vehicle_curvature_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_rolling_counter
{
public:
  explicit Init_SteeringCmd_rolling_counter(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_torque_cmd rolling_counter(::raptor_dbw_msgs::msg::SteeringCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_SteeringCmd_torque_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_ignore
{
public:
  explicit Init_SteeringCmd_ignore(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_rolling_counter ignore(::raptor_dbw_msgs::msg::SteeringCmd::_ignore_type arg)
  {
    msg_.ignore = std::move(arg);
    return Init_SteeringCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_enable
{
public:
  explicit Init_SteeringCmd_enable(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_ignore enable(::raptor_dbw_msgs::msg::SteeringCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_SteeringCmd_ignore(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_angle_velocity
{
public:
  explicit Init_SteeringCmd_angle_velocity(::raptor_dbw_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_enable angle_velocity(::raptor_dbw_msgs::msg::SteeringCmd::_angle_velocity_type arg)
  {
    msg_.angle_velocity = std::move(arg);
    return Init_SteeringCmd_enable(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_angle_cmd
{
public:
  Init_SteeringCmd_angle_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringCmd_angle_velocity angle_cmd(::raptor_dbw_msgs::msg::SteeringCmd::_angle_cmd_type arg)
  {
    msg_.angle_cmd = std::move(arg);
    return Init_SteeringCmd_angle_velocity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::SteeringCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_SteeringCmd_angle_cmd();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
