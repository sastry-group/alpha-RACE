// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/driver_input_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'turn_signal'
#include "raptor_dbw_msgs/msg/detail/turn_signal__traits.hpp"
// Member 'high_beam_headlights'
#include "raptor_dbw_msgs/msg/detail/high_beam__traits.hpp"
// Member 'wiper'
#include "raptor_dbw_msgs/msg/detail/wiper_front__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriverInputReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: turn_signal
  {
    out << "turn_signal: ";
    to_flow_style_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: high_beam_headlights
  {
    out << "high_beam_headlights: ";
    to_flow_style_yaml(msg.high_beam_headlights, out);
    out << ", ";
  }

  // member: wiper
  {
    out << "wiper: ";
    to_flow_style_yaml(msg.wiper, out);
    out << ", ";
  }

  // member: cruise_resume_button
  {
    out << "cruise_resume_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_resume_button, out);
    out << ", ";
  }

  // member: cruise_cancel_button
  {
    out << "cruise_cancel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_cancel_button, out);
    out << ", ";
  }

  // member: cruise_accel_button
  {
    out << "cruise_accel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_accel_button, out);
    out << ", ";
  }

  // member: cruise_decel_button
  {
    out << "cruise_decel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_decel_button, out);
    out << ", ";
  }

  // member: cruise_on_off_button
  {
    out << "cruise_on_off_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_on_off_button, out);
    out << ", ";
  }

  // member: adaptive_cruise_on_off_button
  {
    out << "adaptive_cruise_on_off_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_on_off_button, out);
    out << ", ";
  }

  // member: adaptive_cruise_increase_distance_button
  {
    out << "adaptive_cruise_increase_distance_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_increase_distance_button, out);
    out << ", ";
  }

  // member: adaptive_cruise_decrease_distance_button
  {
    out << "adaptive_cruise_decrease_distance_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_decrease_distance_button, out);
    out << ", ";
  }

  // member: driver_door_ajar
  {
    out << "driver_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_door_ajar, out);
    out << ", ";
  }

  // member: passenger_door_ajar
  {
    out << "passenger_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_door_ajar, out);
    out << ", ";
  }

  // member: rear_left_door_ajar
  {
    out << "rear_left_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_door_ajar, out);
    out << ", ";
  }

  // member: rear_right_door_ajar
  {
    out << "rear_right_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_door_ajar, out);
    out << ", ";
  }

  // member: liftgate_ajar
  {
    out << "liftgate_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.liftgate_ajar, out);
    out << ", ";
  }

  // member: any_seatbelt_unbuckled
  {
    out << "any_seatbelt_unbuckled: ";
    rosidl_generator_traits::value_to_yaml(msg.any_seatbelt_unbuckled, out);
    out << ", ";
  }

  // member: airbag_deployed
  {
    out << "airbag_deployed: ";
    rosidl_generator_traits::value_to_yaml(msg.airbag_deployed, out);
    out << ", ";
  }

  // member: door_or_hood_ajar
  {
    out << "door_or_hood_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.door_or_hood_ajar, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriverInputReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal:\n";
    to_block_style_yaml(msg.turn_signal, out, indentation + 2);
  }

  // member: high_beam_headlights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_headlights:\n";
    to_block_style_yaml(msg.high_beam_headlights, out, indentation + 2);
  }

  // member: wiper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper:\n";
    to_block_style_yaml(msg.wiper, out, indentation + 2);
  }

  // member: cruise_resume_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_resume_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_resume_button, out);
    out << "\n";
  }

  // member: cruise_cancel_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_cancel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_cancel_button, out);
    out << "\n";
  }

  // member: cruise_accel_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_accel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_accel_button, out);
    out << "\n";
  }

  // member: cruise_decel_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_decel_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_decel_button, out);
    out << "\n";
  }

  // member: cruise_on_off_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_on_off_button: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_on_off_button, out);
    out << "\n";
  }

  // member: adaptive_cruise_on_off_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adaptive_cruise_on_off_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_on_off_button, out);
    out << "\n";
  }

  // member: adaptive_cruise_increase_distance_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adaptive_cruise_increase_distance_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_increase_distance_button, out);
    out << "\n";
  }

  // member: adaptive_cruise_decrease_distance_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adaptive_cruise_decrease_distance_button: ";
    rosidl_generator_traits::value_to_yaml(msg.adaptive_cruise_decrease_distance_button, out);
    out << "\n";
  }

  // member: driver_door_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_door_ajar, out);
    out << "\n";
  }

  // member: passenger_door_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passenger_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_door_ajar, out);
    out << "\n";
  }

  // member: rear_left_door_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_door_ajar, out);
    out << "\n";
  }

  // member: rear_right_door_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right_door_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_door_ajar, out);
    out << "\n";
  }

  // member: liftgate_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "liftgate_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.liftgate_ajar, out);
    out << "\n";
  }

  // member: any_seatbelt_unbuckled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "any_seatbelt_unbuckled: ";
    rosidl_generator_traits::value_to_yaml(msg.any_seatbelt_unbuckled, out);
    out << "\n";
  }

  // member: airbag_deployed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airbag_deployed: ";
    rosidl_generator_traits::value_to_yaml(msg.airbag_deployed, out);
    out << "\n";
  }

  // member: door_or_hood_ajar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_or_hood_ajar: ";
    rosidl_generator_traits::value_to_yaml(msg.door_or_hood_ajar, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriverInputReport & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::DriverInputReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::DriverInputReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::DriverInputReport>()
{
  return "raptor_dbw_msgs::msg::DriverInputReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::DriverInputReport>()
{
  return "raptor_dbw_msgs/msg/DriverInputReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::DriverInputReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::HighBeam>::value && has_fixed_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_fixed_size<raptor_dbw_msgs::msg::WiperFront>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::DriverInputReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::HighBeam>::value && has_bounded_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_bounded_size<raptor_dbw_msgs::msg::WiperFront>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::DriverInputReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__TRAITS_HPP_
