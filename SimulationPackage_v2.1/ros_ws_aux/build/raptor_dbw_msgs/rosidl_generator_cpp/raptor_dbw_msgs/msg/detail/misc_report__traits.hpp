// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/misc_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MiscReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fuel_level
  {
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << ", ";
  }

  // member: drive_by_wire_enabled
  {
    out << "drive_by_wire_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_by_wire_enabled, out);
    out << ", ";
  }

  // member: vehicle_speed
  {
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << ", ";
  }

  // member: software_build_number
  {
    out << "software_build_number: ";
    rosidl_generator_traits::value_to_yaml(msg.software_build_number, out);
    out << ", ";
  }

  // member: general_actuator_fault
  {
    out << "general_actuator_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.general_actuator_fault, out);
    out << ", ";
  }

  // member: by_wire_ready
  {
    out << "by_wire_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.by_wire_ready, out);
    out << ", ";
  }

  // member: general_driver_activity
  {
    out << "general_driver_activity: ";
    rosidl_generator_traits::value_to_yaml(msg.general_driver_activity, out);
    out << ", ";
  }

  // member: comms_fault
  {
    out << "comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.comms_fault, out);
    out << ", ";
  }

  // member: ambient_temp
  {
    out << "ambient_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MiscReport & msg,
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

  // member: fuel_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << "\n";
  }

  // member: drive_by_wire_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_by_wire_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_by_wire_enabled, out);
    out << "\n";
  }

  // member: vehicle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << "\n";
  }

  // member: software_build_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_build_number: ";
    rosidl_generator_traits::value_to_yaml(msg.software_build_number, out);
    out << "\n";
  }

  // member: general_actuator_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general_actuator_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.general_actuator_fault, out);
    out << "\n";
  }

  // member: by_wire_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "by_wire_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.by_wire_ready, out);
    out << "\n";
  }

  // member: general_driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general_driver_activity: ";
    rosidl_generator_traits::value_to_yaml(msg.general_driver_activity, out);
    out << "\n";
  }

  // member: comms_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.comms_fault, out);
    out << "\n";
  }

  // member: ambient_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temp, out);
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

}  // namespace raptor_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use raptor_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raptor_dbw_msgs::msg::MiscReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::MiscReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::MiscReport>()
{
  return "raptor_dbw_msgs::msg::MiscReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::MiscReport>()
{
  return "raptor_dbw_msgs/msg/MiscReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::MiscReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
