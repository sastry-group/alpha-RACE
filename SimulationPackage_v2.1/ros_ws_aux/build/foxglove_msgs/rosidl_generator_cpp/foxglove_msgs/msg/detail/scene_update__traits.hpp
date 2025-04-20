// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/SceneUpdate.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_UPDATE__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/scene_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'deletions'
#include "foxglove_msgs/msg/detail/scene_entity_deletion__traits.hpp"
// Member 'entities'
#include "foxglove_msgs/msg/detail/scene_entity__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SceneUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: deletions
  {
    if (msg.deletions.size() == 0) {
      out << "deletions: []";
    } else {
      out << "deletions: [";
      size_t pending_items = msg.deletions.size();
      for (auto item : msg.deletions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: entities
  {
    if (msg.entities.size() == 0) {
      out << "entities: []";
    } else {
      out << "entities: [";
      size_t pending_items = msg.entities.size();
      for (auto item : msg.entities) {
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
  const SceneUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: deletions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deletions.size() == 0) {
      out << "deletions: []\n";
    } else {
      out << "deletions:\n";
      for (auto item : msg.deletions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: entities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entities.size() == 0) {
      out << "entities: []\n";
    } else {
      out << "entities:\n";
      for (auto item : msg.entities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SceneUpdate & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::SceneUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::SceneUpdate & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::SceneUpdate>()
{
  return "foxglove_msgs::msg::SceneUpdate";
}

template<>
inline const char * name<foxglove_msgs::msg::SceneUpdate>()
{
  return "foxglove_msgs/msg/SceneUpdate";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::SceneUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::SceneUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::SceneUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_UPDATE__TRAITS_HPP_
