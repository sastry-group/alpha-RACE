// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/BESTPOS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/bestpos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_BESTPOS_gps_glonass_sig_mask
{
public:
  explicit Init_BESTPOS_gps_glonass_sig_mask(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::BESTPOS gps_glonass_sig_mask(::novatel_oem7_msgs::msg::BESTPOS::_gps_glonass_sig_mask_type arg)
  {
    msg_.gps_glonass_sig_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_galileo_beidou_sig_mask
{
public:
  explicit Init_BESTPOS_galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_gps_glonass_sig_mask galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::BESTPOS::_galileo_beidou_sig_mask_type arg)
  {
    msg_.galileo_beidou_sig_mask = std::move(arg);
    return Init_BESTPOS_gps_glonass_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_ext_sol_stat
{
public:
  explicit Init_BESTPOS_ext_sol_stat(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_galileo_beidou_sig_mask ext_sol_stat(::novatel_oem7_msgs::msg::BESTPOS::_ext_sol_stat_type arg)
  {
    msg_.ext_sol_stat = std::move(arg);
    return Init_BESTPOS_galileo_beidou_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_reserved
{
public:
  explicit Init_BESTPOS_reserved(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_ext_sol_stat reserved(::novatel_oem7_msgs::msg::BESTPOS::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_BESTPOS_ext_sol_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_num_sol_multi_svs
{
public:
  explicit Init_BESTPOS_num_sol_multi_svs(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_reserved num_sol_multi_svs(::novatel_oem7_msgs::msg::BESTPOS::_num_sol_multi_svs_type arg)
  {
    msg_.num_sol_multi_svs = std::move(arg);
    return Init_BESTPOS_reserved(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_num_sol_l1_svs
{
public:
  explicit Init_BESTPOS_num_sol_l1_svs(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_num_sol_multi_svs num_sol_l1_svs(::novatel_oem7_msgs::msg::BESTPOS::_num_sol_l1_svs_type arg)
  {
    msg_.num_sol_l1_svs = std::move(arg);
    return Init_BESTPOS_num_sol_multi_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_num_sol_svs
{
public:
  explicit Init_BESTPOS_num_sol_svs(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_num_sol_l1_svs num_sol_svs(::novatel_oem7_msgs::msg::BESTPOS::_num_sol_svs_type arg)
  {
    msg_.num_sol_svs = std::move(arg);
    return Init_BESTPOS_num_sol_l1_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_num_svs
{
public:
  explicit Init_BESTPOS_num_svs(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_num_sol_svs num_svs(::novatel_oem7_msgs::msg::BESTPOS::_num_svs_type arg)
  {
    msg_.num_svs = std::move(arg);
    return Init_BESTPOS_num_sol_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_sol_age
{
public:
  explicit Init_BESTPOS_sol_age(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_num_svs sol_age(::novatel_oem7_msgs::msg::BESTPOS::_sol_age_type arg)
  {
    msg_.sol_age = std::move(arg);
    return Init_BESTPOS_num_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_diff_age
{
public:
  explicit Init_BESTPOS_diff_age(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_sol_age diff_age(::novatel_oem7_msgs::msg::BESTPOS::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_BESTPOS_sol_age(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_stn_id
{
public:
  explicit Init_BESTPOS_stn_id(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_diff_age stn_id(::novatel_oem7_msgs::msg::BESTPOS::_stn_id_type arg)
  {
    msg_.stn_id = std::move(arg);
    return Init_BESTPOS_diff_age(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_hgt_stdev
{
public:
  explicit Init_BESTPOS_hgt_stdev(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_stn_id hgt_stdev(::novatel_oem7_msgs::msg::BESTPOS::_hgt_stdev_type arg)
  {
    msg_.hgt_stdev = std::move(arg);
    return Init_BESTPOS_stn_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_lon_stdev
{
public:
  explicit Init_BESTPOS_lon_stdev(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_hgt_stdev lon_stdev(::novatel_oem7_msgs::msg::BESTPOS::_lon_stdev_type arg)
  {
    msg_.lon_stdev = std::move(arg);
    return Init_BESTPOS_hgt_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_lat_stdev
{
public:
  explicit Init_BESTPOS_lat_stdev(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_lon_stdev lat_stdev(::novatel_oem7_msgs::msg::BESTPOS::_lat_stdev_type arg)
  {
    msg_.lat_stdev = std::move(arg);
    return Init_BESTPOS_lon_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_datum_id
{
public:
  explicit Init_BESTPOS_datum_id(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_lat_stdev datum_id(::novatel_oem7_msgs::msg::BESTPOS::_datum_id_type arg)
  {
    msg_.datum_id = std::move(arg);
    return Init_BESTPOS_lat_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_undulation
{
public:
  explicit Init_BESTPOS_undulation(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_datum_id undulation(::novatel_oem7_msgs::msg::BESTPOS::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_BESTPOS_datum_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_hgt
{
public:
  explicit Init_BESTPOS_hgt(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_undulation hgt(::novatel_oem7_msgs::msg::BESTPOS::_hgt_type arg)
  {
    msg_.hgt = std::move(arg);
    return Init_BESTPOS_undulation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_lon
{
public:
  explicit Init_BESTPOS_lon(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_hgt lon(::novatel_oem7_msgs::msg::BESTPOS::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_BESTPOS_hgt(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_lat
{
public:
  explicit Init_BESTPOS_lat(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_lon lat(::novatel_oem7_msgs::msg::BESTPOS::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_BESTPOS_lon(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_pos_type
{
public:
  explicit Init_BESTPOS_pos_type(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_lat pos_type(::novatel_oem7_msgs::msg::BESTPOS::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_BESTPOS_lat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_sol_status
{
public:
  explicit Init_BESTPOS_sol_status(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_pos_type sol_status(::novatel_oem7_msgs::msg::BESTPOS::_sol_status_type arg)
  {
    msg_.sol_status = std::move(arg);
    return Init_BESTPOS_pos_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_nov_header
{
public:
  explicit Init_BESTPOS_nov_header(::novatel_oem7_msgs::msg::BESTPOS & msg)
  : msg_(msg)
  {}
  Init_BESTPOS_sol_status nov_header(::novatel_oem7_msgs::msg::BESTPOS::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_BESTPOS_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

class Init_BESTPOS_header
{
public:
  Init_BESTPOS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BESTPOS_nov_header header(::novatel_oem7_msgs::msg::BESTPOS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BESTPOS_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTPOS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::BESTPOS>()
{
  return novatel_oem7_msgs::msg::builder::Init_BESTPOS_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_
