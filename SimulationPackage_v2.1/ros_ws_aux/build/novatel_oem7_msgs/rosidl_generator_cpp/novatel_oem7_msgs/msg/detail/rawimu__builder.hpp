// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/RAWIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/rawimu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_RAWIMU_angular_velocity
{
public:
  explicit Init_RAWIMU_angular_velocity(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::RAWIMU angular_velocity(::novatel_oem7_msgs::msg::RAWIMU::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_linear_acceleration
{
public:
  explicit Init_RAWIMU_linear_acceleration(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  Init_RAWIMU_angular_velocity linear_acceleration(::novatel_oem7_msgs::msg::RAWIMU::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_RAWIMU_angular_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_status
{
public:
  explicit Init_RAWIMU_status(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  Init_RAWIMU_linear_acceleration status(::novatel_oem7_msgs::msg::RAWIMU::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RAWIMU_linear_acceleration(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_gnss_seconds
{
public:
  explicit Init_RAWIMU_gnss_seconds(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  Init_RAWIMU_status gnss_seconds(::novatel_oem7_msgs::msg::RAWIMU::_gnss_seconds_type arg)
  {
    msg_.gnss_seconds = std::move(arg);
    return Init_RAWIMU_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_gnss_week
{
public:
  explicit Init_RAWIMU_gnss_week(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  Init_RAWIMU_gnss_seconds gnss_week(::novatel_oem7_msgs::msg::RAWIMU::_gnss_week_type arg)
  {
    msg_.gnss_week = std::move(arg);
    return Init_RAWIMU_gnss_seconds(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_nov_header
{
public:
  explicit Init_RAWIMU_nov_header(::novatel_oem7_msgs::msg::RAWIMU & msg)
  : msg_(msg)
  {}
  Init_RAWIMU_gnss_week nov_header(::novatel_oem7_msgs::msg::RAWIMU::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_RAWIMU_gnss_week(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

class Init_RAWIMU_header
{
public:
  Init_RAWIMU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RAWIMU_nov_header header(::novatel_oem7_msgs::msg::RAWIMU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RAWIMU_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RAWIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::RAWIMU>()
{
  return novatel_oem7_msgs::msg::builder::Init_RAWIMU_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__BUILDER_HPP_
