// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from novatel_oem7_msgs:msg/CORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__FUNCTIONS_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "novatel_oem7_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "novatel_oem7_msgs/msg/detail/corrimu__struct.h"

/// Initialize msg/CORRIMU message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * novatel_oem7_msgs__msg__CORRIMU
 * )) before or use
 * novatel_oem7_msgs__msg__CORRIMU__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__CORRIMU__init(novatel_oem7_msgs__msg__CORRIMU * msg);

/// Finalize msg/CORRIMU message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__CORRIMU__fini(novatel_oem7_msgs__msg__CORRIMU * msg);

/// Create msg/CORRIMU message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * novatel_oem7_msgs__msg__CORRIMU__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
novatel_oem7_msgs__msg__CORRIMU *
novatel_oem7_msgs__msg__CORRIMU__create();

/// Destroy msg/CORRIMU message.
/**
 * It calls
 * novatel_oem7_msgs__msg__CORRIMU__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__CORRIMU__destroy(novatel_oem7_msgs__msg__CORRIMU * msg);

/// Check for msg/CORRIMU message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__CORRIMU__are_equal(const novatel_oem7_msgs__msg__CORRIMU * lhs, const novatel_oem7_msgs__msg__CORRIMU * rhs);

/// Copy a msg/CORRIMU message.
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
novatel_oem7_msgs__msg__CORRIMU__copy(
  const novatel_oem7_msgs__msg__CORRIMU * input,
  novatel_oem7_msgs__msg__CORRIMU * output);

/// Initialize array of msg/CORRIMU messages.
/**
 * It allocates the memory for the number of elements and calls
 * novatel_oem7_msgs__msg__CORRIMU__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__CORRIMU__Sequence__init(novatel_oem7_msgs__msg__CORRIMU__Sequence * array, size_t size);

/// Finalize array of msg/CORRIMU messages.
/**
 * It calls
 * novatel_oem7_msgs__msg__CORRIMU__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__CORRIMU__Sequence__fini(novatel_oem7_msgs__msg__CORRIMU__Sequence * array);

/// Create array of msg/CORRIMU messages.
/**
 * It allocates the memory for the array and calls
 * novatel_oem7_msgs__msg__CORRIMU__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
novatel_oem7_msgs__msg__CORRIMU__Sequence *
novatel_oem7_msgs__msg__CORRIMU__Sequence__create(size_t size);

/// Destroy array of msg/CORRIMU messages.
/**
 * It calls
 * novatel_oem7_msgs__msg__CORRIMU__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
void
novatel_oem7_msgs__msg__CORRIMU__Sequence__destroy(novatel_oem7_msgs__msg__CORRIMU__Sequence * array);

/// Check for msg/CORRIMU message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_novatel_oem7_msgs
bool
novatel_oem7_msgs__msg__CORRIMU__Sequence__are_equal(const novatel_oem7_msgs__msg__CORRIMU__Sequence * lhs, const novatel_oem7_msgs__msg__CORRIMU__Sequence * rhs);

/// Copy an array of msg/CORRIMU messages.
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
novatel_oem7_msgs__msg__CORRIMU__Sequence__copy(
  const novatel_oem7_msgs__msg__CORRIMU__Sequence * input,
  novatel_oem7_msgs__msg__CORRIMU__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__FUNCTIONS_H_
