// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/FrameTransform.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'rotation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__FrameTransform __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__FrameTransform __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrameTransform_
{
  using Type = FrameTransform_<ContainerAllocator>;

  explicit FrameTransform_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    translation(_init),
    rotation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_frame_id = "";
      this->child_frame_id = "";
    }
  }

  explicit FrameTransform_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    parent_frame_id(_alloc),
    child_frame_id(_alloc),
    translation(_alloc, _init),
    rotation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_frame_id = "";
      this->child_frame_id = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _parent_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_frame_id_type parent_frame_id;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _translation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _translation_type translation;
  using _rotation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _rotation_type rotation;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__parent_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_frame_id = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__translation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::FrameTransform_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::FrameTransform_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__FrameTransform
    std::shared_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__FrameTransform
    std::shared_ptr<foxglove_msgs::msg::FrameTransform_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameTransform_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->parent_frame_id != other.parent_frame_id) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrameTransform_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameTransform_

// alias to use template instance with default allocator
using FrameTransform =
  foxglove_msgs::msg::FrameTransform_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM__STRUCT_HPP_
