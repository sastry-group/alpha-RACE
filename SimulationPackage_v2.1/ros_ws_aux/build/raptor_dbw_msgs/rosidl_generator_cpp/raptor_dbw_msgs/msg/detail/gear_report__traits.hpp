// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/gear_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "raptor_dbw_msgs/msg/detail/gear__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GearReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: reject
  {
    out << "reject: ";
    rosidl_generator_traits::value_to_yaml(msg.reject, out);
    out << ", ";
  }

  // member: driver_activity
  {
    out << "driver_activity: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_activity, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: gear_select_system_fault
  {
    out << "gear_select_system_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_select_system_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GearReport & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: reject
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject: ";
    rosidl_generator_traits::value_to_yaml(msg.reject, out);
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

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: gear_select_system_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_select_system_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_select_system_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GearReport & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::GearReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::GearReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::GearReport>()
{
  return "raptor_dbw_msgs::msg::GearReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::GearReport>()
{
  return "raptor_dbw_msgs/msg/GearReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::GearReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::Gear>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::GearReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::Gear>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::GearReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
