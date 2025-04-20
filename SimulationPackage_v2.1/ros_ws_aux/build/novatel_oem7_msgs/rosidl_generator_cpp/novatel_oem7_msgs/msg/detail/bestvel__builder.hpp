// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/bestvel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_BESTVEL_reserved
{
public:
  explicit Init_BESTVEL_reserved(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::BESTVEL reserved(::novatel_oem7_msgs::msg::BESTVEL::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_ver_speed
{
public:
  explicit Init_BESTVEL_ver_speed(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_reserved ver_speed(::novatel_oem7_msgs::msg::BESTVEL::_ver_speed_type arg)
  {
    msg_.ver_speed = std::move(arg);
    return Init_BESTVEL_reserved(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_trk_gnd
{
public:
  explicit Init_BESTVEL_trk_gnd(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_ver_speed trk_gnd(::novatel_oem7_msgs::msg::BESTVEL::_trk_gnd_type arg)
  {
    msg_.trk_gnd = std::move(arg);
    return Init_BESTVEL_ver_speed(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_hor_speed
{
public:
  explicit Init_BESTVEL_hor_speed(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_trk_gnd hor_speed(::novatel_oem7_msgs::msg::BESTVEL::_hor_speed_type arg)
  {
    msg_.hor_speed = std::move(arg);
    return Init_BESTVEL_trk_gnd(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_diff_age
{
public:
  explicit Init_BESTVEL_diff_age(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_hor_speed diff_age(::novatel_oem7_msgs::msg::BESTVEL::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_BESTVEL_hor_speed(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_latency
{
public:
  explicit Init_BESTVEL_latency(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_diff_age latency(::novatel_oem7_msgs::msg::BESTVEL::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_BESTVEL_diff_age(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_vel_type
{
public:
  explicit Init_BESTVEL_vel_type(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_latency vel_type(::novatel_oem7_msgs::msg::BESTVEL::_vel_type_type arg)
  {
    msg_.vel_type = std::move(arg);
    return Init_BESTVEL_latency(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_sol_status
{
public:
  explicit Init_BESTVEL_sol_status(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_vel_type sol_status(::novatel_oem7_msgs::msg::BESTVEL::_sol_status_type arg)
  {
    msg_.sol_status = std::move(arg);
    return Init_BESTVEL_vel_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_nov_header
{
public:
  explicit Init_BESTVEL_nov_header(::novatel_oem7_msgs::msg::BESTVEL & msg)
  : msg_(msg)
  {}
  Init_BESTVEL_sol_status nov_header(::novatel_oem7_msgs::msg::BESTVEL::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_BESTVEL_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

class Init_BESTVEL_header
{
public:
  Init_BESTVEL_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BESTVEL_nov_header header(::novatel_oem7_msgs::msg::BESTVEL::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BESTVEL_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTVEL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::BESTVEL>()
{
  return novatel_oem7_msgs::msg::builder::Init_BESTVEL_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_
