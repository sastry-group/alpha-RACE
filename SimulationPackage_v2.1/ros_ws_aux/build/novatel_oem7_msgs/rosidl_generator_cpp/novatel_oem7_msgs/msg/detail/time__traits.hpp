// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/TIME.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/time__struct.hpp"
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
  const TIME & msg,
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

  // member: clock_status
  {
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: offset_std
  {
    out << "offset_std: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_std, out);
    out << ", ";
  }

  // member: utc_offset
  {
    out << "utc_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_offset, out);
    out << ", ";
  }

  // member: utc_year
  {
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << ", ";
  }

  // member: utc_month
  {
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << ", ";
  }

  // member: utc_day
  {
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << ", ";
  }

  // member: utc_hour
  {
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << ", ";
  }

  // member: utc_min
  {
    out << "utc_min: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_min, out);
    out << ", ";
  }

  // member: utc_msec
  {
    out << "utc_msec: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_msec, out);
    out << ", ";
  }

  // member: utc_status
  {
    out << "utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TIME & msg,
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

  // member: clock_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: offset_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_std: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_std, out);
    out << "\n";
  }

  // member: utc_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_offset, out);
    out << "\n";
  }

  // member: utc_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << "\n";
  }

  // member: utc_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << "\n";
  }

  // member: utc_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << "\n";
  }

  // member: utc_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << "\n";
  }

  // member: utc_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_min: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_min, out);
    out << "\n";
  }

  // member: utc_msec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_msec: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_msec, out);
    out << "\n";
  }

  // member: utc_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TIME & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::TIME & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::TIME & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::TIME>()
{
  return "novatel_oem7_msgs::msg::TIME";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::TIME>()
{
  return "novatel_oem7_msgs/msg/TIME";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::TIME>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::TIME>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::TIME>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
