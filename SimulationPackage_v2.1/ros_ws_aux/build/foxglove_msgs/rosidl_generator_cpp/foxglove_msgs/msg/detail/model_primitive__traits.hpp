// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/ModelPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/model_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ModelPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    to_flow_style_yaml(msg.scale, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: override_color
  {
    out << "override_color: ";
    rosidl_generator_traits::value_to_yaml(msg.override_color, out);
    out << ", ";
  }

  // member: url
  {
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
    out << ", ";
  }

  // member: media_type
  {
    out << "media_type: ";
    rosidl_generator_traits::value_to_yaml(msg.media_type, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const ModelPrimitive & msg,
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

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale:\n";
    to_block_style_yaml(msg.scale, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: override_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_color: ";
    rosidl_generator_traits::value_to_yaml(msg.override_color, out);
    out << "\n";
  }

  // member: url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
    out << "\n";
  }

  // member: media_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "media_type: ";
    rosidl_generator_traits::value_to_yaml(msg.media_type, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const ModelPrimitive & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::ModelPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::ModelPrimitive & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::ModelPrimitive>()
{
  return "foxglove_msgs::msg::ModelPrimitive";
}

template<>
inline const char * name<foxglove_msgs::msg::ModelPrimitive>()
{
  return "foxglove_msgs/msg/ModelPrimitive";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::ModelPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::ModelPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::ModelPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__TRAITS_HPP_
