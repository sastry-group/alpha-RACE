// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/translation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_Translation_translation_source
{
public:
  explicit Init_Translation_translation_source(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::Translation translation_source(::novatel_oem7_msgs::msg::Translation::_translation_source_type arg)
  {
    msg_.translation_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_z_uncertainty
{
public:
  explicit Init_Translation_z_uncertainty(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_translation_source z_uncertainty(::novatel_oem7_msgs::msg::Translation::_z_uncertainty_type arg)
  {
    msg_.z_uncertainty = std::move(arg);
    return Init_Translation_translation_source(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_y_uncertainty
{
public:
  explicit Init_Translation_y_uncertainty(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_z_uncertainty y_uncertainty(::novatel_oem7_msgs::msg::Translation::_y_uncertainty_type arg)
  {
    msg_.y_uncertainty = std::move(arg);
    return Init_Translation_z_uncertainty(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_x_uncertainty
{
public:
  explicit Init_Translation_x_uncertainty(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_y_uncertainty x_uncertainty(::novatel_oem7_msgs::msg::Translation::_x_uncertainty_type arg)
  {
    msg_.x_uncertainty = std::move(arg);
    return Init_Translation_y_uncertainty(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_z_offset
{
public:
  explicit Init_Translation_z_offset(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_x_uncertainty z_offset(::novatel_oem7_msgs::msg::Translation::_z_offset_type arg)
  {
    msg_.z_offset = std::move(arg);
    return Init_Translation_x_uncertainty(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_y_offset
{
public:
  explicit Init_Translation_y_offset(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_z_offset y_offset(::novatel_oem7_msgs::msg::Translation::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return Init_Translation_z_offset(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_x_offset
{
public:
  explicit Init_Translation_x_offset(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_y_offset x_offset(::novatel_oem7_msgs::msg::Translation::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_Translation_y_offset(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_frame
{
public:
  explicit Init_Translation_frame(::novatel_oem7_msgs::msg::Translation & msg)
  : msg_(msg)
  {}
  Init_Translation_x_offset frame(::novatel_oem7_msgs::msg::Translation::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Translation_x_offset(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

class Init_Translation_translation
{
public:
  Init_Translation_translation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Translation_frame translation(::novatel_oem7_msgs::msg::Translation::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_Translation_frame(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Translation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::Translation>()
{
  return novatel_oem7_msgs::msg::builder::Init_Translation_translation();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__BUILDER_HPP_
