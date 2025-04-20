// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/brake_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__traits.hpp"
// Member 'park_brake_cmd'
#include "raptor_dbw_msgs/msg/detail/parking_brake__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrakeCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: pedal_cmd
  {
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << ", ";
  }

  // member: torque_cmd
  {
    out << "torque_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_cmd, out);
    out << ", ";
  }

  // member: decel_limit
  {
    out << "decel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit, out);
    out << ", ";
  }

  // member: control_type
  {
    out << "control_type: ";
    to_flow_style_yaml(msg.control_type, out);
    out << ", ";
  }

  // member: decel_negative_jerk_limit
  {
    out << "decel_negative_jerk_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_negative_jerk_limit, out);
    out << ", ";
  }

  // member: park_brake_cmd
  {
    out << "park_brake_cmd: ";
    to_flow_style_yaml(msg.park_brake_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrakeCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pedal_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
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

  // member: torque_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_cmd, out);
    out << "\n";
  }

  // member: decel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit, out);
    out << "\n";
  }

  // member: control_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_type:\n";
    to_block_style_yaml(msg.control_type, out, indentation + 2);
  }

  // member: decel_negative_jerk_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_negative_jerk_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_negative_jerk_limit, out);
    out << "\n";
  }

  // member: park_brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_brake_cmd:\n";
    to_block_style_yaml(msg.park_brake_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrakeCmd & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::BrakeCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::BrakeCmd & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::BrakeCmd>()
{
  return "raptor_dbw_msgs::msg::BrakeCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::BrakeCmd>()
{
  return "raptor_dbw_msgs/msg/BrakeCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::BrakeCmd>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_fixed_size<raptor_dbw_msgs::msg::ParkingBrake>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::BrakeCmd>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_bounded_size<raptor_dbw_msgs::msg::ParkingBrake>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::BrakeCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_
