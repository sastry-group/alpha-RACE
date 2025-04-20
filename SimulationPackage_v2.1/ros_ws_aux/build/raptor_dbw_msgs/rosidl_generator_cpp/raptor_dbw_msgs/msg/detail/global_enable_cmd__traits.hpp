// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalEnableCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_enable
  {
    out << "global_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.global_enable, out);
    out << ", ";
  }

  // member: enable_joystick_limits
  {
    out << "enable_joystick_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_joystick_limits, out);
    out << ", ";
  }

  // member: ecu_build_number
  {
    out << "ecu_build_number: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_build_number, out);
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
  const GlobalEnableCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.global_enable, out);
    out << "\n";
  }

  // member: enable_joystick_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_joystick_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_joystick_limits, out);
    out << "\n";
  }

  // member: ecu_build_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_build_number: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_build_number, out);
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

inline std::string to_yaml(const GlobalEnableCmd & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::GlobalEnableCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::GlobalEnableCmd & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::GlobalEnableCmd>()
{
  return "raptor_dbw_msgs::msg::GlobalEnableCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::GlobalEnableCmd>()
{
  return "raptor_dbw_msgs/msg/GlobalEnableCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::GlobalEnableCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::GlobalEnableCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raptor_dbw_msgs::msg::GlobalEnableCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__TRAITS_HPP_
