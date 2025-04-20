// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/BESTUTM.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/bestutm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_BESTUTM_gps_glonass_sig_mask
{
public:
  explicit Init_BESTUTM_gps_glonass_sig_mask(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::BESTUTM gps_glonass_sig_mask(::novatel_oem7_msgs::msg::BESTUTM::_gps_glonass_sig_mask_type arg)
  {
    msg_.gps_glonass_sig_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_galileo_beidou_sig_mask
{
public:
  explicit Init_BESTUTM_galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_gps_glonass_sig_mask galileo_beidou_sig_mask(::novatel_oem7_msgs::msg::BESTUTM::_galileo_beidou_sig_mask_type arg)
  {
    msg_.galileo_beidou_sig_mask = std::move(arg);
    return Init_BESTUTM_gps_glonass_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_ext_sol_stat
{
public:
  explicit Init_BESTUTM_ext_sol_stat(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_galileo_beidou_sig_mask ext_sol_stat(::novatel_oem7_msgs::msg::BESTUTM::_ext_sol_stat_type arg)
  {
    msg_.ext_sol_stat = std::move(arg);
    return Init_BESTUTM_galileo_beidou_sig_mask(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_reserved
{
public:
  explicit Init_BESTUTM_reserved(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_ext_sol_stat reserved(::novatel_oem7_msgs::msg::BESTUTM::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_BESTUTM_ext_sol_stat(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_num_sol_multi_svs
{
public:
  explicit Init_BESTUTM_num_sol_multi_svs(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_reserved num_sol_multi_svs(::novatel_oem7_msgs::msg::BESTUTM::_num_sol_multi_svs_type arg)
  {
    msg_.num_sol_multi_svs = std::move(arg);
    return Init_BESTUTM_reserved(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_num_sol_ggl1_svs
{
public:
  explicit Init_BESTUTM_num_sol_ggl1_svs(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_num_sol_multi_svs num_sol_ggl1_svs(::novatel_oem7_msgs::msg::BESTUTM::_num_sol_ggl1_svs_type arg)
  {
    msg_.num_sol_ggl1_svs = std::move(arg);
    return Init_BESTUTM_num_sol_multi_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_num_sol_svs
{
public:
  explicit Init_BESTUTM_num_sol_svs(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_num_sol_ggl1_svs num_sol_svs(::novatel_oem7_msgs::msg::BESTUTM::_num_sol_svs_type arg)
  {
    msg_.num_sol_svs = std::move(arg);
    return Init_BESTUTM_num_sol_ggl1_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_num_svs
{
public:
  explicit Init_BESTUTM_num_svs(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_num_sol_svs num_svs(::novatel_oem7_msgs::msg::BESTUTM::_num_svs_type arg)
  {
    msg_.num_svs = std::move(arg);
    return Init_BESTUTM_num_sol_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_sol_age
{
public:
  explicit Init_BESTUTM_sol_age(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_num_svs sol_age(::novatel_oem7_msgs::msg::BESTUTM::_sol_age_type arg)
  {
    msg_.sol_age = std::move(arg);
    return Init_BESTUTM_num_svs(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_diff_age
{
public:
  explicit Init_BESTUTM_diff_age(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_sol_age diff_age(::novatel_oem7_msgs::msg::BESTUTM::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_BESTUTM_sol_age(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_stn_id
{
public:
  explicit Init_BESTUTM_stn_id(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_diff_age stn_id(::novatel_oem7_msgs::msg::BESTUTM::_stn_id_type arg)
  {
    msg_.stn_id = std::move(arg);
    return Init_BESTUTM_diff_age(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_height_stddev
{
public:
  explicit Init_BESTUTM_height_stddev(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_stn_id height_stddev(::novatel_oem7_msgs::msg::BESTUTM::_height_stddev_type arg)
  {
    msg_.height_stddev = std::move(arg);
    return Init_BESTUTM_stn_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_easting_stddev
{
public:
  explicit Init_BESTUTM_easting_stddev(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_height_stddev easting_stddev(::novatel_oem7_msgs::msg::BESTUTM::_easting_stddev_type arg)
  {
    msg_.easting_stddev = std::move(arg);
    return Init_BESTUTM_height_stddev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_northing_stddev
{
public:
  explicit Init_BESTUTM_northing_stddev(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_easting_stddev northing_stddev(::novatel_oem7_msgs::msg::BESTUTM::_northing_stddev_type arg)
  {
    msg_.northing_stddev = std::move(arg);
    return Init_BESTUTM_easting_stddev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_datum_id
{
public:
  explicit Init_BESTUTM_datum_id(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_northing_stddev datum_id(::novatel_oem7_msgs::msg::BESTUTM::_datum_id_type arg)
  {
    msg_.datum_id = std::move(arg);
    return Init_BESTUTM_northing_stddev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_undulation
{
public:
  explicit Init_BESTUTM_undulation(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_datum_id undulation(::novatel_oem7_msgs::msg::BESTUTM::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_BESTUTM_datum_id(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_height
{
public:
  explicit Init_BESTUTM_height(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_undulation height(::novatel_oem7_msgs::msg::BESTUTM::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BESTUTM_undulation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_easting
{
public:
  explicit Init_BESTUTM_easting(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_height easting(::novatel_oem7_msgs::msg::BESTUTM::_easting_type arg)
  {
    msg_.easting = std::move(arg);
    return Init_BESTUTM_height(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_northing
{
public:
  explicit Init_BESTUTM_northing(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_easting northing(::novatel_oem7_msgs::msg::BESTUTM::_northing_type arg)
  {
    msg_.northing = std::move(arg);
    return Init_BESTUTM_easting(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_lat_zone_letter
{
public:
  explicit Init_BESTUTM_lat_zone_letter(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_northing lat_zone_letter(::novatel_oem7_msgs::msg::BESTUTM::_lat_zone_letter_type arg)
  {
    msg_.lat_zone_letter = std::move(arg);
    return Init_BESTUTM_northing(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_lon_zone_number
{
public:
  explicit Init_BESTUTM_lon_zone_number(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_lat_zone_letter lon_zone_number(::novatel_oem7_msgs::msg::BESTUTM::_lon_zone_number_type arg)
  {
    msg_.lon_zone_number = std::move(arg);
    return Init_BESTUTM_lat_zone_letter(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_pos_type
{
public:
  explicit Init_BESTUTM_pos_type(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_lon_zone_number pos_type(::novatel_oem7_msgs::msg::BESTUTM::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_BESTUTM_lon_zone_number(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_sol_status
{
public:
  explicit Init_BESTUTM_sol_status(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_pos_type sol_status(::novatel_oem7_msgs::msg::BESTUTM::_sol_status_type arg)
  {
    msg_.sol_status = std::move(arg);
    return Init_BESTUTM_pos_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_nov_header
{
public:
  explicit Init_BESTUTM_nov_header(::novatel_oem7_msgs::msg::BESTUTM & msg)
  : msg_(msg)
  {}
  Init_BESTUTM_sol_status nov_header(::novatel_oem7_msgs::msg::BESTUTM::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_BESTUTM_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

class Init_BESTUTM_header
{
public:
  Init_BESTUTM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BESTUTM_nov_header header(::novatel_oem7_msgs::msg::BESTUTM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BESTUTM_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::BESTUTM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::BESTUTM>()
{
  return novatel_oem7_msgs::msg::builder::Init_BESTUTM_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__BUILDER_HPP_
