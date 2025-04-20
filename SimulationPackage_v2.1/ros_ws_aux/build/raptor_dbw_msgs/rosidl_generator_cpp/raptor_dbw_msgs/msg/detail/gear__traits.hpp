// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/gear__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gear & msg,
  std::ostream & out)
{
  out << "{";
  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gear & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gear & msg, bool use_flow_style = false)
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
  const raptor_dbw_msgs::msg::Gear & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::Gear & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::Gear>()
{
  return "raptor_dbw_msgs::msg::Gear";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::Gear>()
{
  return "raptor_dbw_msgs/msg/Gear";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::Gear>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::Gear>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raptor_dbw_msgs::msg::Gear>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__TRAITS_HPP_
