// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSPVAX.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/inspvax__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSPVAX_time_since_update
{
public:
  explicit Init_INSPVAX_time_since_update(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::INSPVAX time_since_update(::novatel_oem7_msgs::msg::INSPVAX::_time_since_update_type arg)
  {
    msg_.time_since_update = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_ext_sol_status
{
public:
  explicit Init_INSPVAX_ext_sol_status(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_time_since_update ext_sol_status(::novatel_oem7_msgs::msg::INSPVAX::_ext_sol_status_type arg)
  {
    msg_.ext_sol_status = std::move(arg);
    return Init_INSPVAX_time_since_update(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_azimuth_stdev
{
public:
  explicit Init_INSPVAX_azimuth_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_ext_sol_status azimuth_stdev(::novatel_oem7_msgs::msg::INSPVAX::_azimuth_stdev_type arg)
  {
    msg_.azimuth_stdev = std::move(arg);
    return Init_INSPVAX_ext_sol_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_pitch_stdev
{
public:
  explicit Init_INSPVAX_pitch_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_azimuth_stdev pitch_stdev(::novatel_oem7_msgs::msg::INSPVAX::_pitch_stdev_type arg)
  {
    msg_.pitch_stdev = std::move(arg);
    return Init_INSPVAX_azimuth_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_roll_stdev
{
public:
  explicit Init_INSPVAX_roll_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_pitch_stdev roll_stdev(::novatel_oem7_msgs::msg::INSPVAX::_roll_stdev_type arg)
  {
    msg_.roll_stdev = std::move(arg);
    return Init_INSPVAX_pitch_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_up_velocity_stdev
{
public:
  explicit Init_INSPVAX_up_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_roll_stdev up_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX::_up_velocity_stdev_type arg)
  {
    msg_.up_velocity_stdev = std::move(arg);
    return Init_INSPVAX_roll_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_east_velocity_stdev
{
public:
  explicit Init_INSPVAX_east_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_up_velocity_stdev east_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX::_east_velocity_stdev_type arg)
  {
    msg_.east_velocity_stdev = std::move(arg);
    return Init_INSPVAX_up_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_north_velocity_stdev
{
public:
  explicit Init_INSPVAX_north_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_east_velocity_stdev north_velocity_stdev(::novatel_oem7_msgs::msg::INSPVAX::_north_velocity_stdev_type arg)
  {
    msg_.north_velocity_stdev = std::move(arg);
    return Init_INSPVAX_east_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_height_stdev
{
public:
  explicit Init_INSPVAX_height_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_north_velocity_stdev height_stdev(::novatel_oem7_msgs::msg::INSPVAX::_height_stdev_type arg)
  {
    msg_.height_stdev = std::move(arg);
    return Init_INSPVAX_north_velocity_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_longitude_stdev
{
public:
  explicit Init_INSPVAX_longitude_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_height_stdev longitude_stdev(::novatel_oem7_msgs::msg::INSPVAX::_longitude_stdev_type arg)
  {
    msg_.longitude_stdev = std::move(arg);
    return Init_INSPVAX_height_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_latitude_stdev
{
public:
  explicit Init_INSPVAX_latitude_stdev(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_longitude_stdev latitude_stdev(::novatel_oem7_msgs::msg::INSPVAX::_latitude_stdev_type arg)
  {
    msg_.latitude_stdev = std::move(arg);
    return Init_INSPVAX_longitude_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_azimuth
{
public:
  explicit Init_INSPVAX_azimuth(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_latitude_stdev azimuth(::novatel_oem7_msgs::msg::INSPVAX::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_INSPVAX_latitude_stdev(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_pitch
{
public:
  explicit Init_INSPVAX_pitch(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_azimuth pitch(::novatel_oem7_msgs::msg::INSPVAX::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_INSPVAX_azimuth(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_roll
{
public:
  explicit Init_INSPVAX_roll(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_pitch roll(::novatel_oem7_msgs::msg::INSPVAX::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_INSPVAX_pitch(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_up_velocity
{
public:
  explicit Init_INSPVAX_up_velocity(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_roll up_velocity(::novatel_oem7_msgs::msg::INSPVAX::_up_velocity_type arg)
  {
    msg_.up_velocity = std::move(arg);
    return Init_INSPVAX_roll(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_east_velocity
{
public:
  explicit Init_INSPVAX_east_velocity(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_up_velocity east_velocity(::novatel_oem7_msgs::msg::INSPVAX::_east_velocity_type arg)
  {
    msg_.east_velocity = std::move(arg);
    return Init_INSPVAX_up_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_north_velocity
{
public:
  explicit Init_INSPVAX_north_velocity(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_east_velocity north_velocity(::novatel_oem7_msgs::msg::INSPVAX::_north_velocity_type arg)
  {
    msg_.north_velocity = std::move(arg);
    return Init_INSPVAX_east_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_undulation
{
public:
  explicit Init_INSPVAX_undulation(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_north_velocity undulation(::novatel_oem7_msgs::msg::INSPVAX::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_INSPVAX_north_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_height
{
public:
  explicit Init_INSPVAX_height(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_undulation height(::novatel_oem7_msgs::msg::INSPVAX::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_INSPVAX_undulation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_longitude
{
public:
  explicit Init_INSPVAX_longitude(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_height longitude(::novatel_oem7_msgs::msg::INSPVAX::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_INSPVAX_height(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_latitude
{
public:
  explicit Init_INSPVAX_latitude(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_longitude latitude(::novatel_oem7_msgs::msg::INSPVAX::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_INSPVAX_longitude(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_pos_type
{
public:
  explicit Init_INSPVAX_pos_type(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_latitude pos_type(::novatel_oem7_msgs::msg::INSPVAX::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_INSPVAX_latitude(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_ins_status
{
public:
  explicit Init_INSPVAX_ins_status(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_pos_type ins_status(::novatel_oem7_msgs::msg::INSPVAX::_ins_status_type arg)
  {
    msg_.ins_status = std::move(arg);
    return Init_INSPVAX_pos_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_nov_header
{
public:
  explicit Init_INSPVAX_nov_header(::novatel_oem7_msgs::msg::INSPVAX & msg)
  : msg_(msg)
  {}
  Init_INSPVAX_ins_status nov_header(::novatel_oem7_msgs::msg::INSPVAX::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_INSPVAX_ins_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

class Init_INSPVAX_header
{
public:
  Init_INSPVAX_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSPVAX_nov_header header(::novatel_oem7_msgs::msg::INSPVAX::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSPVAX_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSPVAX msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSPVAX>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSPVAX_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__BUILDER_HPP_
