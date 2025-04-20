// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_Oem7RawMsg_message_data
{
public:
  explicit Init_Oem7RawMsg_message_data(::novatel_oem7_msgs::msg::Oem7RawMsg & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::Oem7RawMsg message_data(::novatel_oem7_msgs::msg::Oem7RawMsg::_message_data_type arg)
  {
    msg_.message_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7RawMsg msg_;
};

class Init_Oem7RawMsg_header
{
public:
  Init_Oem7RawMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Oem7RawMsg_message_data header(::novatel_oem7_msgs::msg::Oem7RawMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Oem7RawMsg_message_data(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::Oem7RawMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::Oem7RawMsg>()
{
  return novatel_oem7_msgs::msg::builder::Init_Oem7RawMsg_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__BUILDER_HPP_
