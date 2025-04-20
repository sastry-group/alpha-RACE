// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/CircleAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/circle_annotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'position'
#include "foxglove_msgs/msg/detail/point2__traits.hpp"
// Member 'fill_color'
// Member 'outline_color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CircleAnnotation & msg,
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

  // member: diameter
  {
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << ", ";
  }

  // member: thickness
  {
    out << "thickness: ";
    rosidl_generator_traits::value_to_yaml(msg.thickness, out);
    out << ", ";
  }

  // member: fill_color
  {
    out << "fill_color: ";
    to_flow_style_yaml(msg.fill_color, out);
    out << ", ";
  }

  // member: outline_color
  {
    out << "outline_color: ";
    to_flow_style_yaml(msg.outline_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CircleAnnotation & msg,
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

  // member: diameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << "\n";
  }

  // member: thickness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thickness: ";
    rosidl_generator_traits::value_to_yaml(msg.thickness, out);
    out << "\n";
  }

  // member: fill_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fill_color:\n";
    to_block_style_yaml(msg.fill_color, out, indentation + 2);
  }

  // member: outline_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outline_color:\n";
    to_block_style_yaml(msg.outline_color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CircleAnnotation & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::CircleAnnotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::CircleAnnotation & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::CircleAnnotation>()
{
  return "foxglove_msgs::msg::CircleAnnotation";
}

template<>
inline const char * name<foxglove_msgs::msg::CircleAnnotation>()
{
  return "foxglove_msgs/msg/CircleAnnotation";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::CircleAnnotation>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<foxglove_msgs::msg::Color>::value && has_fixed_size<foxglove_msgs::msg::Point2>::value> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::CircleAnnotation>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<foxglove_msgs::msg::Color>::value && has_bounded_size<foxglove_msgs::msg::Point2>::value> {};

template<>
struct is_message<foxglove_msgs::msg::CircleAnnotation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__TRAITS_HPP_
