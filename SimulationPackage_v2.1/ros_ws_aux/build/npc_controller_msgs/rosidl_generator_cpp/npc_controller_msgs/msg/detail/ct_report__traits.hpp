// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from npc_controller_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "npc_controller_msgs/msg/detail/ct_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace npc_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CtReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: track_flag_ack
  {
    out << "track_flag_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag_ack, out);
    out << ", ";
  }

  // member: veh_flag_ack
  {
    out << "veh_flag_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag_ack, out);
    out << ", ";
  }

  // member: ct_state
  {
    out << "ct_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ct_state, out);
    out << ", ";
  }

  // member: target_speed
  {
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CtReport & msg,
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

  // member: track_flag_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_flag_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag_ack, out);
    out << "\n";
  }

  // member: veh_flag_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_flag_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag_ack, out);
    out << "\n";
  }

  // member: ct_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ct_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ct_state, out);
    out << "\n";
  }

  // member: target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << "\n";
  }

  // member: rolling_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CtReport & msg, bool use_flow_style = false)
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
  const npc_controller_msgs::msg::CtReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  npc_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use npc_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const npc_controller_msgs::msg::CtReport & msg)
{
  return npc_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<npc_controller_msgs::msg::CtReport>()
{
  return "npc_controller_msgs::msg::CtReport";
}

template<>
inline const char * name<npc_controller_msgs::msg::CtReport>()
{
  return "npc_controller_msgs/msg/CtReport";
}

template<>
struct has_fixed_size<npc_controller_msgs::msg::CtReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<npc_controller_msgs::msg::CtReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<npc_controller_msgs::msg::CtReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_
