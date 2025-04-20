// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcceleratorPedalReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pedal_input
  {
    out << "pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_input, out);
    out << ", ";
  }

  // member: pedal_output
  {
    out << "pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_output, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: ignore_driver
  {
    out << "ignore_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_driver, out);
    out << ", ";
  }

  // member: driver_activity
  {
    out << "driver_activity: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_activity, out);
    out << ", ";
  }

  // member: fault_accel_pedal_system
  {
    out << "fault_accel_pedal_system: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_accel_pedal_system, out);
    out << ", ";
  }

  // member: fault_ch1
  {
    out << "fault_ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch1, out);
    out << ", ";
  }

  // member: fault_ch2
  {
    out << "fault_ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch2, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << ", ";
  }

  // member: torque_actual
  {
    out << "torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_actual, out);
    out << ", ";
  }

  // member: control_type
  {
    out << "control_type: ";
    to_flow_style_yaml(msg.control_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcceleratorPedalReport & msg,
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

  // member: pedal_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_input, out);
    out << "\n";
  }

  // member: pedal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_output, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: ignore_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_driver, out);
    out << "\n";
  }

  // member: driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_activity: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_activity, out);
    out << "\n";
  }

  // member: fault_accel_pedal_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_accel_pedal_system: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_accel_pedal_system, out);
    out << "\n";
  }

  // member: fault_ch1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch1, out);
    out << "\n";
  }

  // member: fault_ch2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch2, out);
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

  // member: torque_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_actual, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcceleratorPedalReport & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::AcceleratorPedalReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::AcceleratorPedalReport>()
{
  return "raptor_dbw_msgs::msg::AcceleratorPedalReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::AcceleratorPedalReport>()
{
  return "raptor_dbw_msgs/msg/AcceleratorPedalReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_
