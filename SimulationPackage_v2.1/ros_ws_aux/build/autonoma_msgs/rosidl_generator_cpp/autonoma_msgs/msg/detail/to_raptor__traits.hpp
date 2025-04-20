// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/ToRaptor.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/to_raptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ToRaptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: track_cond_ack
  {
    out << "track_cond_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.track_cond_ack, out);
    out << ", ";
  }

  // member: veh_sig_ack
  {
    out << "veh_sig_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_sig_ack, out);
    out << ", ";
  }

  // member: ct_state
  {
    out << "ct_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ct_state, out);
    out << ", ";
  }

  // member: rolling_counter
  {
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << ", ";
  }

  // member: veh_num
  {
    out << "veh_num: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToRaptor & msg,
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

  // member: track_cond_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_cond_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.track_cond_ack, out);
    out << "\n";
  }

  // member: veh_sig_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_sig_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_sig_ack, out);
    out << "\n";
  }

  // member: ct_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ct_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ct_state, out);
    out << "\n";
  }

  // member: rolling_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_counter, out);
    out << "\n";
  }

  // member: veh_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_num: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToRaptor & msg, bool use_flow_style = false)
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
  const autonoma_msgs::msg::ToRaptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::ToRaptor & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::ToRaptor>()
{
  return "autonoma_msgs::msg::ToRaptor";
}

template<>
inline const char * name<autonoma_msgs::msg::ToRaptor>()
{
  return "autonoma_msgs/msg/ToRaptor";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::ToRaptor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::ToRaptor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::ToRaptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__TRAITS_HPP_
