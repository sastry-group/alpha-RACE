// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "npc_controller_msgs/msg/detail/misc_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace npc_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MiscReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: off_grid_power_connection
  {
    out << "off_grid_power_connection: ";
    rosidl_generator_traits::value_to_yaml(msg.off_grid_power_connection, out);
    out << ", ";
  }

  // member: safety_switch_state
  {
    out << "safety_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_state, out);
    out << ", ";
  }

  // member: mode_switch_state
  {
    out << "mode_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_switch_state, out);
    out << ", ";
  }

  // member: sys_state
  {
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MiscReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: off_grid_power_connection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "off_grid_power_connection: ";
    rosidl_generator_traits::value_to_yaml(msg.off_grid_power_connection, out);
    out << "\n";
  }

  // member: safety_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_state, out);
    out << "\n";
  }

  // member: mode_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_switch_state, out);
    out << "\n";
  }

  // member: sys_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MiscReport & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace npc_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use npc_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const npc_controller_msgs::msg::MiscReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  npc_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use npc_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const npc_controller_msgs::msg::MiscReport & msg)
{
  return npc_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<npc_controller_msgs::msg::MiscReport>()
{
  return "npc_controller_msgs::msg::MiscReport";
}

template<>
inline const char * name<npc_controller_msgs::msg::MiscReport>()
{
  return "npc_controller_msgs/msg/MiscReport";
}

template<>
struct has_fixed_size<npc_controller_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<npc_controller_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<npc_controller_msgs::msg::MiscReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
