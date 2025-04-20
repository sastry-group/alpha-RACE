// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Oem7RawMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_data
  {
    if (msg.message_data.size() == 0) {
      out << "message_data: []";
    } else {
      out << "message_data: [";
      size_t pending_items = msg.message_data.size();
      for (auto item : msg.message_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Oem7RawMsg & msg,
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

  // member: message_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.message_data.size() == 0) {
      out << "message_data: []\n";
    } else {
      out << "message_data:\n";
      for (auto item : msg.message_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Oem7RawMsg & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::Oem7RawMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::Oem7RawMsg & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::Oem7RawMsg>()
{
  return "novatel_oem7_msgs::msg::Oem7RawMsg";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::Oem7RawMsg>()
{
  return "novatel_oem7_msgs/msg/Oem7RawMsg";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::Oem7RawMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::Oem7RawMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<novatel_oem7_msgs::msg::Oem7RawMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__TRAITS_HPP_
