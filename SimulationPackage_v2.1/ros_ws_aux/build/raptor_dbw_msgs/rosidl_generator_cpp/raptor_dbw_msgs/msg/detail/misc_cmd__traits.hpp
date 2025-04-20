// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/turn_signal__traits.hpp"
// Member 'door_request_right_rear'
// Member 'door_request_left_rear'
// Member 'door_request_lift_gate'
#include "raptor_dbw_msgs/msg/detail/door_request__traits.hpp"
// Member 'high_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/high_beam__traits.hpp"
// Member 'front_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_front__traits.hpp"
// Member 'rear_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__traits.hpp"
// Member 'ignition_cmd'
#include "raptor_dbw_msgs/msg/detail/ignition__traits.hpp"
// Member 'low_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/low_beam__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MiscCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    to_flow_style_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: door_request_right_rear
  {
    out << "door_request_right_rear: ";
    to_flow_style_yaml(msg.door_request_right_rear, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << ", ";
  }

  // member: high_beam_cmd
  {
    out << "high_beam_cmd: ";
    to_flow_style_yaml(msg.high_beam_cmd, out);
    out << ", ";
  }

  // member: front_wiper_cmd
  {
    out << "front_wiper_cmd: ";
    to_flow_style_yaml(msg.front_wiper_cmd, out);
    out << ", ";
  }

  // member: rear_wiper_cmd
  {
    out << "rear_wiper_cmd: ";
    to_flow_style_yaml(msg.rear_wiper_cmd, out);
    out << ", ";
  }

  // member: ignition_cmd
  {
    out << "ignition_cmd: ";
    to_flow_style_yaml(msg.ignition_cmd, out);
    out << ", ";
  }

  // member: door_request_left_rear
  {
    out << "door_request_left_rear: ";
    to_flow_style_yaml(msg.door_request_left_rear, out);
    out << ", ";
  }

  // member: door_request_lift_gate
  {
    out << "door_request_lift_gate: ";
    to_flow_style_yaml(msg.door_request_lift_gate, out);
    out << ", ";
  }

  // member: block_standard_cruise_buttons
  {
    out << "block_standard_cruise_buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.block_standard_cruise_buttons, out);
    out << ", ";
  }

  // member: block_adaptive_cruise_buttons
  {
    out << "block_adaptive_cruise_buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.block_adaptive_cruise_buttons, out);
    out << ", ";
  }

  // member: block_turn_signal_stalk
  {
    out << "block_turn_signal_stalk: ";
    rosidl_generator_traits::value_to_yaml(msg.block_turn_signal_stalk, out);
    out << ", ";
  }

  // member: horn_cmd
  {
    out << "horn_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_cmd, out);
    out << ", ";
  }

  // member: low_beam_cmd
  {
    out << "low_beam_cmd: ";
    to_flow_style_yaml(msg.low_beam_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MiscCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd:\n";
    to_block_style_yaml(msg.cmd, out, indentation + 2);
  }

  // member: door_request_right_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_request_right_rear:\n";
    to_block_style_yaml(msg.door_request_right_rear, out, indentation + 2);
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

  // member: high_beam_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_cmd:\n";
    to_block_style_yaml(msg.high_beam_cmd, out, indentation + 2);
  }

  // member: front_wiper_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wiper_cmd:\n";
    to_block_style_yaml(msg.front_wiper_cmd, out, indentation + 2);
  }

  // member: rear_wiper_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wiper_cmd:\n";
    to_block_style_yaml(msg.rear_wiper_cmd, out, indentation + 2);
  }

  // member: ignition_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition_cmd:\n";
    to_block_style_yaml(msg.ignition_cmd, out, indentation + 2);
  }

  // member: door_request_left_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_request_left_rear:\n";
    to_block_style_yaml(msg.door_request_left_rear, out, indentation + 2);
  }

  // member: door_request_lift_gate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_request_lift_gate:\n";
    to_block_style_yaml(msg.door_request_lift_gate, out, indentation + 2);
  }

  // member: block_standard_cruise_buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_standard_cruise_buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.block_standard_cruise_buttons, out);
    out << "\n";
  }

  // member: block_adaptive_cruise_buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_adaptive_cruise_buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.block_adaptive_cruise_buttons, out);
    out << "\n";
  }

  // member: block_turn_signal_stalk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_turn_signal_stalk: ";
    rosidl_generator_traits::value_to_yaml(msg.block_turn_signal_stalk, out);
    out << "\n";
  }

  // member: horn_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_cmd, out);
    out << "\n";
  }

  // member: low_beam_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam_cmd:\n";
    to_block_style_yaml(msg.low_beam_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MiscCmd & msg, bool use_flow_style = false)
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

}  // namespace raptor_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use raptor_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raptor_dbw_msgs::msg::MiscCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::MiscCmd & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::MiscCmd>()
{
  return "raptor_dbw_msgs::msg::MiscCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::MiscCmd>()
{
  return "raptor_dbw_msgs/msg/MiscCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::MiscCmd>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::DoorRequest>::value && has_fixed_size<raptor_dbw_msgs::msg::HighBeam>::value && has_fixed_size<raptor_dbw_msgs::msg::Ignition>::value && has_fixed_size<raptor_dbw_msgs::msg::LowBeam>::value && has_fixed_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_fixed_size<raptor_dbw_msgs::msg::WiperFront>::value && has_fixed_size<raptor_dbw_msgs::msg::WiperRear>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::MiscCmd>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::DoorRequest>::value && has_bounded_size<raptor_dbw_msgs::msg::HighBeam>::value && has_bounded_size<raptor_dbw_msgs::msg::Ignition>::value && has_bounded_size<raptor_dbw_msgs::msg::LowBeam>::value && has_bounded_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_bounded_size<raptor_dbw_msgs::msg::WiperFront>::value && has_bounded_size<raptor_dbw_msgs::msg::WiperRear>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::MiscCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__TRAITS_HPP_
