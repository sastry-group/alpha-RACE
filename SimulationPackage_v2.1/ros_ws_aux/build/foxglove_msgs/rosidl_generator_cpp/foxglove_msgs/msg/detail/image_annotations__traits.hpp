// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/image_annotations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'circles'
#include "foxglove_msgs/msg/detail/circle_annotation__traits.hpp"
// Member 'points'
#include "foxglove_msgs/msg/detail/points_annotation__traits.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_annotation__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageAnnotations & msg,
  std::ostream & out)
{
  out << "{";
  // member: circles
  {
    if (msg.circles.size() == 0) {
      out << "circles: []";
    } else {
      out << "circles: [";
      size_t pending_items = msg.circles.size();
      for (auto item : msg.circles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: texts
  {
    if (msg.texts.size() == 0) {
      out << "texts: []";
    } else {
      out << "texts: [";
      size_t pending_items = msg.texts.size();
      for (auto item : msg.texts) {
        to_flow_style_yaml(item, out);
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
  const ImageAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: circles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.circles.size() == 0) {
      out << "circles: []\n";
    } else {
      out << "circles:\n";
      for (auto item : msg.circles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: texts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.texts.size() == 0) {
      out << "texts: []\n";
    } else {
      out << "texts:\n";
      for (auto item : msg.texts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageAnnotations & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::ImageAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::ImageAnnotations & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::ImageAnnotations>()
{
  return "foxglove_msgs::msg::ImageAnnotations";
}

template<>
inline const char * name<foxglove_msgs::msg::ImageAnnotations>()
{
  return "foxglove_msgs/msg/ImageAnnotations";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::ImageAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::ImageAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::ImageAnnotations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__TRAITS_HPP_
