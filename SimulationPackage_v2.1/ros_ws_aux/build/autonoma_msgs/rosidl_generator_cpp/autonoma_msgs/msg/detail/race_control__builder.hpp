// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/RaceControl.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/race_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_RaceControl_time_stamp
{
public:
  explicit Init_RaceControl_time_stamp(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::RaceControl time_stamp(::autonoma_msgs::msg::RaceControl::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_lap_time
{
public:
  explicit Init_RaceControl_lap_time(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_time_stamp lap_time(::autonoma_msgs::msg::RaceControl::_lap_time_type arg)
  {
    msg_.lap_time = std::move(arg);
    return Init_RaceControl_time_stamp(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_laps
{
public:
  explicit Init_RaceControl_laps(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_lap_time laps(::autonoma_msgs::msg::RaceControl::_laps_type arg)
  {
    msg_.laps = std::move(arg);
    return Init_RaceControl_lap_time(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_round_target_speed
{
public:
  explicit Init_RaceControl_round_target_speed(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_laps round_target_speed(::autonoma_msgs::msg::RaceControl::_round_target_speed_type arg)
  {
    msg_.round_target_speed = std::move(arg);
    return Init_RaceControl_laps(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_lap_distance
{
public:
  explicit Init_RaceControl_lap_distance(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_round_target_speed lap_distance(::autonoma_msgs::msg::RaceControl::_lap_distance_type arg)
  {
    msg_.lap_distance = std::move(arg);
    return Init_RaceControl_round_target_speed(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_lap_count
{
public:
  explicit Init_RaceControl_lap_count(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_lap_distance lap_count(::autonoma_msgs::msg::RaceControl::_lap_count_type arg)
  {
    msg_.lap_count = std::move(arg);
    return Init_RaceControl_lap_distance(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_sys_state
{
public:
  explicit Init_RaceControl_sys_state(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_lap_count sys_state(::autonoma_msgs::msg::RaceControl::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return Init_RaceControl_lap_count(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_veh_rank
{
public:
  explicit Init_RaceControl_veh_rank(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_sys_state veh_rank(::autonoma_msgs::msg::RaceControl::_veh_rank_type arg)
  {
    msg_.veh_rank = std::move(arg);
    return Init_RaceControl_sys_state(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_veh_flag
{
public:
  explicit Init_RaceControl_veh_flag(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_veh_rank veh_flag(::autonoma_msgs::msg::RaceControl::_veh_flag_type arg)
  {
    msg_.veh_flag = std::move(arg);
    return Init_RaceControl_veh_rank(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_track_flag
{
public:
  explicit Init_RaceControl_track_flag(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_veh_flag track_flag(::autonoma_msgs::msg::RaceControl::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_RaceControl_veh_flag(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_base_to_car_heartbeat
{
public:
  explicit Init_RaceControl_base_to_car_heartbeat(::autonoma_msgs::msg::RaceControl & msg)
  : msg_(msg)
  {}
  Init_RaceControl_track_flag base_to_car_heartbeat(::autonoma_msgs::msg::RaceControl::_base_to_car_heartbeat_type arg)
  {
    msg_.base_to_car_heartbeat = std::move(arg);
    return Init_RaceControl_track_flag(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

class Init_RaceControl_header
{
public:
  Init_RaceControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaceControl_base_to_car_heartbeat header(::autonoma_msgs::msg::RaceControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RaceControl_base_to_car_heartbeat(msg_);
  }

private:
  ::autonoma_msgs::msg::RaceControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::RaceControl>()
{
  return autonoma_msgs::msg::builder::Init_RaceControl_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__BUILDER_HPP_
