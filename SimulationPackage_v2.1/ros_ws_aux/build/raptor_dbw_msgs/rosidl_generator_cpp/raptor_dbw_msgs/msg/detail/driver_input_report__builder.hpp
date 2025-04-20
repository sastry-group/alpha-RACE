// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/driver_input_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_DriverInputReport_door_or_hood_ajar
{
public:
  explicit Init_DriverInputReport_door_or_hood_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::DriverInputReport door_or_hood_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_door_or_hood_ajar_type arg)
  {
    msg_.door_or_hood_ajar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_airbag_deployed
{
public:
  explicit Init_DriverInputReport_airbag_deployed(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_door_or_hood_ajar airbag_deployed(::raptor_dbw_msgs::msg::DriverInputReport::_airbag_deployed_type arg)
  {
    msg_.airbag_deployed = std::move(arg);
    return Init_DriverInputReport_door_or_hood_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_any_seatbelt_unbuckled
{
public:
  explicit Init_DriverInputReport_any_seatbelt_unbuckled(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_airbag_deployed any_seatbelt_unbuckled(::raptor_dbw_msgs::msg::DriverInputReport::_any_seatbelt_unbuckled_type arg)
  {
    msg_.any_seatbelt_unbuckled = std::move(arg);
    return Init_DriverInputReport_airbag_deployed(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_liftgate_ajar
{
public:
  explicit Init_DriverInputReport_liftgate_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_any_seatbelt_unbuckled liftgate_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_liftgate_ajar_type arg)
  {
    msg_.liftgate_ajar = std::move(arg);
    return Init_DriverInputReport_any_seatbelt_unbuckled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_rear_right_door_ajar
{
public:
  explicit Init_DriverInputReport_rear_right_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_liftgate_ajar rear_right_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_rear_right_door_ajar_type arg)
  {
    msg_.rear_right_door_ajar = std::move(arg);
    return Init_DriverInputReport_liftgate_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_rear_left_door_ajar
{
public:
  explicit Init_DriverInputReport_rear_left_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_rear_right_door_ajar rear_left_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_rear_left_door_ajar_type arg)
  {
    msg_.rear_left_door_ajar = std::move(arg);
    return Init_DriverInputReport_rear_right_door_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_passenger_door_ajar
{
public:
  explicit Init_DriverInputReport_passenger_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_rear_left_door_ajar passenger_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_passenger_door_ajar_type arg)
  {
    msg_.passenger_door_ajar = std::move(arg);
    return Init_DriverInputReport_rear_left_door_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_driver_door_ajar
{
public:
  explicit Init_DriverInputReport_driver_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_passenger_door_ajar driver_door_ajar(::raptor_dbw_msgs::msg::DriverInputReport::_driver_door_ajar_type arg)
  {
    msg_.driver_door_ajar = std::move(arg);
    return Init_DriverInputReport_passenger_door_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_adaptive_cruise_decrease_distance_button
{
public:
  explicit Init_DriverInputReport_adaptive_cruise_decrease_distance_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_driver_door_ajar adaptive_cruise_decrease_distance_button(::raptor_dbw_msgs::msg::DriverInputReport::_adaptive_cruise_decrease_distance_button_type arg)
  {
    msg_.adaptive_cruise_decrease_distance_button = std::move(arg);
    return Init_DriverInputReport_driver_door_ajar(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_adaptive_cruise_increase_distance_button
{
public:
  explicit Init_DriverInputReport_adaptive_cruise_increase_distance_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_adaptive_cruise_decrease_distance_button adaptive_cruise_increase_distance_button(::raptor_dbw_msgs::msg::DriverInputReport::_adaptive_cruise_increase_distance_button_type arg)
  {
    msg_.adaptive_cruise_increase_distance_button = std::move(arg);
    return Init_DriverInputReport_adaptive_cruise_decrease_distance_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_adaptive_cruise_on_off_button
{
public:
  explicit Init_DriverInputReport_adaptive_cruise_on_off_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_adaptive_cruise_increase_distance_button adaptive_cruise_on_off_button(::raptor_dbw_msgs::msg::DriverInputReport::_adaptive_cruise_on_off_button_type arg)
  {
    msg_.adaptive_cruise_on_off_button = std::move(arg);
    return Init_DriverInputReport_adaptive_cruise_increase_distance_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_cruise_on_off_button
{
public:
  explicit Init_DriverInputReport_cruise_on_off_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_adaptive_cruise_on_off_button cruise_on_off_button(::raptor_dbw_msgs::msg::DriverInputReport::_cruise_on_off_button_type arg)
  {
    msg_.cruise_on_off_button = std::move(arg);
    return Init_DriverInputReport_adaptive_cruise_on_off_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_cruise_decel_button
{
public:
  explicit Init_DriverInputReport_cruise_decel_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_cruise_on_off_button cruise_decel_button(::raptor_dbw_msgs::msg::DriverInputReport::_cruise_decel_button_type arg)
  {
    msg_.cruise_decel_button = std::move(arg);
    return Init_DriverInputReport_cruise_on_off_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_cruise_accel_button
{
public:
  explicit Init_DriverInputReport_cruise_accel_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_cruise_decel_button cruise_accel_button(::raptor_dbw_msgs::msg::DriverInputReport::_cruise_accel_button_type arg)
  {
    msg_.cruise_accel_button = std::move(arg);
    return Init_DriverInputReport_cruise_decel_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_cruise_cancel_button
{
public:
  explicit Init_DriverInputReport_cruise_cancel_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_cruise_accel_button cruise_cancel_button(::raptor_dbw_msgs::msg::DriverInputReport::_cruise_cancel_button_type arg)
  {
    msg_.cruise_cancel_button = std::move(arg);
    return Init_DriverInputReport_cruise_accel_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_cruise_resume_button
{
public:
  explicit Init_DriverInputReport_cruise_resume_button(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_cruise_cancel_button cruise_resume_button(::raptor_dbw_msgs::msg::DriverInputReport::_cruise_resume_button_type arg)
  {
    msg_.cruise_resume_button = std::move(arg);
    return Init_DriverInputReport_cruise_cancel_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_wiper
{
public:
  explicit Init_DriverInputReport_wiper(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_cruise_resume_button wiper(::raptor_dbw_msgs::msg::DriverInputReport::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_DriverInputReport_cruise_resume_button(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_high_beam_headlights
{
public:
  explicit Init_DriverInputReport_high_beam_headlights(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_wiper high_beam_headlights(::raptor_dbw_msgs::msg::DriverInputReport::_high_beam_headlights_type arg)
  {
    msg_.high_beam_headlights = std::move(arg);
    return Init_DriverInputReport_wiper(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_turn_signal
{
public:
  explicit Init_DriverInputReport_turn_signal(::raptor_dbw_msgs::msg::DriverInputReport & msg)
  : msg_(msg)
  {}
  Init_DriverInputReport_high_beam_headlights turn_signal(::raptor_dbw_msgs::msg::DriverInputReport::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_DriverInputReport_high_beam_headlights(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

class Init_DriverInputReport_header
{
public:
  Init_DriverInputReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverInputReport_turn_signal header(::raptor_dbw_msgs::msg::DriverInputReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriverInputReport_turn_signal(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DriverInputReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::DriverInputReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_DriverInputReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__BUILDER_HPP_
