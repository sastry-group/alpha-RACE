// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from foxglove_msgs:msg/ConeMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__FUNCTIONS_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "foxglove_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "foxglove_msgs/msg/detail/cone_marker__struct.h"

/// Initialize msg/ConeMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * foxglove_msgs__msg__ConeMarker
 * )) before or use
 * foxglove_msgs__msg__ConeMarker__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__ConeMarker__init(foxglove_msgs__msg__ConeMarker * msg);

/// Finalize msg/ConeMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__ConeMarker__fini(foxglove_msgs__msg__ConeMarker * msg);

/// Create msg/ConeMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * foxglove_msgs__msg__ConeMarker__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__ConeMarker *
foxglove_msgs__msg__ConeMarker__create();

/// Destroy msg/ConeMarker message.
/**
 * It calls
 * foxglove_msgs__msg__ConeMarker__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__ConeMarker__destroy(foxglove_msgs__msg__ConeMarker * msg);

/// Check for msg/ConeMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__ConeMarker__are_equal(const foxglove_msgs__msg__ConeMarker * lhs, const foxglove_msgs__msg__ConeMarker * rhs);

/// Copy a msg/ConeMarker message.
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
foxglove_msgs__msg__ConeMarker__copy(
  const foxglove_msgs__msg__ConeMarker * input,
  foxglove_msgs__msg__ConeMarker * output);

/// Initialize array of msg/ConeMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * foxglove_msgs__msg__ConeMarker__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__ConeMarker__Sequence__init(foxglove_msgs__msg__ConeMarker__Sequence * array, size_t size);

/// Finalize array of msg/ConeMarker messages.
/**
 * It calls
 * foxglove_msgs__msg__ConeMarker__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__ConeMarker__Sequence__fini(foxglove_msgs__msg__ConeMarker__Sequence * array);

/// Create array of msg/ConeMarker messages.
/**
 * It allocates the memory for the array and calls
 * foxglove_msgs__msg__ConeMarker__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__ConeMarker__Sequence *
foxglove_msgs__msg__ConeMarker__Sequence__create(size_t size);

/// Destroy array of msg/ConeMarker messages.
/**
 * It calls
 * foxglove_msgs__msg__ConeMarker__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__ConeMarker__Sequence__destroy(foxglove_msgs__msg__ConeMarker__Sequence * array);

/// Check for msg/ConeMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__ConeMarker__Sequence__are_equal(const foxglove_msgs__msg__ConeMarker__Sequence * lhs, const foxglove_msgs__msg__ConeMarker__Sequence * rhs);

/// Copy an array of msg/ConeMarker messages.
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
foxglove_msgs__msg__ConeMarker__Sequence__copy(
  const foxglove_msgs__msg__ConeMarker__Sequence * input,
  foxglove_msgs__msg__ConeMarker__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__FUNCTIONS_H_
