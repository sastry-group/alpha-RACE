// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/ImageMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/image_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/image_marker__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageMarkerArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
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
  const ImageMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageMarkerArray & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::ImageMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::ImageMarkerArray & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::ImageMarkerArray>()
{
  return "foxglove_msgs::msg::ImageMarkerArray";
}

template<>
inline const char * name<foxglove_msgs::msg::ImageMarkerArray>()
{
  return "foxglove_msgs/msg/ImageMarkerArray";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::ImageMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::ImageMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::ImageMarkerArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__TRAITS_HPP_
