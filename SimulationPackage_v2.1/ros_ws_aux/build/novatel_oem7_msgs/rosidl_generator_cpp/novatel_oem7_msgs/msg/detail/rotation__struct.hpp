// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rotation'
#include "novatel_oem7_msgs/msg/detail/rotational_offset__struct.hpp"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__struct.hpp"
// Member 'rotation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__Rotation __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__Rotation __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rotation_
{
  using Type = Rotation_<ContainerAllocator>;

  explicit Rotation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation(_init),
    frame(_init),
    rotation_source(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_rotation = 0.0f;
      this->y_rotation = 0.0f;
      this->z_rotation = 0.0f;
      this->x_rotation_stdev = 0.0f;
      this->y_rotation_stdev = 0.0f;
      this->z_rotation_stdev = 0.0f;
    }
  }

  explicit Rotation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation(_alloc, _init),
    frame(_alloc, _init),
    rotation_source(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_rotation = 0.0f;
      this->y_rotation = 0.0f;
      this->z_rotation = 0.0f;
      this->x_rotation_stdev = 0.0f;
      this->y_rotation_stdev = 0.0f;
      this->z_rotation_stdev = 0.0f;
    }
  }

  // field types and members
  using _rotation_type =
    novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>;
  _rotation_type rotation;
  using _frame_type =
    novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>;
  _frame_type frame;
  using _x_rotation_type =
    float;
  _x_rotation_type x_rotation;
  using _y_rotation_type =
    float;
  _y_rotation_type y_rotation;
  using _z_rotation_type =
    float;
  _z_rotation_type z_rotation;
  using _x_rotation_stdev_type =
    float;
  _x_rotation_stdev_type x_rotation_stdev;
  using _y_rotation_stdev_type =
    float;
  _y_rotation_stdev_type y_rotation_stdev;
  using _z_rotation_stdev_type =
    float;
  _z_rotation_stdev_type z_rotation_stdev;
  using _rotation_source_type =
    novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>;
  _rotation_source_type rotation_source;

  // setters for named parameter idiom
  Type & set__rotation(
    const novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__frame(
    const novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__x_rotation(
    const float & _arg)
  {
    this->x_rotation = _arg;
    return *this;
  }
  Type & set__y_rotation(
    const float & _arg)
  {
    this->y_rotation = _arg;
    return *this;
  }
  Type & set__z_rotation(
    const float & _arg)
  {
    this->z_rotation = _arg;
    return *this;
  }
  Type & set__x_rotation_stdev(
    const float & _arg)
  {
    this->x_rotation_stdev = _arg;
    return *this;
  }
  Type & set__y_rotation_stdev(
    const float & _arg)
  {
    this->y_rotation_stdev = _arg;
    return *this;
  }
  Type & set__z_rotation_stdev(
    const float & _arg)
  {
    this->z_rotation_stdev = _arg;
    return *this;
  }
  Type & set__rotation_source(
    const novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> & _arg)
  {
    this->rotation_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__Rotation
    std::shared_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__Rotation
    std::shared_ptr<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotation_ & other) const
  {
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->x_rotation != other.x_rotation) {
      return false;
    }
    if (this->y_rotation != other.y_rotation) {
      return false;
    }
    if (this->z_rotation != other.z_rotation) {
      return false;
    }
    if (this->x_rotation_stdev != other.x_rotation_stdev) {
      return false;
    }
    if (this->y_rotation_stdev != other.y_rotation_stdev) {
      return false;
    }
    if (this->z_rotation_stdev != other.z_rotation_stdev) {
      return false;
    }
    if (this->rotation_source != other.rotation_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rotation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotation_

// alias to use template instance with default allocator
using Rotation =
  novatel_oem7_msgs::msg::Rotation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_HPP_
