// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/INSOutputFrame.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/ins_output_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const INSOutputFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INSOutputFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INSOutputFrame & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::INSOutputFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::INSOutputFrame & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::INSOutputFrame>()
{
  return "novatel_oem7_msgs::msg::INSOutputFrame";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::INSOutputFrame>()
{
  return "novatel_oem7_msgs/msg/INSOutputFrame";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::INSOutputFrame>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::INSOutputFrame>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<novatel_oem7_msgs::msg::INSOutputFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__TRAITS_HPP_
