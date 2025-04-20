// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/rotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_Rotation_rotation_source
{
public:
  explicit Init_Rotation_rotation_source(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::Rotation rotation_source(::novatel_oem7_msgs::msg::Rotation::_rotation_source_type arg)
  {
    msg_.rotation_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_z_rotation_stdev
{
public:
  explicit Init_Rotation_z_rotation_stdev(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_rotation_source z_rotation_stdev(::novatel_oem7_msgs::msg::Rotation::_z_rotation_stdev_type arg)
  {
    msg_.z_rotation_stdev = std::move(arg);
    return Init_Rotation_rotation_source(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_y_rotation_stdev
{
public:
  explicit Init_Rotation_y_rotation_stdev(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_z_rotation_stdev y_rotation_stdev(::novatel_oem7_msgs::msg::Rotation::_y_rotation_stdev_type arg)
  {
    msg_.y_rotation_stdev = std::move(arg);
    return Init_Rotation_z_rotation_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_x_rotation_stdev
{
public:
  explicit Init_Rotation_x_rotation_stdev(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_y_rotation_stdev x_rotation_stdev(::novatel_oem7_msgs::msg::Rotation::_x_rotation_stdev_type arg)
  {
    msg_.x_rotation_stdev = std::move(arg);
    return Init_Rotation_y_rotation_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_z_rotation
{
public:
  explicit Init_Rotation_z_rotation(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_x_rotation_stdev z_rotation(::novatel_oem7_msgs::msg::Rotation::_z_rotation_type arg)
  {
    msg_.z_rotation = std::move(arg);
    return Init_Rotation_x_rotation_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_y_rotation
{
public:
  explicit Init_Rotation_y_rotation(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_z_rotation y_rotation(::novatel_oem7_msgs::msg::Rotation::_y_rotation_type arg)
  {
    msg_.y_rotation = std::move(arg);
    return Init_Rotation_z_rotation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_x_rotation
{
public:
  explicit Init_Rotation_x_rotation(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_y_rotation x_rotation(::novatel_oem7_msgs::msg::Rotation::_x_rotation_type arg)
  {
    msg_.x_rotation = std::move(arg);
    return Init_Rotation_y_rotation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_frame
{
public:
  explicit Init_Rotation_frame(::novatel_oem7_msgs::msg::Rotation & msg)
  : msg_(msg)
  {}
  Init_Rotation_x_rotation frame(::novatel_oem7_msgs::msg::Rotation::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Rotation_x_rotation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

class Init_Rotation_rotation
{
public:
  Init_Rotation_rotation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rotation_frame rotation(::novatel_oem7_msgs::msg::Rotation::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_Rotation_frame(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Rotation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::Rotation>()
{
  return novatel_oem7_msgs::msg::builder::Init_Rotation_rotation();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__BUILDER_HPP_
