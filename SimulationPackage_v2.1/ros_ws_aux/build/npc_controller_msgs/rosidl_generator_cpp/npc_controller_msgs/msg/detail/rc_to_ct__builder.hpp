// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/rc_to_ct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_RcToCt_rolling_counter
{
public:
  explicit Init_RcToCt_rolling_counter(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::RcToCt rolling_counter(::npc_controller_msgs::msg::RcToCt::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_target_speed
{
public:
  explicit Init_RcToCt_target_speed(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_rolling_counter target_speed(::npc_controller_msgs::msg::RcToCt::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_RcToCt_rolling_counter(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_lap_distance
{
public:
  explicit Init_RcToCt_lap_distance(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_target_speed lap_distance(::npc_controller_msgs::msg::RcToCt::_lap_distance_type arg)
  {
    msg_.lap_distance = std::move(arg);
    return Init_RcToCt_target_speed(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_lap_count
{
public:
  explicit Init_RcToCt_lap_count(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_lap_distance lap_count(::npc_controller_msgs::msg::RcToCt::_lap_count_type arg)
  {
    msg_.lap_count = std::move(arg);
    return Init_RcToCt_lap_distance(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_veh_rank
{
public:
  explicit Init_RcToCt_veh_rank(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_lap_count veh_rank(::npc_controller_msgs::msg::RcToCt::_veh_rank_type arg)
  {
    msg_.veh_rank = std::move(arg);
    return Init_RcToCt_lap_count(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_veh_flag
{
public:
  explicit Init_RcToCt_veh_flag(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_veh_rank veh_flag(::npc_controller_msgs::msg::RcToCt::_veh_flag_type arg)
  {
    msg_.veh_flag = std::move(arg);
    return Init_RcToCt_veh_rank(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_track_flag
{
public:
  explicit Init_RcToCt_track_flag(::npc_controller_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_veh_flag track_flag(::npc_controller_msgs::msg::RcToCt::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_RcToCt_veh_flag(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_stamp
{
public:
  Init_RcToCt_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcToCt_track_flag stamp(::npc_controller_msgs::msg::RcToCt::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RcToCt_track_flag(msg_);
  }

private:
  ::npc_controller_msgs::msg::RcToCt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::RcToCt>()
{
  return npc_controller_msgs::msg::builder::Init_RcToCt_stamp();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_
