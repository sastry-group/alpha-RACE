// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/CylinderMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/cylinder_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'metadata'
#include "foxglove_msgs/msg/detail/key_value_pair__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CylinderMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: frame_locked
  {
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << ", ";
  }

  // member: metadata
  {
    if (msg.metadata.size() == 0) {
      out << "metadata: []";
    } else {
      out << "metadata: [";
      size_t pending_items = msg.metadata.size();
      for (auto item : msg.metadata) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: bottom_radius
  {
    out << "bottom_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_radius, out);
    out << ", ";
  }

  // member: top_radius
  {
    out << "top_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.top_radius, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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
  const CylinderMarker & msg,
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

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: frame_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << "\n";
  }

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.metadata.size() == 0) {
      out << "metadata: []\n";
    } else {
      out << "metadata:\n";
      for (auto item : msg.metadata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: bottom_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_radius, out);
    out << "\n";
  }

  // member: top_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.top_radius, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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

inline std::string to_yaml(const CylinderMarker & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::CylinderMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::CylinderMarker & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::CylinderMarker>()
{
  return "foxglove_msgs::msg::CylinderMarker";
}

template<>
inline const char * name<foxglove_msgs::msg::CylinderMarker>()
{
  return "foxglove_msgs/msg/CylinderMarker";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::CylinderMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::CylinderMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::CylinderMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CYLINDER_MARKER__TRAITS_HPP_
