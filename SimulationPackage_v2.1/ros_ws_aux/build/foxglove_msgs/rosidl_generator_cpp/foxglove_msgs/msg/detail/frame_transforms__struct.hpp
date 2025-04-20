// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/FrameTransforms.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transforms'
#include "foxglove_msgs/msg/detail/frame_transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__FrameTransforms __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__FrameTransforms __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrameTransforms_
{
  using Type = FrameTransforms_<ContainerAllocator>;

  explicit FrameTransforms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FrameTransforms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transforms_type =
    std::vector<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::FrameTransform_<ContainerAllocator>>> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__FrameTransforms
    std::shared_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__FrameTransforms
    std::shared_ptr<foxglove_msgs::msg::FrameTransforms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameTransforms_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrameTransforms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameTransforms_

// alias to use template instance with default allocator
using FrameTransforms =
  foxglove_msgs::msg::FrameTransforms_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORMS__STRUCT_HPP_
