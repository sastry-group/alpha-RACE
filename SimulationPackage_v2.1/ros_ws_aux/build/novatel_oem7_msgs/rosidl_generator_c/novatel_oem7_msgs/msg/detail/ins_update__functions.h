// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from novatel_oem7_msgs:msg/INSUpdate.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__FUNCTIONS_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "novatel_oem7_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "novatel_oem7_msgs/msg/detail/ins_update__struct.h"

/// Initialize msg/INSUpdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * novatel_oem7_msgs__msg__INSUpdate
 * )) before or use
 * novatel_oem7_msgs__msg__INSUpdate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__init(novatel_oem7_msgs__msg__INSUpdate * msg);

/// Finalize msg/INSUpdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__INSUpdate__fini(novatel_oem7_msgs__msg__INSUpdate * msg);

/// Create msg/INSUpdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * novatel_oem7_msgs__msg__INSUpdate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
novatel_oem7_msgs__msg__INSUpdate *
novatel_oem7_msgs__msg__INSUpdate__create();

/// Destroy msg/INSUpdate message.
/**
 * It calls
 * novatel_oem7_msgs__msg__INSUpdate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__INSUpdate__destroy(novatel_oem7_msgs__msg__INSUpdate * msg);

/// Check for msg/INSUpdate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__are_equal(const novatel_oem7_msgs__msg__INSUpdate * lhs, const novatel_oem7_msgs__msg__INSUpdate * rhs);

/// Copy a msg/INSUpdate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__copy(
  const novatel_oem7_msgs__msg__INSUpdate * input,
  novatel_oem7_msgs__msg__INSUpdate * output);

/// Initialize array of msg/INSUpdate messages.
/**
 * It allocates the memory for the number of elements and calls
 * novatel_oem7_msgs__msg__INSUpdate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__Sequence__init(novatel_oem7_msgs__msg__INSUpdate__Sequence * array, size_t size);

/// Finalize array of msg/INSUpdate messages.
/**
 * It calls
 * novatel_oem7_msgs__msg__INSUpdate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__INSUpdate__Sequence__fini(novatel_oem7_msgs__msg__INSUpdate__Sequence * array);

/// Create array of msg/INSUpdate messages.
/**
 * It allocates the memory for the array and calls
 * novatel_oem7_msgs__msg__INSUpdate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
novatel_oem7_msgs__msg__INSUpdate__Sequence *
novatel_oem7_msgs__msg__INSUpdate__Sequence__create(size_t size);

/// Destroy array of msg/INSUpdate messages.
/**
 * It calls
 * novatel_oem7_msgs__msg__INSUpdate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__INSUpdate__Sequence__destroy(novatel_oem7_msgs__msg__INSUpdate__Sequence * array);

/// Check for msg/INSUpdate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__Sequence__are_equal(const novatel_oem7_msgs__msg__INSUpdate__Sequence * lhs, const novatel_oem7_msgs__msg__INSUpdate__Sequence * rhs);

/// Copy an array of msg/INSUpdate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__INSUpdate__Sequence__copy(
  const novatel_oem7_msgs__msg__INSUpdate__Sequence * input,
  novatel_oem7_msgs__msg__INSUpdate__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__FUNCTIONS_H_
