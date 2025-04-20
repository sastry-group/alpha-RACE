// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/ground_truth_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vehicles'
#include "autonoma_msgs/msg/detail/ground_truth__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroundTruthArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vehicles
  {
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []";
    } else {
      out << "vehicles: [";
      size_t pending_items = msg.vehicles.size();
      for (auto item : msg.vehicles) {
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
  const GroundTruthArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []\n";
    } else {
      out << "vehicles:\n";
      for (auto item : msg.vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundTruthArray & msg, bool use_flow_style = false)
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

}  // namespace autonoma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autonoma_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autonoma_msgs::msg::GroundTruthArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::GroundTruthArray & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::GroundTruthArray>()
{
  return "autonoma_msgs::msg::GroundTruthArray";
}

template<>
inline const char * name<autonoma_msgs::msg::GroundTruthArray>()
{
  return "autonoma_msgs/msg/GroundTruthArray";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::GroundTruthArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::GroundTruthArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autonoma_msgs::msg::GroundTruthArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__TRAITS_HPP_
