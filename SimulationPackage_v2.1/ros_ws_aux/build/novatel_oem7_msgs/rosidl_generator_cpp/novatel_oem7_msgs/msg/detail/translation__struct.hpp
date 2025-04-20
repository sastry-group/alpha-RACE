// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'translation'
#include "novatel_oem7_msgs/msg/detail/translation_offset__struct.hpp"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__struct.hpp"
// Member 'translation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__Translation __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__Translation __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Translation_
{
  using Type = Translation_<ContainerAllocator>;

  explicit Translation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : translation(_init),
    frame(_init),
    translation_source(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->z_offset = 0.0f;
      this->x_uncertainty = 0.0f;
      this->y_uncertainty = 0.0f;
      this->z_uncertainty = 0.0f;
    }
  }

  explicit Translation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : translation(_alloc, _init),
    frame(_alloc, _init),
    translation_source(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->z_offset = 0.0f;
      this->x_uncertainty = 0.0f;
      this->y_uncertainty = 0.0f;
      this->z_uncertainty = 0.0f;
    }
  }

  // field types and members
  using _translation_type =
    novatel_oem7_msgs::msg::TranslationOffset_<ContainerAllocator>;
  _translation_type translation;
  using _frame_type =
    novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>;
  _frame_type frame;
  using _x_offset_type =
    float;
  _x_offset_type x_offset;
  using _y_offset_type =
    float;
  _y_offset_type y_offset;
  using _z_offset_type =
    float;
  _z_offset_type z_offset;
  using _x_uncertainty_type =
    float;
  _x_uncertainty_type x_uncertainty;
  using _y_uncertainty_type =
    float;
  _y_uncertainty_type y_uncertainty;
  using _z_uncertainty_type =
    float;
  _z_uncertainty_type z_uncertainty;
  using _translation_source_type =
    novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>;
  _translation_source_type translation_source;

  // setters for named parameter idiom
  Type & set__translation(
    const novatel_oem7_msgs::msg::TranslationOffset_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__frame(
    const novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__x_offset(
    const float & _arg)
  {
    this->x_offset = _arg;
    return *this;
  }
  Type & set__y_offset(
    const float & _arg)
  {
    this->y_offset = _arg;
    return *this;
  }
  Type & set__z_offset(
    const float & _arg)
  {
    this->z_offset = _arg;
    return *this;
  }
  Type & set__x_uncertainty(
    const float & _arg)
  {
    this->x_uncertainty = _arg;
    return *this;
  }
  Type & set__y_uncertainty(
    const float & _arg)
  {
    this->y_uncertainty = _arg;
    return *this;
  }
  Type & set__z_uncertainty(
    const float & _arg)
  {
    this->z_uncertainty = _arg;
    return *this;
  }
  Type & set__translation_source(
    const novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> & _arg)
  {
    this->translation_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::Translation_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::Translation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__Translation
    std::shared_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__Translation
    std::shared_ptr<novatel_oem7_msgs::msg::Translation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Translation_ & other) const
  {
    if (this->translation != other.translation) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->x_offset != other.x_offset) {
      return false;
    }
    if (this->y_offset != other.y_offset) {
      return false;
    }
    if (this->z_offset != other.z_offset) {
      return false;
    }
    if (this->x_uncertainty != other.x_uncertainty) {
      return false;
    }
    if (this->y_uncertainty != other.y_uncertainty) {
      return false;
    }
    if (this->z_uncertainty != other.z_uncertainty) {
      return false;
    }
    if (this->translation_source != other.translation_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const Translation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Translation_

// alias to use template instance with default allocator
using Translation =
  novatel_oem7_msgs::msg::Translation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_HPP_
