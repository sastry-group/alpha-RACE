// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/translation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'translation'
#include "novatel_oem7_msgs/msg/detail/translation_offset__traits.hpp"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__traits.hpp"
// Member 'translation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Translation & msg,
  std::ostream & out)
{
  out << "{";
  // member: translation
  {
    out << "translation: ";
    to_flow_style_yaml(msg.translation, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: x_offset
  {
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << ", ";
  }

  // member: y_offset
  {
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << ", ";
  }

  // member: z_offset
  {
    out << "z_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.z_offset, out);
    out << ", ";
  }

  // member: x_uncertainty
  {
    out << "x_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.x_uncertainty, out);
    out << ", ";
  }

  // member: y_uncertainty
  {
    out << "y_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.y_uncertainty, out);
    out << ", ";
  }

  // member: z_uncertainty
  {
    out << "z_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.z_uncertainty, out);
    out << ", ";
  }

  // member: translation_source
  {
    out << "translation_source: ";
    to_flow_style_yaml(msg.translation_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Translation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation:\n";
    to_block_style_yaml(msg.translation, out, indentation + 2);
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }

  // member: x_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << "\n";
  }

  // member: y_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << "\n";
  }

  // member: z_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.z_offset, out);
    out << "\n";
  }

  // member: x_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.x_uncertainty, out);
    out << "\n";
  }

  // member: y_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.y_uncertainty, out);
    out << "\n";
  }

  // member: z_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.z_uncertainty, out);
    out << "\n";
  }

  // member: translation_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_source:\n";
    to_block_style_yaml(msg.translation_source, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Translation & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::Translation & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::Translation & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::Translation>()
{
  return "novatel_oem7_msgs::msg::Translation";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::Translation>()
{
  return "novatel_oem7_msgs/msg/Translation";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::Translation>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::INSFrame>::value && has_fixed_size<novatel_oem7_msgs::msg::INSSourceStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::TranslationOffset>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::Translation>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::INSFrame>::value && has_bounded_size<novatel_oem7_msgs::msg::INSSourceStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::TranslationOffset>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::Translation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__TRAITS_HPP_
