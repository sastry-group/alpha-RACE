// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/insstdev__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSSTDEV_reserved3
{
public:
  explicit Init_INSSTDEV_reserved3(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::INSSTDEV reserved3(::novatel_oem7_msgs::msg::INSSTDEV::_reserved3_type arg)
  {
    msg_.reserved3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_reserved2
{
public:
  explicit Init_INSSTDEV_reserved2(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_reserved3 reserved2(::novatel_oem7_msgs::msg::INSSTDEV::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return Init_INSSTDEV_reserved3(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_reserved1
{
public:
  explicit Init_INSSTDEV_reserved1(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_reserved2 reserved1(::novatel_oem7_msgs::msg::INSSTDEV::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_INSSTDEV_reserved2(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_time_since_last_update
{
public:
  explicit Init_INSSTDEV_time_since_last_update(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_reserved1 time_since_last_update(::novatel_oem7_msgs::msg::INSSTDEV::_time_since_last_update_type arg)
  {
    msg_.time_since_last_update = std::move(arg);
    return Init_INSSTDEV_reserved1(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_ext_sol_status
{
public:
  explicit Init_INSSTDEV_ext_sol_status(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_time_since_last_update ext_sol_status(::novatel_oem7_msgs::msg::INSSTDEV::_ext_sol_status_type arg)
  {
    msg_.ext_sol_status = std::move(arg);
    return Init_INSSTDEV_time_since_last_update(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_azimuth_stdev
{
public:
  explicit Init_INSSTDEV_azimuth_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_ext_sol_status azimuth_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_azimuth_stdev_type arg)
  {
    msg_.azimuth_stdev = std::move(arg);
    return Init_INSSTDEV_ext_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_pitch_stdev
{
public:
  explicit Init_INSSTDEV_pitch_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_azimuth_stdev pitch_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_pitch_stdev_type arg)
  {
    msg_.pitch_stdev = std::move(arg);
    return Init_INSSTDEV_azimuth_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_roll_stdev
{
public:
  explicit Init_INSSTDEV_roll_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_pitch_stdev roll_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_roll_stdev_type arg)
  {
    msg_.roll_stdev = std::move(arg);
    return Init_INSSTDEV_pitch_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_up_velocity_stdev
{
public:
  explicit Init_INSSTDEV_up_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_roll_stdev up_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_up_velocity_stdev_type arg)
  {
    msg_.up_velocity_stdev = std::move(arg);
    return Init_INSSTDEV_roll_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_east_velocity_stdev
{
public:
  explicit Init_INSSTDEV_east_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_up_velocity_stdev east_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_east_velocity_stdev_type arg)
  {
    msg_.east_velocity_stdev = std::move(arg);
    return Init_INSSTDEV_up_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_north_velocity_stdev
{
public:
  explicit Init_INSSTDEV_north_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_east_velocity_stdev north_velocity_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_north_velocity_stdev_type arg)
  {
    msg_.north_velocity_stdev = std::move(arg);
    return Init_INSSTDEV_east_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_height_stdev
{
public:
  explicit Init_INSSTDEV_height_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_north_velocity_stdev height_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_height_stdev_type arg)
  {
    msg_.height_stdev = std::move(arg);
    return Init_INSSTDEV_north_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_longitude_stdev
{
public:
  explicit Init_INSSTDEV_longitude_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_height_stdev longitude_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_longitude_stdev_type arg)
  {
    msg_.longitude_stdev = std::move(arg);
    return Init_INSSTDEV_height_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_latitude_stdev
{
public:
  explicit Init_INSSTDEV_latitude_stdev(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_longitude_stdev latitude_stdev(::novatel_oem7_msgs::msg::INSSTDEV::_latitude_stdev_type arg)
  {
    msg_.latitude_stdev = std::move(arg);
    return Init_INSSTDEV_longitude_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_nov_header
{
public:
  explicit Init_INSSTDEV_nov_header(::novatel_oem7_msgs::msg::INSSTDEV & msg)
  : msg_(msg)
  {}
  Init_INSSTDEV_latitude_stdev nov_header(::novatel_oem7_msgs::msg::INSSTDEV::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_INSSTDEV_latitude_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

class Init_INSSTDEV_header
{
public:
  Init_INSSTDEV_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSSTDEV_nov_header header(::novatel_oem7_msgs::msg::INSSTDEV::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSSTDEV_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSSTDEV msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSSTDEV>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSSTDEV_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__BUILDER_HPP_
