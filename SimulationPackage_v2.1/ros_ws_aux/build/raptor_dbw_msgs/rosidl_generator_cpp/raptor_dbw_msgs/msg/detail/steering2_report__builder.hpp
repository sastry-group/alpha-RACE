// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/steering2_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_Steering2Report_max_torque_motor
{
public:
  explicit Init_Steering2Report_max_torque_motor(::raptor_dbw_msgs::msg::Steering2Report & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::Steering2Report max_torque_motor(::raptor_dbw_msgs::msg::Steering2Report::_max_torque_motor_type arg)
  {
    msg_.max_torque_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Steering2Report msg_;
};

class Init_Steering2Report_max_torque_driver
{
public:
  explicit Init_Steering2Report_max_torque_driver(::raptor_dbw_msgs::msg::Steering2Report & msg)
  : msg_(msg)
  {}
  Init_Steering2Report_max_torque_motor max_torque_driver(::raptor_dbw_msgs::msg::Steering2Report::_max_torque_driver_type arg)
  {
    msg_.max_torque_driver = std::move(arg);
    return Init_Steering2Report_max_torque_motor(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Steering2Report msg_;
};

class Init_Steering2Report_vehicle_curvature_actual
{
public:
  explicit Init_Steering2Report_vehicle_curvature_actual(::raptor_dbw_msgs::msg::Steering2Report & msg)
  : msg_(msg)
  {}
  Init_Steering2Report_max_torque_driver vehicle_curvature_actual(::raptor_dbw_msgs::msg::Steering2Report::_vehicle_curvature_actual_type arg)
  {
    msg_.vehicle_curvature_actual = std::move(arg);
    return Init_Steering2Report_max_torque_driver(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Steering2Report msg_;
};

class Init_Steering2Report_header
{
public:
  Init_Steering2Report_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Steering2Report_vehicle_curvature_actual header(::raptor_dbw_msgs::msg::Steering2Report::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Steering2Report_vehicle_curvature_actual(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Steering2Report msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::Steering2Report>()
{
  return raptor_dbw_msgs::msg::builder::Init_Steering2Report_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__BUILDER_HPP_
