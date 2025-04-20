// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/PrimitiveDeletion.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__PrimitiveDeletion __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__PrimitiveDeletion __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimitiveDeletion_
{
  using Type = PrimitiveDeletion_<ContainerAllocator>;

  explicit PrimitiveDeletion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->id = "";
    }
  }

  explicit PrimitiveDeletion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->id = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MATCHING_ID =
    0u;
  static constexpr uint8_t ALL =
    1u;

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__PrimitiveDeletion
    std::shared_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__PrimitiveDeletion
    std::shared_ptr<foxglove_msgs::msg::PrimitiveDeletion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimitiveDeletion_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimitiveDeletion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrimitiveDeletion_

// alias to use template instance with default allocator
using PrimitiveDeletion =
  foxglove_msgs::msg::PrimitiveDeletion_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrimitiveDeletion_<ContainerAllocator>::MATCHING_ID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrimitiveDeletion_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__PRIMITIVE_DELETION__STRUCT_HPP_
