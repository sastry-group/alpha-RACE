// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_

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
# define DEPRECATED__foxglove_msgs__msg__Log __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__Log __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Log_
{
  using Type = Log_<ContainerAllocator>;

  explicit Log_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->message = "";
      this->name = "";
      this->file = "";
      this->line = 0ul;
    }
  }

  explicit Log_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    message(_alloc),
    name(_alloc),
    file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->message = "";
      this->name = "";
      this->file = "";
      this->line = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _level_type =
    uint8_t;
  _level_type level;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_type file;
  using _line_type =
    uint32_t;
  _line_type line;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file = _arg;
    return *this;
  }
  Type & set__line(
    const uint32_t & _arg)
  {
    this->line = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t DEBUG =
    1u;
  static constexpr uint8_t INFO =
    2u;
  static constexpr uint8_t WARNING =
    3u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    4u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr uint8_t FATAL =
    5u;

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::Log_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::Log_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Log_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Log_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Log_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Log_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Log_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Log_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Log_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Log_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__Log
    std::shared_ptr<foxglove_msgs::msg::Log_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__Log
    std::shared_ptr<foxglove_msgs::msg::Log_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    if (this->line != other.line) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_

// alias to use template instance with default allocator
using Log =
  foxglove_msgs::msg::Log_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::DEBUG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::WARNING;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Log_<ContainerAllocator>::FATAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_
