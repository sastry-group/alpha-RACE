// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/WheelPositionReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/wheel_position_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelPositionReport_wheel_pulses_per_rev
{
public:
  explicit Init_WheelPositionReport_wheel_pulses_per_rev(::raptor_dbw_msgs::msg::WheelPositionReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::WheelPositionReport wheel_pulses_per_rev(::raptor_dbw_msgs::msg::WheelPositionReport::_wheel_pulses_per_rev_type arg)
  {
    msg_.wheel_pulses_per_rev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

class Init_WheelPositionReport_rear_right
{
public:
  explicit Init_WheelPositionReport_rear_right(::raptor_dbw_msgs::msg::WheelPositionReport & msg)
  : msg_(msg)
  {}
  Init_WheelPositionReport_wheel_pulses_per_rev rear_right(::raptor_dbw_msgs::msg::WheelPositionReport::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return Init_WheelPositionReport_wheel_pulses_per_rev(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

class Init_WheelPositionReport_rear_left
{
public:
  explicit Init_WheelPositionReport_rear_left(::raptor_dbw_msgs::msg::WheelPositionReport & msg)
  : msg_(msg)
  {}
  Init_WheelPositionReport_rear_right rear_left(::raptor_dbw_msgs::msg::WheelPositionReport::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_WheelPositionReport_rear_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

class Init_WheelPositionReport_front_right
{
public:
  explicit Init_WheelPositionReport_front_right(::raptor_dbw_msgs::msg::WheelPositionReport & msg)
  : msg_(msg)
  {}
  Init_WheelPositionReport_rear_left front_right(::raptor_dbw_msgs::msg::WheelPositionReport::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_WheelPositionReport_rear_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

class Init_WheelPositionReport_front_left
{
public:
  explicit Init_WheelPositionReport_front_left(::raptor_dbw_msgs::msg::WheelPositionReport & msg)
  : msg_(msg)
  {}
  Init_WheelPositionReport_front_right front_left(::raptor_dbw_msgs::msg::WheelPositionReport::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_WheelPositionReport_front_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

class Init_WheelPositionReport_header
{
public:
  Init_WheelPositionReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelPositionReport_front_left header(::raptor_dbw_msgs::msg::WheelPositionReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelPositionReport_front_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::WheelPositionReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::WheelPositionReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_WheelPositionReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__BUILDER_HPP_
