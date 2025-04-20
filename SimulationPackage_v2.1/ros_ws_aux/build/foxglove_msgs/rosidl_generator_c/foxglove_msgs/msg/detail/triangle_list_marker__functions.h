// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from foxglove_msgs:msg/TriangleListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__FUNCTIONS_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "foxglove_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "foxglove_msgs/msg/detail/triangle_list_marker__struct.h"

/// Initialize msg/TriangleListMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * foxglove_msgs__msg__TriangleListMarker
 * )) before or use
 * foxglove_msgs__msg__TriangleListMarker__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListMarker__init(foxglove_msgs__msg__TriangleListMarker * msg);

/// Finalize msg/TriangleListMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListMarker__fini(foxglove_msgs__msg__TriangleListMarker * msg);

/// Create msg/TriangleListMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * foxglove_msgs__msg__TriangleListMarker__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TriangleListMarker *
foxglove_msgs__msg__TriangleListMarker__create();

/// Destroy msg/TriangleListMarker message.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListMarker__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListMarker__destroy(foxglove_msgs__msg__TriangleListMarker * msg);

/// Check for msg/TriangleListMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListMarker__are_equal(const foxglove_msgs__msg__TriangleListMarker * lhs, const foxglove_msgs__msg__TriangleListMarker * rhs);

/// Copy a msg/TriangleListMarker message.
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
foxglove_msgs__msg__TriangleListMarker__copy(
  const foxglove_msgs__msg__TriangleListMarker * input,
  foxglove_msgs__msg__TriangleListMarker * output);

/// Initialize array of msg/TriangleListMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * foxglove_msgs__msg__TriangleListMarker__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListMarker__Sequence__init(foxglove_msgs__msg__TriangleListMarker__Sequence * array, size_t size);

/// Finalize array of msg/TriangleListMarker messages.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListMarker__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListMarker__Sequence__fini(foxglove_msgs__msg__TriangleListMarker__Sequence * array);

/// Create array of msg/TriangleListMarker messages.
/**
 * It allocates the memory for the array and calls
 * foxglove_msgs__msg__TriangleListMarker__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__TriangleListMarker__Sequence *
foxglove_msgs__msg__TriangleListMarker__Sequence__create(size_t size);

/// Destroy array of msg/TriangleListMarker messages.
/**
 * It calls
 * foxglove_msgs__msg__TriangleListMarker__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__TriangleListMarker__Sequence__destroy(foxglove_msgs__msg__TriangleListMarker__Sequence * array);

/// Check for msg/TriangleListMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__TriangleListMarker__Sequence__are_equal(const foxglove_msgs__msg__TriangleListMarker__Sequence * lhs, const foxglove_msgs__msg__TriangleListMarker__Sequence * rhs);

/// Copy an array of msg/TriangleListMarker messages.
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
foxglove_msgs__msg__TriangleListMarker__Sequence__copy(
  const foxglove_msgs__msg__TriangleListMarker__Sequence * input,
  foxglove_msgs__msg__TriangleListMarker__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRIANGLE_LIST_MARKER__FUNCTIONS_H_
