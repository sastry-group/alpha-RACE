// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/INSPVAX.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/inspvax__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"
// Member 'ins_status'
#include "novatel_oem7_msgs/msg/detail/inertial_solution_status__traits.hpp"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__traits.hpp"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const INSPVAX & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nov_header
  {
    out << "nov_header: ";
    to_flow_style_yaml(msg.nov_header, out);
    out << ", ";
  }

  // member: ins_status
  {
    out << "ins_status: ";
    to_flow_style_yaml(msg.ins_status, out);
    out << ", ";
  }

  // member: pos_type
  {
    out << "pos_type: ";
    to_flow_style_yaml(msg.pos_type, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: north_velocity
  {
    out << "north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity, out);
    out << ", ";
  }

  // member: east_velocity
  {
    out << "east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity, out);
    out << ", ";
  }

  // member: up_velocity
  {
    out << "up_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.up_velocity, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: latitude_stdev
  {
    out << "latitude_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_stdev, out);
    out << ", ";
  }

  // member: longitude_stdev
  {
    out << "longitude_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_stdev, out);
    out << ", ";
  }

  // member: height_stdev
  {
    out << "height_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_stdev, out);
    out << ", ";
  }

  // member: north_velocity_stdev
  {
    out << "north_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity_stdev, out);
    out << ", ";
  }

  // member: east_velocity_stdev
  {
    out << "east_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity_stdev, out);
    out << ", ";
  }

  // member: up_velocity_stdev
  {
    out << "up_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.up_velocity_stdev, out);
    out << ", ";
  }

  // member: roll_stdev
  {
    out << "roll_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_stdev, out);
    out << ", ";
  }

  // member: pitch_stdev
  {
    out << "pitch_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_stdev, out);
    out << ", ";
  }

  // member: azimuth_stdev
  {
    out << "azimuth_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth_stdev, out);
    out << ", ";
  }

  // member: ext_sol_status
  {
    out << "ext_sol_status: ";
    to_flow_style_yaml(msg.ext_sol_status, out);
    out << ", ";
  }

  // member: time_since_update
  {
    out << "time_since_update: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_update, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INSPVAX & msg,
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

  // member: nov_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nov_header:\n";
    to_block_style_yaml(msg.nov_header, out, indentation + 2);
  }

  // member: ins_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_status:\n";
    to_block_style_yaml(msg.ins_status, out, indentation + 2);
  }

  // member: pos_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_type:\n";
    to_block_style_yaml(msg.pos_type, out, indentation + 2);
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
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

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: north_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity, out);
    out << "\n";
  }

  // member: east_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity, out);
    out << "\n";
  }

  // member: up_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.up_velocity, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: latitude_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_stdev, out);
    out << "\n";
  }

  // member: longitude_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_stdev, out);
    out << "\n";
  }

  // member: height_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_stdev, out);
    out << "\n";
  }

  // member: north_velocity_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity_stdev, out);
    out << "\n";
  }

  // member: east_velocity_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity_stdev, out);
    out << "\n";
  }

  // member: up_velocity_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_velocity_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.up_velocity_stdev, out);
    out << "\n";
  }

  // member: roll_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_stdev, out);
    out << "\n";
  }

  // member: pitch_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_stdev, out);
    out << "\n";
  }

  // member: azimuth_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth_stdev, out);
    out << "\n";
  }

  // member: ext_sol_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_sol_status:\n";
    to_block_style_yaml(msg.ext_sol_status, out, indentation + 2);
  }

  // member: time_since_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_update: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_update, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INSPVAX & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::INSPVAX & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::INSPVAX & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::INSPVAX>()
{
  return "novatel_oem7_msgs::msg::INSPVAX";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::INSPVAX>()
{
  return "novatel_oem7_msgs/msg/INSPVAX";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::INSPVAX>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::INSExtendedSolutionStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::InertialSolutionStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::INSPVAX>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::INSExtendedSolutionStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::InertialSolutionStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::INSPVAX>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__TRAITS_HPP_
