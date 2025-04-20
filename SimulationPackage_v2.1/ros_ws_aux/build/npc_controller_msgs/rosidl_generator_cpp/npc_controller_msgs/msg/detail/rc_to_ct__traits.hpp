// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from npc_controller_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__TRAITS_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "npc_controller_msgs/msg/detail/rc_to_ct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace npc_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RcToCt & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: track_flag
  {
    out << "track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag, out);
    out << ", ";
  }

  // member: veh_flag
  {
    out << "veh_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag, out);
    out << ", ";
  }

  // member: veh_rank
  {
    out << "veh_rank: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_rank, out);
    out << ", ";
  }

  // member: lap_count
  {
    out << "lap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_count, out);
    out << ", ";
  }

  // member: lap_distance
  {
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
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
  const RcToCt & msg,
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

  // member: track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag, out);
    out << "\n";
  }

  // member: veh_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag, out);
    out << "\n";
  }

  // member: veh_rank
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_rank: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_rank, out);
    out << "\n";
  }

  // member: lap_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_count, out);
    out << "\n";
  }

  // member: lap_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
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

inline std::string to_yaml(const RcToCt & msg, bool use_flow_style = false)
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
  const npc_controller_msgs::msg::RcToCt & msg,
  std::ostream & out, size_t indentation = 0)
{
  npc_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use npc_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const npc_controller_msgs::msg::RcToCt & msg)
{
  return npc_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<npc_controller_msgs::msg::RcToCt>()
{
  return "npc_controller_msgs::msg::RcToCt";
}

template<>
inline const char * name<npc_controller_msgs::msg::RcToCt>()
{
  return "npc_controller_msgs/msg/RcToCt";
}

template<>
struct has_fixed_size<npc_controller_msgs::msg::RcToCt>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<npc_controller_msgs::msg::RcToCt>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<npc_controller_msgs::msg::RcToCt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__TRAITS_HPP_
