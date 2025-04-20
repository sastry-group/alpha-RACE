// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/Brake2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/brake2_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Brake2Report & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: front_brake_pressure
  {
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << ", ";
  }

  // member: rear_brake_pressure
  {
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << ", ";
  }

  // member: estimated_road_slope
  {
    out << "estimated_road_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_road_slope, out);
    out << ", ";
  }

  // member: speed_set_point
  {
    out << "speed_set_point: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_set_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Brake2Report & msg,
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

  // member: front_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << "\n";
  }

  // member: rear_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
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

  // member: estimated_road_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_road_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_road_slope, out);
    out << "\n";
  }

  // member: speed_set_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_set_point: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_set_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Brake2Report & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::Brake2Report & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::Brake2Report & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::Brake2Report>()
{
  return "raptor_dbw_msgs::msg::Brake2Report";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::Brake2Report>()
{
  return "raptor_dbw_msgs/msg/Brake2Report";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::Brake2Report>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::Brake2Report>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::Brake2Report>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_
