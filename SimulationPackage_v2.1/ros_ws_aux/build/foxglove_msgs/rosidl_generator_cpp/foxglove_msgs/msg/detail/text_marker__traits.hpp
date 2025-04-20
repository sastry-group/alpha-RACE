// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/TextMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/text_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TextMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: billboard
  {
    out << "billboard: ";
    rosidl_generator_traits::value_to_yaml(msg.billboard, out);
    out << ", ";
  }

  // member: font_size
  {
    out << "font_size: ";
    rosidl_generator_traits::value_to_yaml(msg.font_size, out);
    out << ", ";
  }

  // member: scale_invariant
  {
    out << "scale_invariant: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_invariant, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TextMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: billboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "billboard: ";
    rosidl_generator_traits::value_to_yaml(msg.billboard, out);
    out << "\n";
  }

  // member: font_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "font_size: ";
    rosidl_generator_traits::value_to_yaml(msg.font_size, out);
    out << "\n";
  }

  // member: scale_invariant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_invariant: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_invariant, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TextMarker & msg, bool use_flow_style = false)
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

}  // namespace foxglove_msgs

namespace rosidl_generator_traits
{

[[deprecated("use foxglove_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const foxglove_msgs::msg::TextMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::TextMarker & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::TextMarker>()
{
  return "foxglove_msgs::msg::TextMarker";
}

template<>
inline const char * name<foxglove_msgs::msg::TextMarker>()
{
  return "foxglove_msgs/msg/TextMarker";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::TextMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::TextMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::TextMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__TRAITS_HPP_
