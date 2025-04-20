// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_HmiGlobalEnableReport_rolling_counter
{
public:
  explicit Init_HmiGlobalEnableReport_rolling_counter(::raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport rolling_counter(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

class Init_HmiGlobalEnableReport_ecu_build_number
{
public:
  explicit Init_HmiGlobalEnableReport_ecu_build_number(::raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
  : msg_(msg)
  {}
  Init_HmiGlobalEnableReport_rolling_counter ecu_build_number(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_ecu_build_number_type arg)
  {
    msg_.ecu_build_number = std::move(arg);
    return Init_HmiGlobalEnableReport_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

class Init_HmiGlobalEnableReport_checksum
{
public:
  explicit Init_HmiGlobalEnableReport_checksum(::raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
  : msg_(msg)
  {}
  Init_HmiGlobalEnableReport_ecu_build_number checksum(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_checksum_type arg)
  {
    msg_.checksum = std::move(arg);
    return Init_HmiGlobalEnableReport_ecu_build_number(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

class Init_HmiGlobalEnableReport_disable_request
{
public:
  explicit Init_HmiGlobalEnableReport_disable_request(::raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
  : msg_(msg)
  {}
  Init_HmiGlobalEnableReport_checksum disable_request(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_disable_request_type arg)
  {
    msg_.disable_request = std::move(arg);
    return Init_HmiGlobalEnableReport_checksum(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

class Init_HmiGlobalEnableReport_enable_request
{
public:
  explicit Init_HmiGlobalEnableReport_enable_request(::raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
  : msg_(msg)
  {}
  Init_HmiGlobalEnableReport_disable_request enable_request(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_enable_request_type arg)
  {
    msg_.enable_request = std::move(arg);
    return Init_HmiGlobalEnableReport_disable_request(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

class Init_HmiGlobalEnableReport_header
{
public:
  Init_HmiGlobalEnableReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HmiGlobalEnableReport_enable_request header(::raptor_dbw_msgs::msg::HmiGlobalEnableReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HmiGlobalEnableReport_enable_request(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::HmiGlobalEnableReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::HmiGlobalEnableReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_HmiGlobalEnableReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__BUILDER_HPP_
