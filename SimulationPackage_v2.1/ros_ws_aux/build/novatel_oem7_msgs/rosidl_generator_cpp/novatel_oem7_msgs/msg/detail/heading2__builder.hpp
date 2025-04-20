// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/heading2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_HEADING2_gps_glonass_sig_mask
{
public:
  explicit Init_HEADING2_gps_glonass_sig_mask(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::HEADING2 gps_glonass_sig_mask(::novatel_oem7_msgs::msg::HEADING2::_gps_glonass_sig_mask_type arg)
  {
    msg_.gps_glonass_sig_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_galileo_beidou_sig_mask
{
public:
  explicit Init_HEADING2_galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_gps_glonass_sig_mask galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::HEADING2::_galileo_beidou_sig_mask_type arg)
  {
    msg_.galileo_beidou_sig_mask = std::move(arg);
    return Init_HEADING2_gps_glonass_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_ext_sol_status
{
public:
  explicit Init_HEADING2_ext_sol_status(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_galileo_beidou_sig_mask ext_sol_status(::novatel_oem7_msgs::msg::HEADING2::_ext_sol_status_type arg)
  {
    msg_.ext_sol_status = std::move(arg);
    return Init_HEADING2_galileo_beidou_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_sol_source
{
public:
  explicit Init_HEADING2_sol_source(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_ext_sol_status sol_source(::novatel_oem7_msgs::msg::HEADING2::_sol_source_type arg)
  {
    msg_.sol_source = std::move(arg);
    return Init_HEADING2_ext_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_num_sv_multi
{
public:
  explicit Init_HEADING2_num_sv_multi(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_sol_source num_sv_multi(::novatel_oem7_msgs::msg::HEADING2::_num_sv_multi_type arg)
  {
    msg_.num_sv_multi = std::move(arg);
    return Init_HEADING2_sol_source(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_num_sv_obs
{
public:
  explicit Init_HEADING2_num_sv_obs(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_num_sv_multi num_sv_obs(::novatel_oem7_msgs::msg::HEADING2::_num_sv_obs_type arg)
  {
    msg_.num_sv_obs = std::move(arg);
    return Init_HEADING2_num_sv_multi(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_num_sv_in_sol
{
public:
  explicit Init_HEADING2_num_sv_in_sol(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_num_sv_obs num_sv_in_sol(::novatel_oem7_msgs::msg::HEADING2::_num_sv_in_sol_type arg)
  {
    msg_.num_sv_in_sol = std::move(arg);
    return Init_HEADING2_num_sv_obs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_num_sv_tracked
{
public:
  explicit Init_HEADING2_num_sv_tracked(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_num_sv_in_sol num_sv_tracked(::novatel_oem7_msgs::msg::HEADING2::_num_sv_tracked_type arg)
  {
    msg_.num_sv_tracked = std::move(arg);
    return Init_HEADING2_num_sv_in_sol(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_master_stn_id
{
public:
  explicit Init_HEADING2_master_stn_id(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_num_sv_tracked master_stn_id(::novatel_oem7_msgs::msg::HEADING2::_master_stn_id_type arg)
  {
    msg_.master_stn_id = std::move(arg);
    return Init_HEADING2_num_sv_tracked(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_rover_stn_id
{
public:
  explicit Init_HEADING2_rover_stn_id(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_master_stn_id rover_stn_id(::novatel_oem7_msgs::msg::HEADING2::_rover_stn_id_type arg)
  {
    msg_.rover_stn_id = std::move(arg);
    return Init_HEADING2_master_stn_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_pitch_stdev
{
public:
  explicit Init_HEADING2_pitch_stdev(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_rover_stn_id pitch_stdev(::novatel_oem7_msgs::msg::HEADING2::_pitch_stdev_type arg)
  {
    msg_.pitch_stdev = std::move(arg);
    return Init_HEADING2_rover_stn_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_heading_stdev
{
public:
  explicit Init_HEADING2_heading_stdev(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_pitch_stdev heading_stdev(::novatel_oem7_msgs::msg::HEADING2::_heading_stdev_type arg)
  {
    msg_.heading_stdev = std::move(arg);
    return Init_HEADING2_pitch_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_reserved
{
public:
  explicit Init_HEADING2_reserved(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_heading_stdev reserved(::novatel_oem7_msgs::msg::HEADING2::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_HEADING2_heading_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_pitch
{
public:
  explicit Init_HEADING2_pitch(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_reserved pitch(::novatel_oem7_msgs::msg::HEADING2::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HEADING2_reserved(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_heading
{
public:
  explicit Init_HEADING2_heading(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_pitch heading(::novatel_oem7_msgs::msg::HEADING2::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_HEADING2_pitch(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_length
{
public:
  explicit Init_HEADING2_length(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_heading length(::novatel_oem7_msgs::msg::HEADING2::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_HEADING2_heading(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_pos_type
{
public:
  explicit Init_HEADING2_pos_type(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_length pos_type(::novatel_oem7_msgs::msg::HEADING2::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_HEADING2_length(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_sol_status
{
public:
  explicit Init_HEADING2_sol_status(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_pos_type sol_status(::novatel_oem7_msgs::msg::HEADING2::_sol_status_type arg)
  {
    msg_.sol_status = std::move(arg);
    return Init_HEADING2_pos_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_nov_header
{
public:
  explicit Init_HEADING2_nov_header(::novatel_oem7_msgs::msg::HEADING2 & msg)
  : msg_(msg)
  {}
  Init_HEADING2_sol_status nov_header(::novatel_oem7_msgs::msg::HEADING2::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_HEADING2_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

class Init_HEADING2_header
{
public:
  Init_HEADING2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HEADING2_nov_header header(::novatel_oem7_msgs::msg::HEADING2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HEADING2_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::HEADING2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::HEADING2>()
{
  return novatel_oem7_msgs::msg::builder::Init_HEADING2_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__BUILDER_HPP_
