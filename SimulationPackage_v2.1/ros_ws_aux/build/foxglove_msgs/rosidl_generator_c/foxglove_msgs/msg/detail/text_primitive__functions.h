// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from foxglove_msgs:msg/TextPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__FUNCTIONS_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "foxglove_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "foxglove_msgs/msg/detail/text_primitive__struct.h"

/// Initialize msg/TextPrimitive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * foxglove_msgs__msg__TextPrimitive
 * )) before or use
 * foxglove_msgs__msg__TextPrimitive__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__init(foxglove_msgs__msg__TextPrimitive * msg);

/// Finalize msg/TextPrimitive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TextPrimitive__fini(foxglove_msgs__msg__TextPrimitive * msg);

/// Create msg/TextPrimitive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * foxglove_msgs__msg__TextPrimitive__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TextPrimitive *
foxglove_msgs__msg__TextPrimitive__create();

/// Destroy msg/TextPrimitive message.
/**
 * It calls
 * foxglove_msgs__msg__TextPrimitive__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TextPrimitive__destroy(foxglove_msgs__msg__TextPrimitive * msg);

/// Check for msg/TextPrimitive message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__are_equal(const foxglove_msgs__msg__TextPrimitive * lhs, const foxglove_msgs__msg__TextPrimitive * rhs);

/// Copy a msg/TextPrimitive message.
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
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__copy(
  const foxglove_msgs__msg__TextPrimitive * input,
  foxglove_msgs__msg__TextPrimitive * output);

/// Initialize array of msg/TextPrimitive messages.
/**
 * It allocates the memory for the number of elements and calls
 * foxglove_msgs__msg__TextPrimitive__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__Sequence__init(foxglove_msgs__msg__TextPrimitive__Sequence * array, size_t size);

/// Finalize array of msg/TextPrimitive messages.
/**
 * It calls
 * foxglove_msgs__msg__TextPrimitive__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TextPrimitive__Sequence__fini(foxglove_msgs__msg__TextPrimitive__Sequence * array);

/// Create array of msg/TextPrimitive messages.
/**
 * It allocates the memory for the array and calls
 * foxglove_msgs__msg__TextPrimitive__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TextPrimitive__Sequence *
foxglove_msgs__msg__TextPrimitive__Sequence__create(size_t size);

/// Destroy array of msg/TextPrimitive messages.
/**
 * It calls
 * foxglove_msgs__msg__TextPrimitive__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TextPrimitive__Sequence__destroy(foxglove_msgs__msg__TextPrimitive__Sequence * array);

/// Check for msg/TextPrimitive message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__Sequence__are_equal(const foxglove_msgs__msg__TextPrimitive__Sequence * lhs, const foxglove_msgs__msg__TextPrimitive__Sequence * rhs);

/// Copy an array of msg/TextPrimitive messages.
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
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TextPrimitive__Sequence__copy(
  const foxglove_msgs__msg__TextPrimitive__Sequence * input,
  foxglove_msgs__msg__TextPrimitive__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_PRIMITIVE__FUNCTIONS_H_
