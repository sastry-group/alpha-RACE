// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__TRAITS_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "npc_controller_msgs/msg/detail/npc_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace npc_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NPCDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_acceleration
  {
    out << "desired_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_acceleration, out);
    out << ", ";
  }

  // member: desired_velocity
  {
    out << "desired_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_velocity, out);
    out << ", ";
  }

  // member: current_acceleration
  {
    out << "current_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.current_acceleration, out);
    out << ", ";
  }

  // member: current_velocity
  {
    out << "current_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_velocity, out);
    out << ", ";
  }

  // member: error_acceleration
  {
    out << "error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.error_acceleration, out);
    out << ", ";
  }

  // member: error_velocity
  {
    out << "error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.error_velocity, out);
    out << ", ";
  }

  // member: output_throttle
  {
    out << "output_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.output_throttle, out);
    out << ", ";
  }

  // member: output_brake
  {
    out << "output_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.output_brake, out);
    out << ", ";
  }

  // member: vel_p
  {
    out << "vel_p: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_p, out);
    out << ", ";
  }

  // member: vel_i
  {
    out << "vel_i: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_i, out);
    out << ", ";
  }

  // member: vel_d
  {
    out << "vel_d: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d, out);
    out << ", ";
  }

  // member: thr_p
  {
    out << "thr_p: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_p, out);
    out << ", ";
  }

  // member: thr_i
  {
    out << "thr_i: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_i, out);
    out << ", ";
  }

  // member: thr_d
  {
    out << "thr_d: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_d, out);
    out << ", ";
  }

  // member: brk_p
  {
    out << "brk_p: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_p, out);
    out << ", ";
  }

  // member: brk_i
  {
    out << "brk_i: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_i, out);
    out << ", ";
  }

  // member: brk_d
  {
    out << "brk_d: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_d, out);
    out << ", ";
  }

  // member: throttle_deadband
  {
    out << "throttle_deadband: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_deadband, out);
    out << ", ";
  }

  // member: brake_deadband
  {
    out << "brake_deadband: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_deadband, out);
    out << ", ";
  }

  // member: max_throttle
  {
    out << "max_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_throttle, out);
    out << ", ";
  }

  // member: ct_state
  {
    out << "ct_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ct_state, out);
    out << ", ";
  }

  // member: vehicle_flag
  {
    out << "vehicle_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_flag, out);
    out << ", ";
  }

  // member: track_flag
  {
    out << "track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag, out);
    out << ", ";
  }

  // member: lap_state
  {
    out << "lap_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_state, out);
    out << ", ";
  }

  // member: track_loc
  {
    out << "track_loc: ";
    rosidl_generator_traits::value_to_yaml(msg.track_loc, out);
    out << ", ";
  }

  // member: center_s
  {
    out << "center_s: ";
    rosidl_generator_traits::value_to_yaml(msg.center_s, out);
    out << ", ";
  }

  // member: pit_s
  {
    out << "pit_s: ";
    rosidl_generator_traits::value_to_yaml(msg.pit_s, out);
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
  const NPCDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_acceleration, out);
    out << "\n";
  }

  // member: desired_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_velocity, out);
    out << "\n";
  }

  // member: current_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.current_acceleration, out);
    out << "\n";
  }

  // member: current_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_velocity, out);
    out << "\n";
  }

  // member: error_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.error_acceleration, out);
    out << "\n";
  }

  // member: error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.error_velocity, out);
    out << "\n";
  }

  // member: output_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.output_throttle, out);
    out << "\n";
  }

  // member: output_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.output_brake, out);
    out << "\n";
  }

  // member: vel_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_p: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_p, out);
    out << "\n";
  }

  // member: vel_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_i: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_i, out);
    out << "\n";
  }

  // member: vel_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_d: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d, out);
    out << "\n";
  }

  // member: thr_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thr_p: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_p, out);
    out << "\n";
  }

  // member: thr_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thr_i: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_i, out);
    out << "\n";
  }

  // member: thr_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thr_d: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_d, out);
    out << "\n";
  }

  // member: brk_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_p: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_p, out);
    out << "\n";
  }

  // member: brk_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_i: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_i, out);
    out << "\n";
  }

  // member: brk_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_d: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_d, out);
    out << "\n";
  }

  // member: throttle_deadband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_deadband: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_deadband, out);
    out << "\n";
  }

  // member: brake_deadband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_deadband: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_deadband, out);
    out << "\n";
  }

  // member: max_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_throttle, out);
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

  // member: vehicle_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_flag, out);
    out << "\n";
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

  // member: lap_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_state, out);
    out << "\n";
  }

  // member: track_loc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_loc: ";
    rosidl_generator_traits::value_to_yaml(msg.track_loc, out);
    out << "\n";
  }

  // member: center_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_s: ";
    rosidl_generator_traits::value_to_yaml(msg.center_s, out);
    out << "\n";
  }

  // member: pit_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pit_s: ";
    rosidl_generator_traits::value_to_yaml(msg.pit_s, out);
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

inline std::string to_yaml(const NPCDebug & msg, bool use_flow_style = false)
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
  const npc_controller_msgs::msg::NPCDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  npc_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use npc_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const npc_controller_msgs::msg::NPCDebug & msg)
{
  return npc_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<npc_controller_msgs::msg::NPCDebug>()
{
  return "npc_controller_msgs::msg::NPCDebug";
}

template<>
inline const char * name<npc_controller_msgs::msg::NPCDebug>()
{
  return "npc_controller_msgs/msg/NPCDebug";
}

template<>
struct has_fixed_size<npc_controller_msgs::msg::NPCDebug>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<npc_controller_msgs::msg::NPCDebug>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<npc_controller_msgs::msg::NPCDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__TRAITS_HPP_
