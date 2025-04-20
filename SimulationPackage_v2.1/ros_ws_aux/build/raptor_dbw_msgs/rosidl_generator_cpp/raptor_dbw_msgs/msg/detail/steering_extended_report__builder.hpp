// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringExtendedReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/steering_extended_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringExtendedReport_steering_motor_ang_3
{
public:
  explicit Init_SteeringExtendedReport_steering_motor_ang_3(::raptor_dbw_msgs::msg::SteeringExtendedReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::SteeringExtendedReport steering_motor_ang_3(::raptor_dbw_msgs::msg::SteeringExtendedReport::_steering_motor_ang_3_type arg)
  {
    msg_.steering_motor_ang_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringExtendedReport msg_;
};

class Init_SteeringExtendedReport_steering_motor_ang_2
{
public:
  explicit Init_SteeringExtendedReport_steering_motor_ang_2(::raptor_dbw_msgs::msg::SteeringExtendedReport & msg)
  : msg_(msg)
  {}
  Init_SteeringExtendedReport_steering_motor_ang_3 steering_motor_ang_2(::raptor_dbw_msgs::msg::SteeringExtendedReport::_steering_motor_ang_2_type arg)
  {
    msg_.steering_motor_ang_2 = std::move(arg);
    return Init_SteeringExtendedReport_steering_motor_ang_3(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringExtendedReport msg_;
};

class Init_SteeringExtendedReport_steering_motor_ang_1
{
public:
  explicit Init_SteeringExtendedReport_steering_motor_ang_1(::raptor_dbw_msgs::msg::SteeringExtendedReport & msg)
  : msg_(msg)
  {}
  Init_SteeringExtendedReport_steering_motor_ang_2 steering_motor_ang_1(::raptor_dbw_msgs::msg::SteeringExtendedReport::_steering_motor_ang_1_type arg)
  {
    msg_.steering_motor_ang_1 = std::move(arg);
    return Init_SteeringExtendedReport_steering_motor_ang_2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringExtendedReport msg_;
};

class Init_SteeringExtendedReport_header
{
public:
  Init_SteeringExtendedReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringExtendedReport_steering_motor_ang_1 header(::raptor_dbw_msgs::msg::SteeringExtendedReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringExtendedReport_steering_motor_ang_1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SteeringExtendedReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::SteeringExtendedReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_SteeringExtendedReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__BUILDER_HPP_
