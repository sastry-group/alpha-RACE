// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/PackedElementField.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__PackedElementField __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__PackedElementField __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PackedElementField_
{
  using Type = PackedElementField_<ContainerAllocator>;

  explicit PackedElementField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->offset = 0ul;
      this->type = 0;
    }
  }

  explicit PackedElementField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->offset = 0ul;
      this->type = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t UINT8 =
    1u;
  static constexpr uint8_t INT8 =
    2u;
  static constexpr uint8_t UINT16 =
    3u;
  static constexpr uint8_t INT16 =
    4u;
  static constexpr uint8_t UINT32 =
    5u;
  static constexpr uint8_t INT32 =
    6u;
  static constexpr uint8_t FLOAT32 =
    7u;
  static constexpr uint8_t FLOAT64 =
    8u;

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::PackedElementField_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::PackedElementField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__PackedElementField
    std::shared_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__PackedElementField
    std::shared_ptr<foxglove_msgs::msg::PackedElementField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PackedElementField_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PackedElementField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PackedElementField_

// alias to use template instance with default allocator
using PackedElementField =
  foxglove_msgs::msg::PackedElementField_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::UINT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::INT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::UINT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::INT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::UINT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::INT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::FLOAT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PackedElementField_<ContainerAllocator>::FLOAT64;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__STRUCT_HPP_
