// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__RXSTATUS __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__RXSTATUS __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RXSTATUS_
{
  using Type = RXSTATUS_<ContainerAllocator>;

  explicit RXSTATUS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0ul;
      this->num_status_codes = 0ul;
      this->rxstat = 0ul;
      this->rxstat_pri_mask = 0ul;
      this->rxstat_set_mask = 0ul;
      this->rxstat_clr_mask = 0ul;
      this->aux1_stat = 0ul;
      this->aux1_stat_pri = 0ul;
      this->aux1_stat_set = 0ul;
      this->aux1_stat_clr = 0ul;
      this->aux2_stat = 0ul;
      this->aux2_stat_pri = 0ul;
      this->aux2_stat_set = 0ul;
      this->aux2_stat_clr = 0ul;
      this->aux3_stat = 0ul;
      this->aux3_stat_pri = 0ul;
      this->aux3_stat_set = 0ul;
      this->aux3_stat_clr = 0ul;
      this->aux4_stat = 0ul;
      this->aux4_stat_pri = 0ul;
      this->aux4_stat_set = 0ul;
      this->aux4_stat_clr = 0ul;
    }
  }

  explicit RXSTATUS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0ul;
      this->num_status_codes = 0ul;
      this->rxstat = 0ul;
      this->rxstat_pri_mask = 0ul;
      this->rxstat_set_mask = 0ul;
      this->rxstat_clr_mask = 0ul;
      this->aux1_stat = 0ul;
      this->aux1_stat_pri = 0ul;
      this->aux1_stat_set = 0ul;
      this->aux1_stat_clr = 0ul;
      this->aux2_stat = 0ul;
      this->aux2_stat_pri = 0ul;
      this->aux2_stat_set = 0ul;
      this->aux2_stat_clr = 0ul;
      this->aux3_stat = 0ul;
      this->aux3_stat_pri = 0ul;
      this->aux3_stat_set = 0ul;
      this->aux3_stat_clr = 0ul;
      this->aux4_stat = 0ul;
      this->aux4_stat_pri = 0ul;
      this->aux4_stat_set = 0ul;
      this->aux4_stat_clr = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _error_type =
    uint32_t;
  _error_type error;
  using _num_status_codes_type =
    uint32_t;
  _num_status_codes_type num_status_codes;
  using _rxstat_type =
    uint32_t;
  _rxstat_type rxstat;
  using _rxstat_pri_mask_type =
    uint32_t;
  _rxstat_pri_mask_type rxstat_pri_mask;
  using _rxstat_set_mask_type =
    uint32_t;
  _rxstat_set_mask_type rxstat_set_mask;
  using _rxstat_clr_mask_type =
    uint32_t;
  _rxstat_clr_mask_type rxstat_clr_mask;
  using _aux1_stat_type =
    uint32_t;
  _aux1_stat_type aux1_stat;
  using _aux1_stat_pri_type =
    uint32_t;
  _aux1_stat_pri_type aux1_stat_pri;
  using _aux1_stat_set_type =
    uint32_t;
  _aux1_stat_set_type aux1_stat_set;
  using _aux1_stat_clr_type =
    uint32_t;
  _aux1_stat_clr_type aux1_stat_clr;
  using _aux2_stat_type =
    uint32_t;
  _aux2_stat_type aux2_stat;
  using _aux2_stat_pri_type =
    uint32_t;
  _aux2_stat_pri_type aux2_stat_pri;
  using _aux2_stat_set_type =
    uint32_t;
  _aux2_stat_set_type aux2_stat_set;
  using _aux2_stat_clr_type =
    uint32_t;
  _aux2_stat_clr_type aux2_stat_clr;
  using _aux3_stat_type =
    uint32_t;
  _aux3_stat_type aux3_stat;
  using _aux3_stat_pri_type =
    uint32_t;
  _aux3_stat_pri_type aux3_stat_pri;
  using _aux3_stat_set_type =
    uint32_t;
  _aux3_stat_set_type aux3_stat_set;
  using _aux3_stat_clr_type =
    uint32_t;
  _aux3_stat_clr_type aux3_stat_clr;
  using _aux4_stat_type =
    uint32_t;
  _aux4_stat_type aux4_stat;
  using _aux4_stat_pri_type =
    uint32_t;
  _aux4_stat_pri_type aux4_stat_pri;
  using _aux4_stat_set_type =
    uint32_t;
  _aux4_stat_set_type aux4_stat_set;
  using _aux4_stat_clr_type =
    uint32_t;
  _aux4_stat_clr_type aux4_stat_clr;
  using _error_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _error_bits_type error_bits;
  using _error_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _error_strs_type error_strs;
  using _rxstat_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _rxstat_bits_type rxstat_bits;
  using _rxstat_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _rxstat_strs_type rxstat_strs;
  using _aux1_stat_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _aux1_stat_bits_type aux1_stat_bits;
  using _aux1_stat_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _aux1_stat_strs_type aux1_stat_strs;
  using _aux2_stat_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _aux2_stat_bits_type aux2_stat_bits;
  using _aux2_stat_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _aux2_stat_strs_type aux2_stat_strs;
  using _aux3_stat_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _aux3_stat_bits_type aux3_stat_bits;
  using _aux3_stat_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _aux3_stat_strs_type aux3_stat_strs;
  using _aux4_stat_bits_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _aux4_stat_bits_type aux4_stat_bits;
  using _aux4_stat_strs_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _aux4_stat_strs_type aux4_stat_strs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nov_header(
    const novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> & _arg)
  {
    this->nov_header = _arg;
    return *this;
  }
  Type & set__error(
    const uint32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__num_status_codes(
    const uint32_t & _arg)
  {
    this->num_status_codes = _arg;
    return *this;
  }
  Type & set__rxstat(
    const uint32_t & _arg)
  {
    this->rxstat = _arg;
    return *this;
  }
  Type & set__rxstat_pri_mask(
    const uint32_t & _arg)
  {
    this->rxstat_pri_mask = _arg;
    return *this;
  }
  Type & set__rxstat_set_mask(
    const uint32_t & _arg)
  {
    this->rxstat_set_mask = _arg;
    return *this;
  }
  Type & set__rxstat_clr_mask(
    const uint32_t & _arg)
  {
    this->rxstat_clr_mask = _arg;
    return *this;
  }
  Type & set__aux1_stat(
    const uint32_t & _arg)
  {
    this->aux1_stat = _arg;
    return *this;
  }
  Type & set__aux1_stat_pri(
    const uint32_t & _arg)
  {
    this->aux1_stat_pri = _arg;
    return *this;
  }
  Type & set__aux1_stat_set(
    const uint32_t & _arg)
  {
    this->aux1_stat_set = _arg;
    return *this;
  }
  Type & set__aux1_stat_clr(
    const uint32_t & _arg)
  {
    this->aux1_stat_clr = _arg;
    return *this;
  }
  Type & set__aux2_stat(
    const uint32_t & _arg)
  {
    this->aux2_stat = _arg;
    return *this;
  }
  Type & set__aux2_stat_pri(
    const uint32_t & _arg)
  {
    this->aux2_stat_pri = _arg;
    return *this;
  }
  Type & set__aux2_stat_set(
    const uint32_t & _arg)
  {
    this->aux2_stat_set = _arg;
    return *this;
  }
  Type & set__aux2_stat_clr(
    const uint32_t & _arg)
  {
    this->aux2_stat_clr = _arg;
    return *this;
  }
  Type & set__aux3_stat(
    const uint32_t & _arg)
  {
    this->aux3_stat = _arg;
    return *this;
  }
  Type & set__aux3_stat_pri(
    const uint32_t & _arg)
  {
    this->aux3_stat_pri = _arg;
    return *this;
  }
  Type & set__aux3_stat_set(
    const uint32_t & _arg)
  {
    this->aux3_stat_set = _arg;
    return *this;
  }
  Type & set__aux3_stat_clr(
    const uint32_t & _arg)
  {
    this->aux3_stat_clr = _arg;
    return *this;
  }
  Type & set__aux4_stat(
    const uint32_t & _arg)
  {
    this->aux4_stat = _arg;
    return *this;
  }
  Type & set__aux4_stat_pri(
    const uint32_t & _arg)
  {
    this->aux4_stat_pri = _arg;
    return *this;
  }
  Type & set__aux4_stat_set(
    const uint32_t & _arg)
  {
    this->aux4_stat_set = _arg;
    return *this;
  }
  Type & set__aux4_stat_clr(
    const uint32_t & _arg)
  {
    this->aux4_stat_clr = _arg;
    return *this;
  }
  Type & set__error_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->error_bits = _arg;
    return *this;
  }
  Type & set__error_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->error_strs = _arg;
    return *this;
  }
  Type & set__rxstat_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->rxstat_bits = _arg;
    return *this;
  }
  Type & set__rxstat_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->rxstat_strs = _arg;
    return *this;
  }
  Type & set__aux1_stat_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->aux1_stat_bits = _arg;
    return *this;
  }
  Type & set__aux1_stat_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->aux1_stat_strs = _arg;
    return *this;
  }
  Type & set__aux2_stat_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->aux2_stat_bits = _arg;
    return *this;
  }
  Type & set__aux2_stat_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->aux2_stat_strs = _arg;
    return *this;
  }
  Type & set__aux3_stat_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->aux3_stat_bits = _arg;
    return *this;
  }
  Type & set__aux3_stat_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->aux3_stat_strs = _arg;
    return *this;
  }
  Type & set__aux4_stat_bits(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->aux4_stat_bits = _arg;
    return *this;
  }
  Type & set__aux4_stat_strs(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 32, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->aux4_stat_strs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__RXSTATUS
    std::shared_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__RXSTATUS
    std::shared_ptr<novatel_oem7_msgs::msg::RXSTATUS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RXSTATUS_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->num_status_codes != other.num_status_codes) {
      return false;
    }
    if (this->rxstat != other.rxstat) {
      return false;
    }
    if (this->rxstat_pri_mask != other.rxstat_pri_mask) {
      return false;
    }
    if (this->rxstat_set_mask != other.rxstat_set_mask) {
      return false;
    }
    if (this->rxstat_clr_mask != other.rxstat_clr_mask) {
      return false;
    }
    if (this->aux1_stat != other.aux1_stat) {
      return false;
    }
    if (this->aux1_stat_pri != other.aux1_stat_pri) {
      return false;
    }
    if (this->aux1_stat_set != other.aux1_stat_set) {
      return false;
    }
    if (this->aux1_stat_clr != other.aux1_stat_clr) {
      return false;
    }
    if (this->aux2_stat != other.aux2_stat) {
      return false;
    }
    if (this->aux2_stat_pri != other.aux2_stat_pri) {
      return false;
    }
    if (this->aux2_stat_set != other.aux2_stat_set) {
      return false;
    }
    if (this->aux2_stat_clr != other.aux2_stat_clr) {
      return false;
    }
    if (this->aux3_stat != other.aux3_stat) {
      return false;
    }
    if (this->aux3_stat_pri != other.aux3_stat_pri) {
      return false;
    }
    if (this->aux3_stat_set != other.aux3_stat_set) {
      return false;
    }
    if (this->aux3_stat_clr != other.aux3_stat_clr) {
      return false;
    }
    if (this->aux4_stat != other.aux4_stat) {
      return false;
    }
    if (this->aux4_stat_pri != other.aux4_stat_pri) {
      return false;
    }
    if (this->aux4_stat_set != other.aux4_stat_set) {
      return false;
    }
    if (this->aux4_stat_clr != other.aux4_stat_clr) {
      return false;
    }
    if (this->error_bits != other.error_bits) {
      return false;
    }
    if (this->error_strs != other.error_strs) {
      return false;
    }
    if (this->rxstat_bits != other.rxstat_bits) {
      return false;
    }
    if (this->rxstat_strs != other.rxstat_strs) {
      return false;
    }
    if (this->aux1_stat_bits != other.aux1_stat_bits) {
      return false;
    }
    if (this->aux1_stat_strs != other.aux1_stat_strs) {
      return false;
    }
    if (this->aux2_stat_bits != other.aux2_stat_bits) {
      return false;
    }
    if (this->aux2_stat_strs != other.aux2_stat_strs) {
      return false;
    }
    if (this->aux3_stat_bits != other.aux3_stat_bits) {
      return false;
    }
    if (this->aux3_stat_strs != other.aux3_stat_strs) {
      return false;
    }
    if (this->aux4_stat_bits != other.aux4_stat_bits) {
      return false;
    }
    if (this->aux4_stat_strs != other.aux4_stat_strs) {
      return false;
    }
    return true;
  }
  bool operator!=(const RXSTATUS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RXSTATUS_

// alias to use template instance with default allocator
using RXSTATUS =
  novatel_oem7_msgs::msg::RXSTATUS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_HPP_
