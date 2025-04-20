// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/surround_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rear_right'
// Member 'rear_left'
// Member 'rear_center'
// Member 'front_right'
// Member 'front_left'
// Member 'front_center'
#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SurroundReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: front_radar_object_distance
  {
    out << "front_radar_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_object_distance, out);
    out << ", ";
  }

  // member: rear_radar_object_distance
  {
    out << "rear_radar_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_radar_object_distance, out);
    out << ", ";
  }

  // member: rear_right
  {
    out << "rear_right: ";
    to_flow_style_yaml(msg.rear_right, out);
    out << ", ";
  }

  // member: rear_left
  {
    out << "rear_left: ";
    to_flow_style_yaml(msg.rear_left, out);
    out << ", ";
  }

  // member: rear_center
  {
    out << "rear_center: ";
    to_flow_style_yaml(msg.rear_center, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    to_flow_style_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: front_left
  {
    out << "front_left: ";
    to_flow_style_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_center
  {
    out << "front_center: ";
    to_flow_style_yaml(msg.front_center, out);
    out << ", ";
  }

  // member: front_radar_distance_valid
  {
    out << "front_radar_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_distance_valid, out);
    out << ", ";
  }

  // member: parking_sonar_data_valid
  {
    out << "parking_sonar_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_sonar_data_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SurroundReport & msg,
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

  // member: front_radar_object_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_radar_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_object_distance, out);
    out << "\n";
  }

  // member: rear_radar_object_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_radar_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_radar_object_distance, out);
    out << "\n";
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right:\n";
    to_block_style_yaml(msg.rear_right, out, indentation + 2);
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left:\n";
    to_block_style_yaml(msg.rear_left, out, indentation + 2);
  }

  // member: rear_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_center:\n";
    to_block_style_yaml(msg.rear_center, out, indentation + 2);
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right:\n";
    to_block_style_yaml(msg.front_right, out, indentation + 2);
  }

  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left:\n";
    to_block_style_yaml(msg.front_left, out, indentation + 2);
  }

  // member: front_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_center:\n";
    to_block_style_yaml(msg.front_center, out, indentation + 2);
  }

  // member: front_radar_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_radar_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_distance_valid, out);
    out << "\n";
  }

  // member: parking_sonar_data_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_sonar_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_sonar_data_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SurroundReport & msg, bool use_flow_style = false)
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

}  // namespace raptor_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use raptor_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raptor_dbw_msgs::msg::SurroundReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::SurroundReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::SurroundReport>()
{
  return "raptor_dbw_msgs::msg::SurroundReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::SurroundReport>()
{
  return "raptor_dbw_msgs/msg/SurroundReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::SonarArcNum>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::SonarArcNum>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::SurroundReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
