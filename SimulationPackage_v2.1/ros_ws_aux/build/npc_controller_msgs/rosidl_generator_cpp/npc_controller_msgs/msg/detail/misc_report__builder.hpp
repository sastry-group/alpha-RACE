// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/misc_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_MiscReport_sys_state
{
public:
  explicit Init_MiscReport_sys_state(::npc_controller_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::MiscReport sys_state(::npc_controller_msgs::msg::MiscReport::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_mode_switch_state
{
public:
  explicit Init_MiscReport_mode_switch_state(::npc_controller_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_sys_state mode_switch_state(::npc_controller_msgs::msg::MiscReport::_mode_switch_state_type arg)
  {
    msg_.mode_switch_state = std::move(arg);
    return Init_MiscReport_sys_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_safety_switch_state
{
public:
  explicit Init_MiscReport_safety_switch_state(::npc_controller_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_mode_switch_state safety_switch_state(::npc_controller_msgs::msg::MiscReport::_safety_switch_state_type arg)
  {
    msg_.safety_switch_state = std::move(arg);
    return Init_MiscReport_mode_switch_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_off_grid_power_connection
{
public:
  explicit Init_MiscReport_off_grid_power_connection(::npc_controller_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_safety_switch_state off_grid_power_connection(::npc_controller_msgs::msg::MiscReport::_off_grid_power_connection_type arg)
  {
    msg_.off_grid_power_connection = std::move(arg);
    return Init_MiscReport_safety_switch_state(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_battery_voltage
{
public:
  explicit Init_MiscReport_battery_voltage(::npc_controller_msgs::msg::MiscReport & msg)
  : msg_(msg)
  {}
  Init_MiscReport_off_grid_power_connection battery_voltage(::npc_controller_msgs::msg::MiscReport::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_MiscReport_off_grid_power_connection(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

class Init_MiscReport_stamp
{
public:
  Init_MiscReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MiscReport_battery_voltage stamp(::npc_controller_msgs::msg::MiscReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MiscReport_battery_voltage(msg_);
  }

private:
  ::npc_controller_msgs::msg::MiscReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::MiscReport>()
{
  return npc_controller_msgs::msg::builder::Init_MiscReport_stamp();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__BUILDER_HPP_
