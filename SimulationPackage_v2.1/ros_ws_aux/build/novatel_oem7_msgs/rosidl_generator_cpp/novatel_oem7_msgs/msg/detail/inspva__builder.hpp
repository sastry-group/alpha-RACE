// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSPVA.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/inspva__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSPVA_status
{
public:
  explicit Init_INSPVA_status(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::INSPVA status(::novatel_oem7_msgs::msg::INSPVA::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_azimuth
{
public:
  explicit Init_INSPVA_azimuth(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_status azimuth(::novatel_oem7_msgs::msg::INSPVA::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_INSPVA_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_pitch
{
public:
  explicit Init_INSPVA_pitch(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_azimuth pitch(::novatel_oem7_msgs::msg::INSPVA::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_INSPVA_azimuth(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_roll
{
public:
  explicit Init_INSPVA_roll(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_pitch roll(::novatel_oem7_msgs::msg::INSPVA::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_INSPVA_pitch(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_up_velocity
{
public:
  explicit Init_INSPVA_up_velocity(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_roll up_velocity(::novatel_oem7_msgs::msg::INSPVA::_up_velocity_type arg)
  {
    msg_.up_velocity = std::move(arg);
    return Init_INSPVA_roll(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_east_velocity
{
public:
  explicit Init_INSPVA_east_velocity(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_up_velocity east_velocity(::novatel_oem7_msgs::msg::INSPVA::_east_velocity_type arg)
  {
    msg_.east_velocity = std::move(arg);
    return Init_INSPVA_up_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_north_velocity
{
public:
  explicit Init_INSPVA_north_velocity(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_east_velocity north_velocity(::novatel_oem7_msgs::msg::INSPVA::_north_velocity_type arg)
  {
    msg_.north_velocity = std::move(arg);
    return Init_INSPVA_east_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_height
{
public:
  explicit Init_INSPVA_height(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_north_velocity height(::novatel_oem7_msgs::msg::INSPVA::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_INSPVA_north_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_longitude
{
public:
  explicit Init_INSPVA_longitude(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_height longitude(::novatel_oem7_msgs::msg::INSPVA::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_INSPVA_height(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_latitude
{
public:
  explicit Init_INSPVA_latitude(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_longitude latitude(::novatel_oem7_msgs::msg::INSPVA::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_INSPVA_longitude(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_nov_header
{
public:
  explicit Init_INSPVA_nov_header(::novatel_oem7_msgs::msg::INSPVA & msg)
  : msg_(msg)
  {}
  Init_INSPVA_latitude nov_header(::novatel_oem7_msgs::msg::INSPVA::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_INSPVA_latitude(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

class Init_INSPVA_header
{
public:
  Init_INSPVA_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSPVA_nov_header header(::novatel_oem7_msgs::msg::INSPVA::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSPVA_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSPVA>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSPVA_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__BUILDER_HPP_
