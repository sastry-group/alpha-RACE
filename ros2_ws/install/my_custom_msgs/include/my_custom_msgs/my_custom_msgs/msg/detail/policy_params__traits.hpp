// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__TRAITS_HPP_
#define MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_msgs/msg/detail/policy_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PolicyParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: sf1
  {
    out << "sf1: ";
    rosidl_generator_traits::value_to_yaml(msg.sf1, out);
    out << ", ";
  }

  // member: sf2
  {
    out << "sf2: ";
    rosidl_generator_traits::value_to_yaml(msg.sf2, out);
    out << ", ";
  }

  // member: speed_factor
  {
    out << "speed_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_factor, out);
    out << ", ";
  }

  // member: lookahead_factor
  {
    out << "lookahead_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.lookahead_factor, out);
    out << ", ";
  }

  // member: blocking_factor
  {
    out << "blocking_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PolicyParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sf1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sf1: ";
    rosidl_generator_traits::value_to_yaml(msg.sf1, out);
    out << "\n";
  }

  // member: sf2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sf2: ";
    rosidl_generator_traits::value_to_yaml(msg.sf2, out);
    out << "\n";
  }

  // member: speed_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_factor, out);
    out << "\n";
  }

  // member: lookahead_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lookahead_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.lookahead_factor, out);
    out << "\n";
  }

  // member: blocking_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocking_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PolicyParams & msg, bool use_flow_style = false)
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

}  // namespace my_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_msgs::msg::PolicyParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_msgs::msg::PolicyParams & msg)
{
  return my_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_msgs::msg::PolicyParams>()
{
  return "my_custom_msgs::msg::PolicyParams";
}

template<>
inline const char * name<my_custom_msgs::msg::PolicyParams>()
{
  return "my_custom_msgs/msg/PolicyParams";
}

template<>
struct has_fixed_size<my_custom_msgs::msg::PolicyParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_msgs::msg::PolicyParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_msgs::msg::PolicyParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__TRAITS_HPP_
