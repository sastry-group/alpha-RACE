// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__FUNCTIONS_H_
#define AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autonoma_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autonoma_msgs/msg/detail/powertrain_data__struct.h"

/// Initialize msg/PowertrainData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autonoma_msgs__msg__PowertrainData
 * )) before or use
 * autonoma_msgs__msg__PowertrainData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__init(autonoma_msgs__msg__PowertrainData * msg);

/// Finalize msg/PowertrainData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
void
autonoma_msgs__msg__PowertrainData__fini(autonoma_msgs__msg__PowertrainData * msg);

/// Create msg/PowertrainData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autonoma_msgs__msg__PowertrainData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
autonoma_msgs__msg__PowertrainData *
autonoma_msgs__msg__PowertrainData__create();

/// Destroy msg/PowertrainData message.
/**
 * It calls
 * autonoma_msgs__msg__PowertrainData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
void
autonoma_msgs__msg__PowertrainData__destroy(autonoma_msgs__msg__PowertrainData * msg);

/// Check for msg/PowertrainData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__are_equal(const autonoma_msgs__msg__PowertrainData * lhs, const autonoma_msgs__msg__PowertrainData * rhs);

/// Copy a msg/PowertrainData message.
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
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__copy(
  const autonoma_msgs__msg__PowertrainData * input,
  autonoma_msgs__msg__PowertrainData * output);

/// Initialize array of msg/PowertrainData messages.
/**
 * It allocates the memory for the number of elements and calls
 * autonoma_msgs__msg__PowertrainData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__Sequence__init(autonoma_msgs__msg__PowertrainData__Sequence * array, size_t size);

/// Finalize array of msg/PowertrainData messages.
/**
 * It calls
 * autonoma_msgs__msg__PowertrainData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
void
autonoma_msgs__msg__PowertrainData__Sequence__fini(autonoma_msgs__msg__PowertrainData__Sequence * array);

/// Create array of msg/PowertrainData messages.
/**
 * It allocates the memory for the array and calls
 * autonoma_msgs__msg__PowertrainData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
autonoma_msgs__msg__PowertrainData__Sequence *
autonoma_msgs__msg__PowertrainData__Sequence__create(size_t size);

/// Destroy array of msg/PowertrainData messages.
/**
 * It calls
 * autonoma_msgs__msg__PowertrainData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
void
autonoma_msgs__msg__PowertrainData__Sequence__destroy(autonoma_msgs__msg__PowertrainData__Sequence * array);

/// Check for msg/PowertrainData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__Sequence__are_equal(const autonoma_msgs__msg__PowertrainData__Sequence * lhs, const autonoma_msgs__msg__PowertrainData__Sequence * rhs);

/// Copy an array of msg/PowertrainData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autonoma_msgs
bool
autonoma_msgs__msg__PowertrainData__Sequence__copy(
  const autonoma_msgs__msg__PowertrainData__Sequence * input,
  autonoma_msgs__msg__PowertrainData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__FUNCTIONS_H_
