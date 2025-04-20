// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/vehicle_inputs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleInputs & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: throttle_cmd
  {
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << ", ";
  }

  // member: throttle_cmd_count
  {
    out << "throttle_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd_count, out);
    out << ", ";
  }

  // member: brake_cmd
  {
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << ", ";
  }

  // member: brake_cmd_count
  {
    out << "brake_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd_count, out);
    out << ", ";
  }

  // member: steering_cmd
  {
    out << "steering_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd, out);
    out << ", ";
  }

  // member: steering_cmd_count
  {
    out << "steering_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd_count, out);
    out << ", ";
  }

  // member: gear_cmd
  {
    out << "gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleInputs & msg,
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

  // member: throttle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << "\n";
  }

  // member: throttle_cmd_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd_count, out);
    out << "\n";
  }

  // member: brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << "\n";
  }

  // member: brake_cmd_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd_count, out);
    out << "\n";
  }

  // member: steering_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd, out);
    out << "\n";
  }

  // member: steering_cmd_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_cmd_count: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd_count, out);
    out << "\n";
  }

  // member: gear_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleInputs & msg, bool use_flow_style = false)
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
  const autonoma_msgs::msg::VehicleInputs & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::VehicleInputs & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::VehicleInputs>()
{
  return "autonoma_msgs::msg::VehicleInputs";
}

template<>
inline const char * name<autonoma_msgs::msg::VehicleInputs>()
{
  return "autonoma_msgs/msg/VehicleInputs";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::VehicleInputs>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::VehicleInputs>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::VehicleInputs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__TRAITS_HPP_
