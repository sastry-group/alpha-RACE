// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Oem7Header & msg,
  std::ostream & out)
{
  out << "{";
  // member: message_name
  {
    out << "message_name: ";
    rosidl_generator_traits::value_to_yaml(msg.message_name, out);
    out << ", ";
  }

  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: sequence_number
  {
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << ", ";
  }

  // member: time_status
  {
    out << "time_status: ";
    rosidl_generator_traits::value_to_yaml(msg.time_status, out);
    out << ", ";
  }

  // member: gps_week_number
  {
    out << "gps_week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_number, out);
    out << ", ";
  }

  // member: gps_week_milliseconds
  {
    out << "gps_week_milliseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_milliseconds, out);
    out << ", ";
  }

  // member: idle_time
  {
    out << "idle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Oem7Header & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_name: ";
    rosidl_generator_traits::value_to_yaml(msg.message_name, out);
    out << "\n";
  }

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: sequence_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << "\n";
  }

  // member: time_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_status: ";
    rosidl_generator_traits::value_to_yaml(msg.time_status, out);
    out << "\n";
  }

  // member: gps_week_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_number, out);
    out << "\n";
  }

  // member: gps_week_milliseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_week_milliseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_milliseconds, out);
    out << "\n";
  }

  // member: idle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Oem7Header & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::Oem7Header & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::Oem7Header & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::Oem7Header>()
{
  return "novatel_oem7_msgs::msg::Oem7Header";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::Oem7Header>()
{
  return "novatel_oem7_msgs/msg/Oem7Header";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<novatel_oem7_msgs::msg::Oem7Header>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__TRAITS_HPP_
