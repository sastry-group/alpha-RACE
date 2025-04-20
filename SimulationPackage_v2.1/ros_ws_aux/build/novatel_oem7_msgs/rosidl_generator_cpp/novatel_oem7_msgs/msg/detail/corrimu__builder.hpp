// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/CORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/corrimu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_CORRIMU_reserved2
{
public:
  explicit Init_CORRIMU_reserved2(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::CORRIMU reserved2(::novatel_oem7_msgs::msg::CORRIMU::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_reserved1
{
public:
  explicit Init_CORRIMU_reserved1(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_reserved2 reserved1(::novatel_oem7_msgs::msg::CORRIMU::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_CORRIMU_reserved2(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_vertical_acc
{
public:
  explicit Init_CORRIMU_vertical_acc(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_reserved1 vertical_acc(::novatel_oem7_msgs::msg::CORRIMU::_vertical_acc_type arg)
  {
    msg_.vertical_acc = std::move(arg);
    return Init_CORRIMU_reserved1(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_longitudinal_acc
{
public:
  explicit Init_CORRIMU_longitudinal_acc(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_vertical_acc longitudinal_acc(::novatel_oem7_msgs::msg::CORRIMU::_longitudinal_acc_type arg)
  {
    msg_.longitudinal_acc = std::move(arg);
    return Init_CORRIMU_vertical_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_lateral_acc
{
public:
  explicit Init_CORRIMU_lateral_acc(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_longitudinal_acc lateral_acc(::novatel_oem7_msgs::msg::CORRIMU::_lateral_acc_type arg)
  {
    msg_.lateral_acc = std::move(arg);
    return Init_CORRIMU_longitudinal_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_yaw_rate
{
public:
  explicit Init_CORRIMU_yaw_rate(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_lateral_acc yaw_rate(::novatel_oem7_msgs::msg::CORRIMU::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_CORRIMU_lateral_acc(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_roll_rate
{
public:
  explicit Init_CORRIMU_roll_rate(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_yaw_rate roll_rate(::novatel_oem7_msgs::msg::CORRIMU::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_CORRIMU_yaw_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_pitch_rate
{
public:
  explicit Init_CORRIMU_pitch_rate(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_roll_rate pitch_rate(::novatel_oem7_msgs::msg::CORRIMU::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_CORRIMU_roll_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_imu_data_count
{
public:
  explicit Init_CORRIMU_imu_data_count(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_pitch_rate imu_data_count(::novatel_oem7_msgs::msg::CORRIMU::_imu_data_count_type arg)
  {
    msg_.imu_data_count = std::move(arg);
    return Init_CORRIMU_pitch_rate(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_nov_header
{
public:
  explicit Init_CORRIMU_nov_header(::novatel_oem7_msgs::msg::CORRIMU & msg)
  : msg_(msg)
  {}
  Init_CORRIMU_imu_data_count nov_header(::novatel_oem7_msgs::msg::CORRIMU::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_CORRIMU_imu_data_count(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

class Init_CORRIMU_header
{
public:
  Init_CORRIMU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CORRIMU_nov_header header(::novatel_oem7_msgs::msg::CORRIMU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CORRIMU_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::CORRIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::CORRIMU>()
{
  return novatel_oem7_msgs::msg::builder::Init_CORRIMU_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__BUILDER_HPP_
