// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/IMURATECORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/imuratecorrimu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMURATECORRIMU & msg,
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

  // member: week
  {
    out << "week: ";
    rosidl_generator_traits::value_to_yaml(msg.week, out);
    out << ", ";
  }

  // member: seconds
  {
    out << "seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: lateral_acc
  {
    out << "lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acc, out);
    out << ", ";
  }

  // member: longitudinal_acc
  {
    out << "longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_acc, out);
    out << ", ";
  }

  // member: vertical_acc
  {
    out << "vertical_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_acc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMURATECORRIMU & msg,
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

  // member: week
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "week: ";
    rosidl_generator_traits::value_to_yaml(msg.week, out);
    out << "\n";
  }

  // member: seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: lateral_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acc, out);
    out << "\n";
  }

  // member: longitudinal_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_acc, out);
    out << "\n";
  }

  // member: vertical_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_acc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMURATECORRIMU & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::IMURATECORRIMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::IMURATECORRIMU & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::IMURATECORRIMU>()
{
  return "novatel_oem7_msgs::msg::IMURATECORRIMU";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::IMURATECORRIMU>()
{
  return "novatel_oem7_msgs/msg/IMURATECORRIMU";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::IMURATECORRIMU>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::IMURATECORRIMU>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::IMURATECORRIMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__TRAITS_HPP_
