// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__GRID__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'cell_size'
#include "foxglove_msgs/msg/detail/vector2__traits.hpp"
// Member 'fields'
#include "foxglove_msgs/msg/detail/packed_element_field__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Grid & msg,
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

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: column_count
  {
    out << "column_count: ";
    rosidl_generator_traits::value_to_yaml(msg.column_count, out);
    out << ", ";
  }

  // member: cell_size
  {
    out << "cell_size: ";
    to_flow_style_yaml(msg.cell_size, out);
    out << ", ";
  }

  // member: row_stride
  {
    out << "row_stride: ";
    rosidl_generator_traits::value_to_yaml(msg.row_stride, out);
    out << ", ";
  }

  // member: cell_stride
  {
    out << "cell_stride: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_stride, out);
    out << ", ";
  }

  // member: fields
  {
    if (msg.fields.size() == 0) {
      out << "fields: []";
    } else {
      out << "fields: [";
      size_t pending_items = msg.fields.size();
      for (auto item : msg.fields) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Grid & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: column_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "column_count: ";
    rosidl_generator_traits::value_to_yaml(msg.column_count, out);
    out << "\n";
  }

  // member: cell_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_size:\n";
    to_block_style_yaml(msg.cell_size, out, indentation + 2);
  }

  // member: row_stride
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row_stride: ";
    rosidl_generator_traits::value_to_yaml(msg.row_stride, out);
    out << "\n";
  }

  // member: cell_stride
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_stride: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_stride, out);
    out << "\n";
  }

  // member: fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fields.size() == 0) {
      out << "fields: []\n";
    } else {
      out << "fields:\n";
      for (auto item : msg.fields) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Grid & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::Grid & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::Grid & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::Grid>()
{
  return "foxglove_msgs::msg::Grid";
}

template<>
inline const char * name<foxglove_msgs::msg::Grid>()
{
  return "foxglove_msgs/msg/Grid";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::Grid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::Grid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::Grid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__GRID__TRAITS_HPP_
