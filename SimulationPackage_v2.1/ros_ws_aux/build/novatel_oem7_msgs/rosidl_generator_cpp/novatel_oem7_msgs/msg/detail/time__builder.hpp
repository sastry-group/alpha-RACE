// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/TIME.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_TIME_utc_status
{
public:
  explicit Init_TIME_utc_status(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::TIME utc_status(::novatel_oem7_msgs::msg::TIME::_utc_status_type arg)
  {
    msg_.utc_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_msec
{
public:
  explicit Init_TIME_utc_msec(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_status utc_msec(::novatel_oem7_msgs::msg::TIME::_utc_msec_type arg)
  {
    msg_.utc_msec = std::move(arg);
    return Init_TIME_utc_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_min
{
public:
  explicit Init_TIME_utc_min(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_msec utc_min(::novatel_oem7_msgs::msg::TIME::_utc_min_type arg)
  {
    msg_.utc_min = std::move(arg);
    return Init_TIME_utc_msec(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_hour
{
public:
  explicit Init_TIME_utc_hour(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_min utc_hour(::novatel_oem7_msgs::msg::TIME::_utc_hour_type arg)
  {
    msg_.utc_hour = std::move(arg);
    return Init_TIME_utc_min(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_day
{
public:
  explicit Init_TIME_utc_day(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_hour utc_day(::novatel_oem7_msgs::msg::TIME::_utc_day_type arg)
  {
    msg_.utc_day = std::move(arg);
    return Init_TIME_utc_hour(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_month
{
public:
  explicit Init_TIME_utc_month(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_day utc_month(::novatel_oem7_msgs::msg::TIME::_utc_month_type arg)
  {
    msg_.utc_month = std::move(arg);
    return Init_TIME_utc_day(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_year
{
public:
  explicit Init_TIME_utc_year(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_month utc_year(::novatel_oem7_msgs::msg::TIME::_utc_year_type arg)
  {
    msg_.utc_year = std::move(arg);
    return Init_TIME_utc_month(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_utc_offset
{
public:
  explicit Init_TIME_utc_offset(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_year utc_offset(::novatel_oem7_msgs::msg::TIME::_utc_offset_type arg)
  {
    msg_.utc_offset = std::move(arg);
    return Init_TIME_utc_year(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_offset_std
{
public:
  explicit Init_TIME_offset_std(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_utc_offset offset_std(::novatel_oem7_msgs::msg::TIME::_offset_std_type arg)
  {
    msg_.offset_std = std::move(arg);
    return Init_TIME_utc_offset(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_offset
{
public:
  explicit Init_TIME_offset(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_offset_std offset(::novatel_oem7_msgs::msg::TIME::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_TIME_offset_std(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_clock_status
{
public:
  explicit Init_TIME_clock_status(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_offset clock_status(::novatel_oem7_msgs::msg::TIME::_clock_status_type arg)
  {
    msg_.clock_status = std::move(arg);
    return Init_TIME_offset(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_nov_header
{
public:
  explicit Init_TIME_nov_header(::novatel_oem7_msgs::msg::TIME & msg)
  : msg_(msg)
  {}
  Init_TIME_clock_status nov_header(::novatel_oem7_msgs::msg::TIME::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_TIME_clock_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

class Init_TIME_header
{
public:
  Init_TIME_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TIME_nov_header header(::novatel_oem7_msgs::msg::TIME::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TIME_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TIME msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::TIME>()
{
  return novatel_oem7_msgs::msg::builder::Init_TIME_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
