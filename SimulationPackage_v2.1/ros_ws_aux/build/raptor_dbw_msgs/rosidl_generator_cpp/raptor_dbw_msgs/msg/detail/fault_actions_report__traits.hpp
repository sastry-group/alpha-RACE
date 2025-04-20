// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/fault_actions_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaultActionsReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: autonomous_disabled_no_brakes
  {
    out << "autonomous_disabled_no_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_disabled_no_brakes, out);
    out << ", ";
  }

  // member: autonomous_disabled_apply_brakes
  {
    out << "autonomous_disabled_apply_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_disabled_apply_brakes, out);
    out << ", ";
  }

  // member: can_gateway_disabled
  {
    out << "can_gateway_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.can_gateway_disabled, out);
    out << ", ";
  }

  // member: inverter_contactor_disabled
  {
    out << "inverter_contactor_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.inverter_contactor_disabled, out);
    out << ", ";
  }

  // member: prevent_enter_autonomous_mode
  {
    out << "prevent_enter_autonomous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.prevent_enter_autonomous_mode, out);
    out << ", ";
  }

  // member: warn_driver_only
  {
    out << "warn_driver_only: ";
    rosidl_generator_traits::value_to_yaml(msg.warn_driver_only, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaultActionsReport & msg,
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

  // member: autonomous_disabled_no_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_disabled_no_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_disabled_no_brakes, out);
    out << "\n";
  }

  // member: autonomous_disabled_apply_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_disabled_apply_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_disabled_apply_brakes, out);
    out << "\n";
  }

  // member: can_gateway_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_gateway_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.can_gateway_disabled, out);
    out << "\n";
  }

  // member: inverter_contactor_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inverter_contactor_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.inverter_contactor_disabled, out);
    out << "\n";
  }

  // member: prevent_enter_autonomous_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prevent_enter_autonomous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.prevent_enter_autonomous_mode, out);
    out << "\n";
  }

  // member: warn_driver_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warn_driver_only: ";
    rosidl_generator_traits::value_to_yaml(msg.warn_driver_only, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaultActionsReport & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::FaultActionsReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::FaultActionsReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return "raptor_dbw_msgs::msg::FaultActionsReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return "raptor_dbw_msgs/msg/FaultActionsReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_
