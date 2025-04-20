// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/npc_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_NPCDebug_sys_state
{
public:
  explicit Init_NPCDebug_sys_state(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::NPCDebug sys_state(::npc_controller_msgs::msg::NPCDebug::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_pit_s
{
public:
  explicit Init_NPCDebug_pit_s(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_sys_state pit_s(::npc_controller_msgs::msg::NPCDebug::_pit_s_type arg)
  {
    msg_.pit_s = std::move(arg);
    return Init_NPCDebug_sys_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_center_s
{
public:
  explicit Init_NPCDebug_center_s(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_pit_s center_s(::npc_controller_msgs::msg::NPCDebug::_center_s_type arg)
  {
    msg_.center_s = std::move(arg);
    return Init_NPCDebug_pit_s(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_track_loc
{
public:
  explicit Init_NPCDebug_track_loc(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_center_s track_loc(::npc_controller_msgs::msg::NPCDebug::_track_loc_type arg)
  {
    msg_.track_loc = std::move(arg);
    return Init_NPCDebug_center_s(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_lap_state
{
public:
  explicit Init_NPCDebug_lap_state(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_track_loc lap_state(::npc_controller_msgs::msg::NPCDebug::_lap_state_type arg)
  {
    msg_.lap_state = std::move(arg);
    return Init_NPCDebug_track_loc(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_track_flag
{
public:
  explicit Init_NPCDebug_track_flag(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_lap_state track_flag(::npc_controller_msgs::msg::NPCDebug::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_NPCDebug_lap_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_vehicle_flag
{
public:
  explicit Init_NPCDebug_vehicle_flag(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_track_flag vehicle_flag(::npc_controller_msgs::msg::NPCDebug::_vehicle_flag_type arg)
  {
    msg_.vehicle_flag = std::move(arg);
    return Init_NPCDebug_track_flag(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_ct_state
{
public:
  explicit Init_NPCDebug_ct_state(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_vehicle_flag ct_state(::npc_controller_msgs::msg::NPCDebug::_ct_state_type arg)
  {
    msg_.ct_state = std::move(arg);
    return Init_NPCDebug_vehicle_flag(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_max_throttle
{
public:
  explicit Init_NPCDebug_max_throttle(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_ct_state max_throttle(::npc_controller_msgs::msg::NPCDebug::_max_throttle_type arg)
  {
    msg_.max_throttle = std::move(arg);
    return Init_NPCDebug_ct_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_brake_deadband
{
public:
  explicit Init_NPCDebug_brake_deadband(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_max_throttle brake_deadband(::npc_controller_msgs::msg::NPCDebug::_brake_deadband_type arg)
  {
    msg_.brake_deadband = std::move(arg);
    return Init_NPCDebug_max_throttle(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_throttle_deadband
{
public:
  explicit Init_NPCDebug_throttle_deadband(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_brake_deadband throttle_deadband(::npc_controller_msgs::msg::NPCDebug::_throttle_deadband_type arg)
  {
    msg_.throttle_deadband = std::move(arg);
    return Init_NPCDebug_brake_deadband(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_brk_d
{
public:
  explicit Init_NPCDebug_brk_d(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_throttle_deadband brk_d(::npc_controller_msgs::msg::NPCDebug::_brk_d_type arg)
  {
    msg_.brk_d = std::move(arg);
    return Init_NPCDebug_throttle_deadband(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_brk_i
{
public:
  explicit Init_NPCDebug_brk_i(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_brk_d brk_i(::npc_controller_msgs::msg::NPCDebug::_brk_i_type arg)
  {
    msg_.brk_i = std::move(arg);
    return Init_NPCDebug_brk_d(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_brk_p
{
public:
  explicit Init_NPCDebug_brk_p(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_brk_i brk_p(::npc_controller_msgs::msg::NPCDebug::_brk_p_type arg)
  {
    msg_.brk_p = std::move(arg);
    return Init_NPCDebug_brk_i(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_thr_d
{
public:
  explicit Init_NPCDebug_thr_d(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_brk_p thr_d(::npc_controller_msgs::msg::NPCDebug::_thr_d_type arg)
  {
    msg_.thr_d = std::move(arg);
    return Init_NPCDebug_brk_p(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_thr_i
{
public:
  explicit Init_NPCDebug_thr_i(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_thr_d thr_i(::npc_controller_msgs::msg::NPCDebug::_thr_i_type arg)
  {
    msg_.thr_i = std::move(arg);
    return Init_NPCDebug_thr_d(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_thr_p
{
public:
  explicit Init_NPCDebug_thr_p(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_thr_i thr_p(::npc_controller_msgs::msg::NPCDebug::_thr_p_type arg)
  {
    msg_.thr_p = std::move(arg);
    return Init_NPCDebug_thr_i(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_vel_d
{
public:
  explicit Init_NPCDebug_vel_d(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_thr_p vel_d(::npc_controller_msgs::msg::NPCDebug::_vel_d_type arg)
  {
    msg_.vel_d = std::move(arg);
    return Init_NPCDebug_thr_p(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_vel_i
{
public:
  explicit Init_NPCDebug_vel_i(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_vel_d vel_i(::npc_controller_msgs::msg::NPCDebug::_vel_i_type arg)
  {
    msg_.vel_i = std::move(arg);
    return Init_NPCDebug_vel_d(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_vel_p
{
public:
  explicit Init_NPCDebug_vel_p(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_vel_i vel_p(::npc_controller_msgs::msg::NPCDebug::_vel_p_type arg)
  {
    msg_.vel_p = std::move(arg);
    return Init_NPCDebug_vel_i(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_output_brake
{
public:
  explicit Init_NPCDebug_output_brake(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_vel_p output_brake(::npc_controller_msgs::msg::NPCDebug::_output_brake_type arg)
  {
    msg_.output_brake = std::move(arg);
    return Init_NPCDebug_vel_p(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_output_throttle
{
public:
  explicit Init_NPCDebug_output_throttle(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_output_brake output_throttle(::npc_controller_msgs::msg::NPCDebug::_output_throttle_type arg)
  {
    msg_.output_throttle = std::move(arg);
    return Init_NPCDebug_output_brake(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_error_velocity
{
public:
  explicit Init_NPCDebug_error_velocity(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_output_throttle error_velocity(::npc_controller_msgs::msg::NPCDebug::_error_velocity_type arg)
  {
    msg_.error_velocity = std::move(arg);
    return Init_NPCDebug_output_throttle(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_error_acceleration
{
public:
  explicit Init_NPCDebug_error_acceleration(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_error_velocity error_acceleration(::npc_controller_msgs::msg::NPCDebug::_error_acceleration_type arg)
  {
    msg_.error_acceleration = std::move(arg);
    return Init_NPCDebug_error_velocity(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_current_velocity
{
public:
  explicit Init_NPCDebug_current_velocity(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_error_acceleration current_velocity(::npc_controller_msgs::msg::NPCDebug::_current_velocity_type arg)
  {
    msg_.current_velocity = std::move(arg);
    return Init_NPCDebug_error_acceleration(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_current_acceleration
{
public:
  explicit Init_NPCDebug_current_acceleration(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_current_velocity current_acceleration(::npc_controller_msgs::msg::NPCDebug::_current_acceleration_type arg)
  {
    msg_.current_acceleration = std::move(arg);
    return Init_NPCDebug_current_velocity(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_desired_velocity
{
public:
  explicit Init_NPCDebug_desired_velocity(::npc_controller_msgs::msg::NPCDebug & msg)
  : msg_(msg)
  {}
  Init_NPCDebug_current_acceleration desired_velocity(::npc_controller_msgs::msg::NPCDebug::_desired_velocity_type arg)
  {
    msg_.desired_velocity = std::move(arg);
    return Init_NPCDebug_current_acceleration(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

class Init_NPCDebug_desired_acceleration
{
public:
  Init_NPCDebug_desired_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NPCDebug_desired_velocity desired_acceleration(::npc_controller_msgs::msg::NPCDebug::_desired_acceleration_type arg)
  {
    msg_.desired_acceleration = std::move(arg);
    return Init_NPCDebug_desired_velocity(msg_);
  }

private:
  ::npc_controller_msgs::msg::NPCDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::NPCDebug>()
{
  return npc_controller_msgs::msg::builder::Init_NPCDebug_desired_acceleration();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__BUILDER_HPP_
