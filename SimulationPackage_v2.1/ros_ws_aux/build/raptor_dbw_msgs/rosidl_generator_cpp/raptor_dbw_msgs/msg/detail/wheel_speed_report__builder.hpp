// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/WheelSpeedReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/wheel_speed_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSpeedReport_rear_right
{
public:
  explicit Init_WheelSpeedReport_rear_right(::raptor_dbw_msgs::msg::WheelSpeedReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::WheelSpeedReport rear_right(::raptor_dbw_msgs::msg::WheelSpeedReport::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelSpeedReport msg_;
};

class Init_WheelSpeedReport_rear_left
{
public:
  explicit Init_WheelSpeedReport_rear_left(::raptor_dbw_msgs::msg::WheelSpeedReport & msg)
  : msg_(msg)
  {}
  Init_WheelSpeedReport_rear_right rear_left(::raptor_dbw_msgs::msg::WheelSpeedReport::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_WheelSpeedReport_rear_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelSpeedReport msg_;
};

class Init_WheelSpeedReport_front_right
{
public:
  explicit Init_WheelSpeedReport_front_right(::raptor_dbw_msgs::msg::WheelSpeedReport & msg)
  : msg_(msg)
  {}
  Init_WheelSpeedReport_rear_left front_right(::raptor_dbw_msgs::msg::WheelSpeedReport::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_WheelSpeedReport_rear_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelSpeedReport msg_;
};

class Init_WheelSpeedReport_front_left
{
public:
  explicit Init_WheelSpeedReport_front_left(::raptor_dbw_msgs::msg::WheelSpeedReport & msg)
  : msg_(msg)
  {}
  Init_WheelSpeedReport_front_right front_left(::raptor_dbw_msgs::msg::WheelSpeedReport::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_WheelSpeedReport_front_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelSpeedReport msg_;
};

class Init_WheelSpeedReport_header
{
public:
  Init_WheelSpeedReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeedReport_front_left header(::raptor_dbw_msgs::msg::WheelSpeedReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelSpeedReport_front_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelSpeedReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::WheelSpeedReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_WheelSpeedReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__BUILDER_HPP_
