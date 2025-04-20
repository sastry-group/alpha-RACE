// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/KeyValuePair.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/key_value_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyValuePair & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyValuePair & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyValuePair & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::KeyValuePair & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::KeyValuePair & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::KeyValuePair>()
{
  return "foxglove_msgs::msg::KeyValuePair";
}

template<>
inline const char * name<foxglove_msgs::msg::KeyValuePair>()
{
  return "foxglove_msgs/msg/KeyValuePair";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::KeyValuePair>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::KeyValuePair>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::KeyValuePair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__KEY_VALUE_PAIR__TRAITS_HPP_
