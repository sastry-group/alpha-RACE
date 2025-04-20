// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/diagnostic_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticReport_rc_lost
{
public:
  explicit Init_DiagnosticReport_rc_lost(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::DiagnosticReport rc_lost(::raptor_dbw_msgs::msg::DiagnosticReport::_rc_lost_type arg)
  {
    msg_.rc_lost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_adlink_hb_lost
{
public:
  explicit Init_DiagnosticReport_adlink_hb_lost(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_rc_lost adlink_hb_lost(::raptor_dbw_msgs::msg::DiagnosticReport::_adlink_hb_lost_type arg)
  {
    msg_.adlink_hb_lost = std::move(arg);
    return Init_DiagnosticReport_rc_lost(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_ebrake
{
public:
  explicit Init_DiagnosticReport_sd_ebrake(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_adlink_hb_lost sd_ebrake(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_ebrake_type arg)
  {
    msg_.sd_ebrake = std::move(arg);
    return Init_DiagnosticReport_adlink_hb_lost(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_motec_comms_loss
{
public:
  explicit Init_DiagnosticReport_motec_comms_loss(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_ebrake motec_comms_loss(::raptor_dbw_msgs::msg::DiagnosticReport::_motec_comms_loss_type arg)
  {
    msg_.motec_comms_loss = std::move(arg);
    return Init_DiagnosticReport_sd_ebrake(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_comms_loss
{
public:
  explicit Init_DiagnosticReport_sd_comms_loss(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_motec_comms_loss sd_comms_loss(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_comms_loss_type arg)
  {
    msg_.sd_comms_loss = std::move(arg);
    return Init_DiagnosticReport_motec_comms_loss(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_low_eng_speed
{
public:
  explicit Init_DiagnosticReport_low_eng_speed(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_comms_loss low_eng_speed(::raptor_dbw_msgs::msg::DiagnosticReport::_low_eng_speed_type arg)
  {
    msg_.low_eng_speed = std::move(arg);
    return Init_DiagnosticReport_sd_comms_loss(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_rear_brk_failure
{
public:
  explicit Init_DiagnosticReport_rear_brk_failure(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_low_eng_speed rear_brk_failure(::raptor_dbw_msgs::msg::DiagnosticReport::_rear_brk_failure_type arg)
  {
    msg_.rear_brk_failure = std::move(arg);
    return Init_DiagnosticReport_low_eng_speed(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_front_brk_failure
{
public:
  explicit Init_DiagnosticReport_front_brk_failure(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_rear_brk_failure front_brk_failure(::raptor_dbw_msgs::msg::DiagnosticReport::_front_brk_failure_type arg)
  {
    msg_.front_brk_failure = std::move(arg);
    return Init_DiagnosticReport_rear_brk_failure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_motec_warning
{
public:
  explicit Init_DiagnosticReport_motec_warning(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_front_brk_failure motec_warning(::raptor_dbw_msgs::msg::DiagnosticReport::_motec_warning_type arg)
  {
    msg_.motec_warning = std::move(arg);
    return Init_DiagnosticReport_front_brk_failure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning3
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning3(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_motec_warning sd_steer_warning3(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_steer_warning3_type arg)
  {
    msg_.sd_steer_warning3 = std::move(arg);
    return Init_DiagnosticReport_motec_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning2
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning2(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning3 sd_steer_warning2(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_steer_warning2_type arg)
  {
    msg_.sd_steer_warning2 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning3(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning1
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning1(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning2 sd_steer_warning1(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_steer_warning1_type arg)
  {
    msg_.sd_steer_warning1 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning3
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning3(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning1 sd_brake_warning3(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_brake_warning3_type arg)
  {
    msg_.sd_brake_warning3 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning2
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning2(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning3 sd_brake_warning2(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_brake_warning2_type arg)
  {
    msg_.sd_brake_warning2 = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning3(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning1
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning1(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning2 sd_brake_warning1(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_brake_warning1_type arg)
  {
    msg_.sd_brake_warning1 = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_system_failure
{
public:
  explicit Init_DiagnosticReport_sd_system_failure(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning1 sd_system_failure(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_system_failure_type arg)
  {
    msg_.sd_system_failure = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_system_warning
{
public:
  explicit Init_DiagnosticReport_sd_system_warning(::raptor_dbw_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_system_failure sd_system_warning(::raptor_dbw_msgs::msg::DiagnosticReport::_sd_system_warning_type arg)
  {
    msg_.sd_system_warning = std::move(arg);
    return Init_DiagnosticReport_sd_system_failure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_header
{
public:
  Init_DiagnosticReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticReport_sd_system_warning header(::raptor_dbw_msgs::msg::DiagnosticReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticReport_sd_system_warning(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DiagnosticReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::DiagnosticReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_DiagnosticReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_
