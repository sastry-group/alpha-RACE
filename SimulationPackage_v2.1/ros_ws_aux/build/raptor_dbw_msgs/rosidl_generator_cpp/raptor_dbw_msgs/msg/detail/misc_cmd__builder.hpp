// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_MiscCmd_low_beam_cmd
{
public:
  explicit Init_MiscCmd_low_beam_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::MiscCmd low_beam_cmd(::raptor_dbw_msgs::msg::MiscCmd::_low_beam_cmd_type arg)
  {
    msg_.low_beam_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_horn_cmd
{
public:
  explicit Init_MiscCmd_horn_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_low_beam_cmd horn_cmd(::raptor_dbw_msgs::msg::MiscCmd::_horn_cmd_type arg)
  {
    msg_.horn_cmd = std::move(arg);
    return Init_MiscCmd_low_beam_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_block_turn_signal_stalk
{
public:
  explicit Init_MiscCmd_block_turn_signal_stalk(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_horn_cmd block_turn_signal_stalk(::raptor_dbw_msgs::msg::MiscCmd::_block_turn_signal_stalk_type arg)
  {
    msg_.block_turn_signal_stalk = std::move(arg);
    return Init_MiscCmd_horn_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_block_adaptive_cruise_buttons
{
public:
  explicit Init_MiscCmd_block_adaptive_cruise_buttons(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_block_turn_signal_stalk block_adaptive_cruise_buttons(::raptor_dbw_msgs::msg::MiscCmd::_block_adaptive_cruise_buttons_type arg)
  {
    msg_.block_adaptive_cruise_buttons = std::move(arg);
    return Init_MiscCmd_block_turn_signal_stalk(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_block_standard_cruise_buttons
{
public:
  explicit Init_MiscCmd_block_standard_cruise_buttons(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_block_adaptive_cruise_buttons block_standard_cruise_buttons(::raptor_dbw_msgs::msg::MiscCmd::_block_standard_cruise_buttons_type arg)
  {
    msg_.block_standard_cruise_buttons = std::move(arg);
    return Init_MiscCmd_block_adaptive_cruise_buttons(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_door_request_lift_gate
{
public:
  explicit Init_MiscCmd_door_request_lift_gate(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_block_standard_cruise_buttons door_request_lift_gate(::raptor_dbw_msgs::msg::MiscCmd::_door_request_lift_gate_type arg)
  {
    msg_.door_request_lift_gate = std::move(arg);
    return Init_MiscCmd_block_standard_cruise_buttons(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_door_request_left_rear
{
public:
  explicit Init_MiscCmd_door_request_left_rear(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_door_request_lift_gate door_request_left_rear(::raptor_dbw_msgs::msg::MiscCmd::_door_request_left_rear_type arg)
  {
    msg_.door_request_left_rear = std::move(arg);
    return Init_MiscCmd_door_request_lift_gate(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_ignition_cmd
{
public:
  explicit Init_MiscCmd_ignition_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_door_request_left_rear ignition_cmd(::raptor_dbw_msgs::msg::MiscCmd::_ignition_cmd_type arg)
  {
    msg_.ignition_cmd = std::move(arg);
    return Init_MiscCmd_door_request_left_rear(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_rear_wiper_cmd
{
public:
  explicit Init_MiscCmd_rear_wiper_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_ignition_cmd rear_wiper_cmd(::raptor_dbw_msgs::msg::MiscCmd::_rear_wiper_cmd_type arg)
  {
    msg_.rear_wiper_cmd = std::move(arg);
    return Init_MiscCmd_ignition_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_front_wiper_cmd
{
public:
  explicit Init_MiscCmd_front_wiper_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_rear_wiper_cmd front_wiper_cmd(::raptor_dbw_msgs::msg::MiscCmd::_front_wiper_cmd_type arg)
  {
    msg_.front_wiper_cmd = std::move(arg);
    return Init_MiscCmd_rear_wiper_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_high_beam_cmd
{
public:
  explicit Init_MiscCmd_high_beam_cmd(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_front_wiper_cmd high_beam_cmd(::raptor_dbw_msgs::msg::MiscCmd::_high_beam_cmd_type arg)
  {
    msg_.high_beam_cmd = std::move(arg);
    return Init_MiscCmd_front_wiper_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_rolling_counter
{
public:
  explicit Init_MiscCmd_rolling_counter(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_high_beam_cmd rolling_counter(::raptor_dbw_msgs::msg::MiscCmd::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_MiscCmd_high_beam_cmd(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_door_request_right_rear
{
public:
  explicit Init_MiscCmd_door_request_right_rear(::raptor_dbw_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_rolling_counter door_request_right_rear(::raptor_dbw_msgs::msg::MiscCmd::_door_request_right_rear_type arg)
  {
    msg_.door_request_right_rear = std::move(arg);
    return Init_MiscCmd_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_cmd
{
public:
  Init_MiscCmd_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MiscCmd_door_request_right_rear cmd(::raptor_dbw_msgs::msg::MiscCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MiscCmd_door_request_right_rear(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::MiscCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::MiscCmd>()
{
  return raptor_dbw_msgs::msg::builder::Init_MiscCmd_cmd();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_
