// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/ct_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_CtReport_rolling_counter
{
public:
  explicit Init_CtReport_rolling_counter(::npc_controller_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::CtReport rolling_counter(::npc_controller_msgs::msg::CtReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

class Init_CtReport_target_speed
{
public:
  explicit Init_CtReport_target_speed(::npc_controller_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_rolling_counter target_speed(::npc_controller_msgs::msg::CtReport::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_CtReport_rolling_counter(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

class Init_CtReport_ct_state
{
public:
  explicit Init_CtReport_ct_state(::npc_controller_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_target_speed ct_state(::npc_controller_msgs::msg::CtReport::_ct_state_type arg)
  {
    msg_.ct_state = std::move(arg);
    return Init_CtReport_target_speed(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

class Init_CtReport_veh_flag_ack
{
public:
  explicit Init_CtReport_veh_flag_ack(::npc_controller_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_ct_state veh_flag_ack(::npc_controller_msgs::msg::CtReport::_veh_flag_ack_type arg)
  {
    msg_.veh_flag_ack = std::move(arg);
    return Init_CtReport_ct_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

class Init_CtReport_track_flag_ack
{
public:
  explicit Init_CtReport_track_flag_ack(::npc_controller_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_veh_flag_ack track_flag_ack(::npc_controller_msgs::msg::CtReport::_track_flag_ack_type arg)
  {
    msg_.track_flag_ack = std::move(arg);
    return Init_CtReport_veh_flag_ack(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

class Init_CtReport_stamp
{
public:
  Init_CtReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtReport_track_flag_ack stamp(::npc_controller_msgs::msg::CtReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CtReport_track_flag_ack(msg_);
  }

private:
  ::npc_controller_msgs::msg::CtReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::CtReport>()
{
  return npc_controller_msgs::msg::builder::Init_CtReport_stamp();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_
