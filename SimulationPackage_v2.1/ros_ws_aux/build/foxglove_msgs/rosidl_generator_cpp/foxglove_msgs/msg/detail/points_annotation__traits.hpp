// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/PointsAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/points_annotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'points'
#include "foxglove_msgs/msg/detail/point2__traits.hpp"
// Member 'outline_color'
// Member 'outline_colors'
// Member 'fill_color'
#include "foxglove_msgs/msg/detail/color__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointsAnnotation & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outline_color
  {
    out << "outline_color: ";
    to_flow_style_yaml(msg.outline_color, out);
    out << ", ";
  }

  // member: outline_colors
  {
    if (msg.outline_colors.size() == 0) {
      out << "outline_colors: []";
    } else {
      out << "outline_colors: [";
      size_t pending_items = msg.outline_colors.size();
      for (auto item : msg.outline_colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fill_color
  {
    out << "fill_color: ";
    to_flow_style_yaml(msg.fill_color, out);
    out << ", ";
  }

  // member: thickness
  {
    out << "thickness: ";
    rosidl_generator_traits::value_to_yaml(msg.thickness, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointsAnnotation & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: outline_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outline_color:\n";
    to_block_style_yaml(msg.outline_color, out, indentation + 2);
  }

  // member: outline_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outline_colors.size() == 0) {
      out << "outline_colors: []\n";
    } else {
      out << "outline_colors:\n";
      for (auto item : msg.outline_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: fill_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fill_color:\n";
    to_block_style_yaml(msg.fill_color, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointsAnnotation & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::PointsAnnotation & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::PointsAnnotation & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::PointsAnnotation>()
{
  return "foxglove_msgs::msg::PointsAnnotation";
}

template<>
inline const char * name<foxglove_msgs::msg::PointsAnnotation>()
{
  return "foxglove_msgs/msg/PointsAnnotation";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::PointsAnnotation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::PointsAnnotation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::PointsAnnotation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__TRAITS_HPP_
