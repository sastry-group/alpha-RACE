// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/CylinderPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/cylinder_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CylinderPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: bottom_scale
  {
    out << "bottom_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_scale, out);
    out << ", ";
  }

  // member: top_scale
  {
    out << "top_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.top_scale, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CylinderPrimitive & msg,
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

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: bottom_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_scale, out);
    out << "\n";
  }

  // member: top_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.top_scale, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CylinderPrimitive & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::CylinderPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::CylinderPrimitive & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::CylinderPrimitive>()
{
  return "foxglove_msgs::msg::CylinderPrimitive";
}

template<>
inline const char * name<foxglove_msgs::msg::CylinderPrimitive>()
{
  return "foxglove_msgs/msg/CylinderPrimitive";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::CylinderPrimitive>
  : std::integral_constant<bool, has_fixed_size<foxglove_msgs::msg::Color>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::CylinderPrimitive>
  : std::integral_constant<bool, has_bounded_size<foxglove_msgs::msg::Color>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<foxglove_msgs::msg::CylinderPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_PRIMITIVE__TRAITS_HPP_
