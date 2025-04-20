// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from foxglove_msgs:msg/TriangleListPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__FUNCTIONS_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "foxglove_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "foxglove_msgs/msg/detail/triangle_list_primitive__struct.h"

/// Initialize msg/TriangleListPrimitive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * foxglove_msgs__msg__TriangleListPrimitive
 * )) before or use
 * foxglove_msgs__msg__TriangleListPrimitive__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListPrimitive__init(foxglove_msgs__msg__TriangleListPrimitive * msg);

/// Finalize msg/TriangleListPrimitive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListPrimitive__fini(foxglove_msgs__msg__TriangleListPrimitive * msg);

/// Create msg/TriangleListPrimitive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * foxglove_msgs__msg__TriangleListPrimitive__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TriangleListPrimitive *
foxglove_msgs__msg__TriangleListPrimitive__create();

/// Destroy msg/TriangleListPrimitive message.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListPrimitive__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListPrimitive__destroy(foxglove_msgs__msg__TriangleListPrimitive * msg);

/// Check for msg/TriangleListPrimitive message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListPrimitive__are_equal(const foxglove_msgs__msg__TriangleListPrimitive * lhs, const foxglove_msgs__msg__TriangleListPrimitive * rhs);

/// Copy a msg/TriangleListPrimitive message.
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
foxglove_msgs__msg__TriangleListPrimitive__copy(
  const foxglove_msgs__msg__TriangleListPrimitive * input,
  foxglove_msgs__msg__TriangleListPrimitive * output);

/// Initialize array of msg/TriangleListPrimitive messages.
/**
 * It allocates the memory for the number of elements and calls
 * foxglove_msgs__msg__TriangleListPrimitive__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListPrimitive__Sequence__init(foxglove_msgs__msg__TriangleListPrimitive__Sequence * array, size_t size);

/// Finalize array of msg/TriangleListPrimitive messages.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListPrimitive__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListPrimitive__Sequence__fini(foxglove_msgs__msg__TriangleListPrimitive__Sequence * array);

/// Create array of msg/TriangleListPrimitive messages.
/**
 * It allocates the memory for the array and calls
 * foxglove_msgs__msg__TriangleListPrimitive__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TriangleListPrimitive__Sequence *
foxglove_msgs__msg__TriangleListPrimitive__Sequence__create(size_t size);

/// Destroy array of msg/TriangleListPrimitive messages.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListPrimitive__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListPrimitive__Sequence__destroy(foxglove_msgs__msg__TriangleListPrimitive__Sequence * array);

/// Check for msg/TriangleListPrimitive message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListPrimitive__Sequence__are_equal(const foxglove_msgs__msg__TriangleListPrimitive__Sequence * lhs, const foxglove_msgs__msg__TriangleListPrimitive__Sequence * rhs);

/// Copy an array of msg/TriangleListPrimitive messages.
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
foxglove_msgs__msg__TriangleListPrimitive__Sequence__copy(
  const foxglove_msgs__msg__TriangleListPrimitive__Sequence * input,
  foxglove_msgs__msg__TriangleListPrimitive__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_PRIMITIVE__FUNCTIONS_H_
