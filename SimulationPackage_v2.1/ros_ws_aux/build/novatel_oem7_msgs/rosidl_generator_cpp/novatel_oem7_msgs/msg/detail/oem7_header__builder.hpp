// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_Oem7Header_idle_time
{
public:
  explicit Init_Oem7Header_idle_time(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::Oem7Header idle_time(::novatel_oem7_msgs::msg::Oem7Header::_idle_time_type arg)
  {
    msg_.idle_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_gps_week_milliseconds
{
public:
  explicit Init_Oem7Header_gps_week_milliseconds(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_idle_time gps_week_milliseconds(::novatel_oem7_msgs::msg::Oem7Header::_gps_week_milliseconds_type arg)
  {
    msg_.gps_week_milliseconds = std::move(arg);
    return Init_Oem7Header_idle_time(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_gps_week_number
{
public:
  explicit Init_Oem7Header_gps_week_number(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_gps_week_milliseconds gps_week_number(::novatel_oem7_msgs::msg::Oem7Header::_gps_week_number_type arg)
  {
    msg_.gps_week_number = std::move(arg);
    return Init_Oem7Header_gps_week_milliseconds(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_time_status
{
public:
  explicit Init_Oem7Header_time_status(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_gps_week_number time_status(::novatel_oem7_msgs::msg::Oem7Header::_time_status_type arg)
  {
    msg_.time_status = std::move(arg);
    return Init_Oem7Header_gps_week_number(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_sequence_number
{
public:
  explicit Init_Oem7Header_sequence_number(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_time_status sequence_number(::novatel_oem7_msgs::msg::Oem7Header::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return Init_Oem7Header_time_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_message_type
{
public:
  explicit Init_Oem7Header_message_type(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_sequence_number message_type(::novatel_oem7_msgs::msg::Oem7Header::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_Oem7Header_sequence_number(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_message_id
{
public:
  explicit Init_Oem7Header_message_id(::novatel_oem7_msgs::msg::Oem7Header & msg)
  : msg_(msg)
  {}
  Init_Oem7Header_message_type message_id(::novatel_oem7_msgs::msg::Oem7Header::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Oem7Header_message_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

class Init_Oem7Header_message_name
{
public:
  Init_Oem7Header_message_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Oem7Header_message_id message_name(::novatel_oem7_msgs::msg::Oem7Header::_message_name_type arg)
  {
    msg_.message_name = std::move(arg);
    return Init_Oem7Header_message_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::Oem7Header>()
{
  return novatel_oem7_msgs::msg::builder::Init_Oem7Header_message_name();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__BUILDER_HPP_
