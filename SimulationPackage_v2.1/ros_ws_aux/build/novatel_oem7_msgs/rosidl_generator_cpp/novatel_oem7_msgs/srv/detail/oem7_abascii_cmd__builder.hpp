// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:srv/Oem7AbasciiCmd.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/srv/detail/oem7_abascii_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace srv
{

namespace builder
{

class Init_Oem7AbasciiCmd_Request_cmd
{
public:
  Init_Oem7AbasciiCmd_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request cmd(::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>()
{
  return novatel_oem7_msgs::srv::builder::Init_Oem7AbasciiCmd_Request_cmd();
}

}  // namespace novatel_oem7_msgs


namespace novatel_oem7_msgs
{

namespace srv
{

namespace builder
{

class Init_Oem7AbasciiCmd_Response_rsp
{
public:
  Init_Oem7AbasciiCmd_Response_rsp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response rsp(::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response::_rsp_type arg)
  {
    msg_.rsp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>()
{
  return novatel_oem7_msgs::srv::builder::Init_Oem7AbasciiCmd_Response_rsp();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__BUILDER_HPP_
