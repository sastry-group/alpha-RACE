// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/GroundTruth.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/ground_truth__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroundTruth & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: car_num
  {
    out << "car_num: ";
    rosidl_generator_traits::value_to_yaml(msg.car_num, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: hgt
  {
    out << "hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.hgt, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: del_x
  {
    out << "del_x: ";
    rosidl_generator_traits::value_to_yaml(msg.del_x, out);
    out << ", ";
  }

  // member: del_y
  {
    out << "del_y: ";
    rosidl_generator_traits::value_to_yaml(msg.del_y, out);
    out << ", ";
  }

  // member: del_z
  {
    out << "del_z: ";
    rosidl_generator_traits::value_to_yaml(msg.del_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroundTruth & msg,
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

  // member: car_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_num: ";
    rosidl_generator_traits::value_to_yaml(msg.car_num, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.hgt, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: del_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "del_x: ";
    rosidl_generator_traits::value_to_yaml(msg.del_x, out);
    out << "\n";
  }

  // member: del_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "del_y: ";
    rosidl_generator_traits::value_to_yaml(msg.del_y, out);
    out << "\n";
  }

  // member: del_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "del_z: ";
    rosidl_generator_traits::value_to_yaml(msg.del_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundTruth & msg, bool use_flow_style = false)
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
  const autonoma_msgs::msg::GroundTruth & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::GroundTruth & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::GroundTruth>()
{
  return "autonoma_msgs::msg::GroundTruth";
}

template<>
inline const char * name<autonoma_msgs::msg::GroundTruth>()
{
  return "autonoma_msgs/msg/GroundTruth";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::GroundTruth>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::GroundTruth>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::GroundTruth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__TRAITS_HPP_
