// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/bestvel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"
// Member 'sol_status'
#include "novatel_oem7_msgs/msg/detail/solution_status__traits.hpp"
// Member 'vel_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BESTVEL & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nov_header
  {
    out << "nov_header: ";
    to_flow_style_yaml(msg.nov_header, out);
    out << ", ";
  }

  // member: sol_status
  {
    out << "sol_status: ";
    to_flow_style_yaml(msg.sol_status, out);
    out << ", ";
  }

  // member: vel_type
  {
    out << "vel_type: ";
    to_flow_style_yaml(msg.vel_type, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: hor_speed
  {
    out << "hor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.hor_speed, out);
    out << ", ";
  }

  // member: trk_gnd
  {
    out << "trk_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.trk_gnd, out);
    out << ", ";
  }

  // member: ver_speed
  {
    out << "ver_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.ver_speed, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BESTVEL & msg,
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

  // member: nov_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nov_header:\n";
    to_block_style_yaml(msg.nov_header, out, indentation + 2);
  }

  // member: sol_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol_status:\n";
    to_block_style_yaml(msg.sol_status, out, indentation + 2);
  }

  // member: vel_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_type:\n";
    to_block_style_yaml(msg.vel_type, out, indentation + 2);
  }

  // member: latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: hor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.hor_speed, out);
    out << "\n";
  }

  // member: trk_gnd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trk_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.trk_gnd, out);
    out << "\n";
  }

  // member: ver_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ver_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.ver_speed, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BESTVEL & msg, bool use_flow_style = false)
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

}  // namespace novatel_oem7_msgs

namespace rosidl_generator_traits
{

[[deprecated("use novatel_oem7_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const novatel_oem7_msgs::msg::BESTVEL & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::BESTVEL & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::BESTVEL>()
{
  return "novatel_oem7_msgs::msg::BESTVEL";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::BESTVEL>()
{
  return "novatel_oem7_msgs/msg/BESTVEL";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::BESTVEL>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_fixed_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::BESTVEL>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_bounded_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::BESTVEL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__TRAITS_HPP_
