// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from foxglove_msgs:msg/FrameTransformList.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__FUNCTIONS_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "foxglove_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "foxglove_msgs/msg/detail/frame_transform_list__struct.h"

/// Initialize msg/FrameTransformList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * foxglove_msgs__msg__FrameTransformList
 * )) before or use
 * foxglove_msgs__msg__FrameTransformList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__FrameTransformList__init(foxglove_msgs__msg__FrameTransformList * msg);

/// Finalize msg/FrameTransformList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__FrameTransformList__fini(foxglove_msgs__msg__FrameTransformList * msg);

/// Create msg/FrameTransformList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * foxglove_msgs__msg__FrameTransformList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__FrameTransformList *
foxglove_msgs__msg__FrameTransformList__create();

/// Destroy msg/FrameTransformList message.
/**
 * It calls
 * foxglove_msgs__msg__FrameTransformList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__FrameTransformList__destroy(foxglove_msgs__msg__FrameTransformList * msg);

/// Check for msg/FrameTransformList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__FrameTransformList__are_equal(const foxglove_msgs__msg__FrameTransformList * lhs, const foxglove_msgs__msg__FrameTransformList * rhs);

/// Copy a msg/FrameTransformList message.
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
foxglove_msgs__msg__FrameTransformList__copy(
  const foxglove_msgs__msg__FrameTransformList * input,
  foxglove_msgs__msg__FrameTransformList * output);

/// Initialize array of msg/FrameTransformList messages.
/**
 * It allocates the memory for the number of elements and calls
 * foxglove_msgs__msg__FrameTransformList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__FrameTransformList__Sequence__init(foxglove_msgs__msg__FrameTransformList__Sequence * array, size_t size);

/// Finalize array of msg/FrameTransformList messages.
/**
 * It calls
 * foxglove_msgs__msg__FrameTransformList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__FrameTransformList__Sequence__fini(foxglove_msgs__msg__FrameTransformList__Sequence * array);

/// Create array of msg/FrameTransformList messages.
/**
 * It allocates the memory for the array and calls
 * foxglove_msgs__msg__FrameTransformList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
foxglove_msgs__msg__FrameTransformList__Sequence *
foxglove_msgs__msg__FrameTransformList__Sequence__create(size_t size);

/// Destroy array of msg/FrameTransformList messages.
/**
 * It calls
 * foxglove_msgs__msg__FrameTransformList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
void
foxglove_msgs__msg__FrameTransformList__Sequence__destroy(foxglove_msgs__msg__FrameTransformList__Sequence * array);

/// Check for msg/FrameTransformList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_foxglove_msgs
bool
foxglove_msgs__msg__FrameTransformList__Sequence__are_equal(const foxglove_msgs__msg__FrameTransformList__Sequence * lhs, const foxglove_msgs__msg__FrameTransformList__Sequence * rhs);

/// Copy an array of msg/FrameTransformList messages.
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
foxglove_msgs__msg__FrameTransformList__Sequence__copy(
  const foxglove_msgs__msg__FrameTransformList__Sequence * input,
  foxglove_msgs__msg__FrameTransformList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__FRAME_TRANSFORM_LIST__FUNCTIONS_H_
