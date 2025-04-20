// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/rotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rotation'
#include "novatel_oem7_msgs/msg/detail/rotational_offset__traits.hpp"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__traits.hpp"
// Member 'rotation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rotation & msg,
  std::ostream & out)
{
  out << "{";
  // member: rotation
  {
    out << "rotation: ";
    to_flow_style_yaml(msg.rotation, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: x_rotation
  {
    out << "x_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rotation, out);
    out << ", ";
  }

  // member: y_rotation
  {
    out << "y_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rotation, out);
    out << ", ";
  }

  // member: z_rotation
  {
    out << "z_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rotation, out);
    out << ", ";
  }

  // member: x_rotation_stdev
  {
    out << "x_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rotation_stdev, out);
    out << ", ";
  }

  // member: y_rotation_stdev
  {
    out << "y_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rotation_stdev, out);
    out << ", ";
  }

  // member: z_rotation_stdev
  {
    out << "z_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rotation_stdev, out);
    out << ", ";
  }

  // member: rotation_source
  {
    out << "rotation_source: ";
    to_flow_style_yaml(msg.rotation_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation:\n";
    to_block_style_yaml(msg.rotation, out, indentation + 2);
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }

  // member: x_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rotation, out);
    out << "\n";
  }

  // member: y_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rotation, out);
    out << "\n";
  }

  // member: z_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rotation, out);
    out << "\n";
  }

  // member: x_rotation_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rotation_stdev, out);
    out << "\n";
  }

  // member: y_rotation_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rotation_stdev, out);
    out << "\n";
  }

  // member: z_rotation_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_rotation_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rotation_stdev, out);
    out << "\n";
  }

  // member: rotation_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_source:\n";
    to_block_style_yaml(msg.rotation_source, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotation & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::Rotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::Rotation & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::Rotation>()
{
  return "novatel_oem7_msgs::msg::Rotation";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::Rotation>()
{
  return "novatel_oem7_msgs/msg/Rotation";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::Rotation>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::INSFrame>::value && has_fixed_size<novatel_oem7_msgs::msg::INSSourceStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::RotationalOffset>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::Rotation>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::INSFrame>::value && has_bounded_size<novatel_oem7_msgs::msg::INSSourceStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::RotationalOffset>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::Rotation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__TRAITS_HPP_
