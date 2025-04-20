// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__FUNCTIONS_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raptor_dbw_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raptor_dbw_msgs/msg/detail/surround_report__struct.h"

/// Initialize msg/SurroundReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raptor_dbw_msgs__msg__SurroundReport
 * )) before or use
 * raptor_dbw_msgs__msg__SurroundReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__init(raptor_dbw_msgs__msg__SurroundReport * msg);

/// Finalize msg/SurroundReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__SurroundReport__fini(raptor_dbw_msgs__msg__SurroundReport * msg);

/// Create msg/SurroundReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raptor_dbw_msgs__msg__SurroundReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__SurroundReport *
raptor_dbw_msgs__msg__SurroundReport__create();

/// Destroy msg/SurroundReport message.
/**
 * It calls
 * raptor_dbw_msgs__msg__SurroundReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__SurroundReport__destroy(raptor_dbw_msgs__msg__SurroundReport * msg);

/// Check for msg/SurroundReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__are_equal(const raptor_dbw_msgs__msg__SurroundReport * lhs, const raptor_dbw_msgs__msg__SurroundReport * rhs);

/// Copy a msg/SurroundReport message.
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
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__copy(
  const raptor_dbw_msgs__msg__SurroundReport * input,
  raptor_dbw_msgs__msg__SurroundReport * output);

/// Initialize array of msg/SurroundReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * raptor_dbw_msgs__msg__SurroundReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__init(raptor_dbw_msgs__msg__SurroundReport__Sequence * array, size_t size);

/// Finalize array of msg/SurroundReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__SurroundReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__SurroundReport__Sequence__fini(raptor_dbw_msgs__msg__SurroundReport__Sequence * array);

/// Create array of msg/SurroundReport messages.
/**
 * It allocates the memory for the array and calls
 * raptor_dbw_msgs__msg__SurroundReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__SurroundReport__Sequence *
raptor_dbw_msgs__msg__SurroundReport__Sequence__create(size_t size);

/// Destroy array of msg/SurroundReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__SurroundReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__SurroundReport__Sequence__destroy(raptor_dbw_msgs__msg__SurroundReport__Sequence * array);

/// Check for msg/SurroundReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__are_equal(const raptor_dbw_msgs__msg__SurroundReport__Sequence * lhs, const raptor_dbw_msgs__msg__SurroundReport__Sequence * rhs);

/// Copy an array of msg/SurroundReport messages.
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
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__copy(
  const raptor_dbw_msgs__msg__SurroundReport__Sequence * input,
  raptor_dbw_msgs__msg__SurroundReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__FUNCTIONS_H_
