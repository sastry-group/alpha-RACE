// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/TextAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/text_annotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'position'
#include "foxglove_msgs/msg/detail/point2__traits.hpp"
// Member 'text_color'
// Member 'background_color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TextAnnotation & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: font_size
  {
    out << "font_size: ";
    rosidl_generator_traits::value_to_yaml(msg.font_size, out);
    out << ", ";
  }

  // member: text_color
  {
    out << "text_color: ";
    to_flow_style_yaml(msg.text_color, out);
    out << ", ";
  }

  // member: background_color
  {
    out << "background_color: ";
    to_flow_style_yaml(msg.background_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TextAnnotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
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

  // member: font_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "font_size: ";
    rosidl_generator_traits::value_to_yaml(msg.font_size, out);
    out << "\n";
  }

  // member: text_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_color:\n";
    to_block_style_yaml(msg.text_color, out, indentation + 2);
  }

  // member: background_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "background_color:\n";
    to_block_style_yaml(msg.background_color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TextAnnotation & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::TextAnnotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::TextAnnotation & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::TextAnnotation>()
{
  return "foxglove_msgs::msg::TextAnnotation";
}

template<>
inline const char * name<foxglove_msgs::msg::TextAnnotation>()
{
  return "foxglove_msgs/msg/TextAnnotation";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::TextAnnotation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::TextAnnotation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::TextAnnotation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__TRAITS_HPP_
