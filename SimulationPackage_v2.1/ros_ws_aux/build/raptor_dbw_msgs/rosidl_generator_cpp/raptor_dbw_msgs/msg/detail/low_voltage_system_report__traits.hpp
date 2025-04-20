// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/low_voltage_system_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowVoltageSystemReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dbw_battery_volts
  {
    out << "dbw_battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_battery_volts, out);
    out << ", ";
  }

  // member: vehicle_battery_volts
  {
    out << "vehicle_battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_battery_volts, out);
    out << ", ";
  }

  // member: vehicle_battery_current
  {
    out << "vehicle_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_battery_current, out);
    out << ", ";
  }

  // member: vehicle_alternator_current
  {
    out << "vehicle_alternator_current: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_alternator_current, out);
    out << ", ";
  }

  // member: dcdc_current
  {
    out << "dcdc_current: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_current, out);
    out << ", ";
  }

  // member: alternator_current
  {
    out << "alternator_current: ";
    rosidl_generator_traits::value_to_yaml(msg.alternator_current, out);
    out << ", ";
  }

  // member: aux_inverter_contactor
  {
    out << "aux_inverter_contactor: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_inverter_contactor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LowVoltageSystemReport & msg,
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

  // member: dbw_battery_volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dbw_battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_battery_volts, out);
    out << "\n";
  }

  // member: vehicle_battery_volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_battery_volts, out);
    out << "\n";
  }

  // member: vehicle_battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_battery_current, out);
    out << "\n";
  }

  // member: vehicle_alternator_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_alternator_current: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_alternator_current, out);
    out << "\n";
  }

  // member: dcdc_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_current: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_current, out);
    out << "\n";
  }

  // member: alternator_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternator_current: ";
    rosidl_generator_traits::value_to_yaml(msg.alternator_current, out);
    out << "\n";
  }

  // member: aux_inverter_contactor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_inverter_contactor: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_inverter_contactor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LowVoltageSystemReport & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::LowVoltageSystemReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::LowVoltageSystemReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::LowVoltageSystemReport>()
{
  return "raptor_dbw_msgs::msg::LowVoltageSystemReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::LowVoltageSystemReport>()
{
  return "raptor_dbw_msgs/msg/LowVoltageSystemReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::LowVoltageSystemReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::LowVoltageSystemReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::LowVoltageSystemReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__TRAITS_HPP_
