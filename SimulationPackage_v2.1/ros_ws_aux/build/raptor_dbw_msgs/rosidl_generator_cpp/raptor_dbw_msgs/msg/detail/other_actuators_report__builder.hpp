// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/other_actuators_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_OtherActuatorsReport_rolling_counter
{
public:
  explicit Init_OtherActuatorsReport_rolling_counter(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::OtherActuatorsReport rolling_counter(::raptor_dbw_msgs::msg::OtherActuatorsReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_low_beam_state
{
public:
  explicit Init_OtherActuatorsReport_low_beam_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_rolling_counter low_beam_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_low_beam_state_type arg)
  {
    msg_.low_beam_state = std::move(arg);
    return Init_OtherActuatorsReport_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_horn_state
{
public:
  explicit Init_OtherActuatorsReport_horn_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_low_beam_state horn_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_horn_state_type arg)
  {
    msg_.horn_state = std::move(arg);
    return Init_OtherActuatorsReport_low_beam_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_liftgate_door_state
{
public:
  explicit Init_OtherActuatorsReport_liftgate_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_horn_state liftgate_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_liftgate_door_state_type arg)
  {
    msg_.liftgate_door_state = std::move(arg);
    return Init_OtherActuatorsReport_horn_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_left_rear_door_state
{
public:
  explicit Init_OtherActuatorsReport_left_rear_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_liftgate_door_state left_rear_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_left_rear_door_state_type arg)
  {
    msg_.left_rear_door_state = std::move(arg);
    return Init_OtherActuatorsReport_liftgate_door_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_ignition_state
{
public:
  explicit Init_OtherActuatorsReport_ignition_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_left_rear_door_state ignition_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_ignition_state_type arg)
  {
    msg_.ignition_state = std::move(arg);
    return Init_OtherActuatorsReport_left_rear_door_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_rear_wiper_state
{
public:
  explicit Init_OtherActuatorsReport_rear_wiper_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_ignition_state rear_wiper_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_rear_wiper_state_type arg)
  {
    msg_.rear_wiper_state = std::move(arg);
    return Init_OtherActuatorsReport_ignition_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_front_wiper_state
{
public:
  explicit Init_OtherActuatorsReport_front_wiper_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_rear_wiper_state front_wiper_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_front_wiper_state_type arg)
  {
    msg_.front_wiper_state = std::move(arg);
    return Init_OtherActuatorsReport_rear_wiper_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_high_beam_state
{
public:
  explicit Init_OtherActuatorsReport_high_beam_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_front_wiper_state high_beam_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_high_beam_state_type arg)
  {
    msg_.high_beam_state = std::move(arg);
    return Init_OtherActuatorsReport_front_wiper_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_right_rear_door_state
{
public:
  explicit Init_OtherActuatorsReport_right_rear_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_high_beam_state right_rear_door_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_right_rear_door_state_type arg)
  {
    msg_.right_rear_door_state = std::move(arg);
    return Init_OtherActuatorsReport_high_beam_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_turn_signal_state
{
public:
  explicit Init_OtherActuatorsReport_turn_signal_state(::raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
  : msg_(msg)
  {}
  Init_OtherActuatorsReport_right_rear_door_state turn_signal_state(::raptor_dbw_msgs::msg::OtherActuatorsReport::_turn_signal_state_type arg)
  {
    msg_.turn_signal_state = std::move(arg);
    return Init_OtherActuatorsReport_right_rear_door_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

class Init_OtherActuatorsReport_header
{
public:
  Init_OtherActuatorsReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtherActuatorsReport_turn_signal_state header(::raptor_dbw_msgs::msg::OtherActuatorsReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OtherActuatorsReport_turn_signal_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::OtherActuatorsReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::OtherActuatorsReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_OtherActuatorsReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__BUILDER_HPP_
