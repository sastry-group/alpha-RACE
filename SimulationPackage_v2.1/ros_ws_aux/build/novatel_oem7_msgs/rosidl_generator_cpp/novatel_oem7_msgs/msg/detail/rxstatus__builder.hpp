// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_RXSTATUS_aux4_stat_strs
{
public:
  explicit Init_RXSTATUS_aux4_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::RXSTATUS aux4_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_strs_type arg)
  {
    msg_.aux4_stat_strs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux4_stat_bits
{
public:
  explicit Init_RXSTATUS_aux4_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat_strs aux4_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_bits_type arg)
  {
    msg_.aux4_stat_bits = std::move(arg);
    return Init_RXSTATUS_aux4_stat_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat_strs
{
public:
  explicit Init_RXSTATUS_aux3_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat_bits aux3_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_strs_type arg)
  {
    msg_.aux3_stat_strs = std::move(arg);
    return Init_RXSTATUS_aux4_stat_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat_bits
{
public:
  explicit Init_RXSTATUS_aux3_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat_strs aux3_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_bits_type arg)
  {
    msg_.aux3_stat_bits = std::move(arg);
    return Init_RXSTATUS_aux3_stat_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat_strs
{
public:
  explicit Init_RXSTATUS_aux2_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat_bits aux2_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_strs_type arg)
  {
    msg_.aux2_stat_strs = std::move(arg);
    return Init_RXSTATUS_aux3_stat_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat_bits
{
public:
  explicit Init_RXSTATUS_aux2_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat_strs aux2_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_bits_type arg)
  {
    msg_.aux2_stat_bits = std::move(arg);
    return Init_RXSTATUS_aux2_stat_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat_strs
{
public:
  explicit Init_RXSTATUS_aux1_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat_bits aux1_stat_strs(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_strs_type arg)
  {
    msg_.aux1_stat_strs = std::move(arg);
    return Init_RXSTATUS_aux2_stat_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat_bits
{
public:
  explicit Init_RXSTATUS_aux1_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat_strs aux1_stat_bits(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_bits_type arg)
  {
    msg_.aux1_stat_bits = std::move(arg);
    return Init_RXSTATUS_aux1_stat_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat_strs
{
public:
  explicit Init_RXSTATUS_rxstat_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat_bits rxstat_strs(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_strs_type arg)
  {
    msg_.rxstat_strs = std::move(arg);
    return Init_RXSTATUS_aux1_stat_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat_bits
{
public:
  explicit Init_RXSTATUS_rxstat_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat_strs rxstat_bits(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_bits_type arg)
  {
    msg_.rxstat_bits = std::move(arg);
    return Init_RXSTATUS_rxstat_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_error_strs
{
public:
  explicit Init_RXSTATUS_error_strs(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat_bits error_strs(::novatel_oem7_msgs::msg::RXSTATUS::_error_strs_type arg)
  {
    msg_.error_strs = std::move(arg);
    return Init_RXSTATUS_rxstat_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_error_bits
{
public:
  explicit Init_RXSTATUS_error_bits(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_error_strs error_bits(::novatel_oem7_msgs::msg::RXSTATUS::_error_bits_type arg)
  {
    msg_.error_bits = std::move(arg);
    return Init_RXSTATUS_error_strs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux4_stat_clr
{
public:
  explicit Init_RXSTATUS_aux4_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_error_bits aux4_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_clr_type arg)
  {
    msg_.aux4_stat_clr = std::move(arg);
    return Init_RXSTATUS_error_bits(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux4_stat_set
{
public:
  explicit Init_RXSTATUS_aux4_stat_set(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat_clr aux4_stat_set(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_set_type arg)
  {
    msg_.aux4_stat_set = std::move(arg);
    return Init_RXSTATUS_aux4_stat_clr(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux4_stat_pri
{
public:
  explicit Init_RXSTATUS_aux4_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat_set aux4_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_pri_type arg)
  {
    msg_.aux4_stat_pri = std::move(arg);
    return Init_RXSTATUS_aux4_stat_set(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux4_stat
{
public:
  explicit Init_RXSTATUS_aux4_stat(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat_pri aux4_stat(::novatel_oem7_msgs::msg::RXSTATUS::_aux4_stat_type arg)
  {
    msg_.aux4_stat = std::move(arg);
    return Init_RXSTATUS_aux4_stat_pri(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat_clr
{
public:
  explicit Init_RXSTATUS_aux3_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux4_stat aux3_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_clr_type arg)
  {
    msg_.aux3_stat_clr = std::move(arg);
    return Init_RXSTATUS_aux4_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat_set
{
public:
  explicit Init_RXSTATUS_aux3_stat_set(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat_clr aux3_stat_set(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_set_type arg)
  {
    msg_.aux3_stat_set = std::move(arg);
    return Init_RXSTATUS_aux3_stat_clr(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat_pri
{
public:
  explicit Init_RXSTATUS_aux3_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat_set aux3_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_pri_type arg)
  {
    msg_.aux3_stat_pri = std::move(arg);
    return Init_RXSTATUS_aux3_stat_set(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux3_stat
{
public:
  explicit Init_RXSTATUS_aux3_stat(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat_pri aux3_stat(::novatel_oem7_msgs::msg::RXSTATUS::_aux3_stat_type arg)
  {
    msg_.aux3_stat = std::move(arg);
    return Init_RXSTATUS_aux3_stat_pri(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat_clr
{
public:
  explicit Init_RXSTATUS_aux2_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux3_stat aux2_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_clr_type arg)
  {
    msg_.aux2_stat_clr = std::move(arg);
    return Init_RXSTATUS_aux3_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat_set
{
public:
  explicit Init_RXSTATUS_aux2_stat_set(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat_clr aux2_stat_set(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_set_type arg)
  {
    msg_.aux2_stat_set = std::move(arg);
    return Init_RXSTATUS_aux2_stat_clr(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat_pri
{
public:
  explicit Init_RXSTATUS_aux2_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat_set aux2_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_pri_type arg)
  {
    msg_.aux2_stat_pri = std::move(arg);
    return Init_RXSTATUS_aux2_stat_set(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux2_stat
{
public:
  explicit Init_RXSTATUS_aux2_stat(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat_pri aux2_stat(::novatel_oem7_msgs::msg::RXSTATUS::_aux2_stat_type arg)
  {
    msg_.aux2_stat = std::move(arg);
    return Init_RXSTATUS_aux2_stat_pri(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat_clr
{
public:
  explicit Init_RXSTATUS_aux1_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux2_stat aux1_stat_clr(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_clr_type arg)
  {
    msg_.aux1_stat_clr = std::move(arg);
    return Init_RXSTATUS_aux2_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat_set
{
public:
  explicit Init_RXSTATUS_aux1_stat_set(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat_clr aux1_stat_set(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_set_type arg)
  {
    msg_.aux1_stat_set = std::move(arg);
    return Init_RXSTATUS_aux1_stat_clr(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat_pri
{
public:
  explicit Init_RXSTATUS_aux1_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat_set aux1_stat_pri(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_pri_type arg)
  {
    msg_.aux1_stat_pri = std::move(arg);
    return Init_RXSTATUS_aux1_stat_set(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_aux1_stat
{
public:
  explicit Init_RXSTATUS_aux1_stat(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat_pri aux1_stat(::novatel_oem7_msgs::msg::RXSTATUS::_aux1_stat_type arg)
  {
    msg_.aux1_stat = std::move(arg);
    return Init_RXSTATUS_aux1_stat_pri(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat_clr_mask
{
public:
  explicit Init_RXSTATUS_rxstat_clr_mask(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_aux1_stat rxstat_clr_mask(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_clr_mask_type arg)
  {
    msg_.rxstat_clr_mask = std::move(arg);
    return Init_RXSTATUS_aux1_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat_set_mask
{
public:
  explicit Init_RXSTATUS_rxstat_set_mask(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat_clr_mask rxstat_set_mask(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_set_mask_type arg)
  {
    msg_.rxstat_set_mask = std::move(arg);
    return Init_RXSTATUS_rxstat_clr_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat_pri_mask
{
public:
  explicit Init_RXSTATUS_rxstat_pri_mask(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat_set_mask rxstat_pri_mask(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_pri_mask_type arg)
  {
    msg_.rxstat_pri_mask = std::move(arg);
    return Init_RXSTATUS_rxstat_set_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_rxstat
{
public:
  explicit Init_RXSTATUS_rxstat(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat_pri_mask rxstat(::novatel_oem7_msgs::msg::RXSTATUS::_rxstat_type arg)
  {
    msg_.rxstat = std::move(arg);
    return Init_RXSTATUS_rxstat_pri_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_num_status_codes
{
public:
  explicit Init_RXSTATUS_num_status_codes(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_rxstat num_status_codes(::novatel_oem7_msgs::msg::RXSTATUS::_num_status_codes_type arg)
  {
    msg_.num_status_codes = std::move(arg);
    return Init_RXSTATUS_rxstat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_error
{
public:
  explicit Init_RXSTATUS_error(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_num_status_codes error(::novatel_oem7_msgs::msg::RXSTATUS::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_RXSTATUS_num_status_codes(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_nov_header
{
public:
  explicit Init_RXSTATUS_nov_header(::novatel_oem7_msgs::msg::RXSTATUS & msg)
  : msg_(msg)
  {}
  Init_RXSTATUS_error nov_header(::novatel_oem7_msgs::msg::RXSTATUS::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_RXSTATUS_error(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

class Init_RXSTATUS_header
{
public:
  Init_RXSTATUS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RXSTATUS_nov_header header(::novatel_oem7_msgs::msg::RXSTATUS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RXSTATUS_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::RXSTATUS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::RXSTATUS>()
{
  return novatel_oem7_msgs::msg::builder::Init_RXSTATUS_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__BUILDER_HPP_
