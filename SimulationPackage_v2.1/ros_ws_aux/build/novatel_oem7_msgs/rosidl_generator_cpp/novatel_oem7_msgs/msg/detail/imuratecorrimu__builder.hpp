// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/IMURATECORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/imuratecorrimu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_IMURATECORRIMU_vertical_acc
{
public:
  explicit Init_IMURATECORRIMU_vertical_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::IMURATECORRIMU vertical_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU::_vertical_acc_type arg)
  {
    msg_.vertical_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_longitudinal_acc
{
public:
  explicit Init_IMURATECORRIMU_longitudinal_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_vertical_acc longitudinal_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU::_longitudinal_acc_type arg)
  {
    msg_.longitudinal_acc = std::move(arg);
    return Init_IMURATECORRIMU_vertical_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_lateral_acc
{
public:
  explicit Init_IMURATECORRIMU_lateral_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_longitudinal_acc lateral_acc(::novatel_oem7_msgs::msg::IMURATECORRIMU::_lateral_acc_type arg)
  {
    msg_.lateral_acc = std::move(arg);
    return Init_IMURATECORRIMU_longitudinal_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_yaw_rate
{
public:
  explicit Init_IMURATECORRIMU_yaw_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_lateral_acc yaw_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_IMURATECORRIMU_lateral_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_roll_rate
{
public:
  explicit Init_IMURATECORRIMU_roll_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_yaw_rate roll_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_IMURATECORRIMU_yaw_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_pitch_rate
{
public:
  explicit Init_IMURATECORRIMU_pitch_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_roll_rate pitch_rate(::novatel_oem7_msgs::msg::IMURATECORRIMU::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_IMURATECORRIMU_roll_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_seconds
{
public:
  explicit Init_IMURATECORRIMU_seconds(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_pitch_rate seconds(::novatel_oem7_msgs::msg::IMURATECORRIMU::_seconds_type arg)
  {
    msg_.seconds = std::move(arg);
    return Init_IMURATECORRIMU_pitch_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_week
{
public:
  explicit Init_IMURATECORRIMU_week(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_seconds week(::novatel_oem7_msgs::msg::IMURATECORRIMU::_week_type arg)
  {
    msg_.week = std::move(arg);
    return Init_IMURATECORRIMU_seconds(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_nov_header
{
public:
  explicit Init_IMURATECORRIMU_nov_header(::novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
  : msg_(msg)
  {}
  Init_IMURATECORRIMU_week nov_header(::novatel_oem7_msgs::msg::IMURATECORRIMU::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_IMURATECORRIMU_week(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

class Init_IMURATECORRIMU_header
{
public:
  Init_IMURATECORRIMU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMURATECORRIMU_nov_header header(::novatel_oem7_msgs::msg::IMURATECORRIMU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMURATECORRIMU_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::IMURATECORRIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::IMURATECORRIMU>()
{
  return novatel_oem7_msgs::msg::builder::Init_IMURATECORRIMU_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__BUILDER_HPP_
