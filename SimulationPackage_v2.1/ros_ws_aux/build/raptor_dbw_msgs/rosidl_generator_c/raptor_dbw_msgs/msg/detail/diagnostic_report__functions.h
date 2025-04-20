// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__FUNCTIONS_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raptor_dbw_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raptor_dbw_msgs/msg/detail/diagnostic_report__struct.h"

/// Initialize msg/DiagnosticReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raptor_dbw_msgs__msg__DiagnosticReport
 * )) before or use
 * raptor_dbw_msgs__msg__DiagnosticReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__DiagnosticReport__init(raptor_dbw_msgs__msg__DiagnosticReport * msg);

/// Finalize msg/DiagnosticReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__DiagnosticReport__fini(raptor_dbw_msgs__msg__DiagnosticReport * msg);

/// Create msg/DiagnosticReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raptor_dbw_msgs__msg__DiagnosticReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__DiagnosticReport *
raptor_dbw_msgs__msg__DiagnosticReport__create();

/// Destroy msg/DiagnosticReport message.
/**
 * It calls
 * raptor_dbw_msgs__msg__DiagnosticReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__DiagnosticReport__destroy(raptor_dbw_msgs__msg__DiagnosticReport * msg);

/// Check for msg/DiagnosticReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__DiagnosticReport__are_equal(const raptor_dbw_msgs__msg__DiagnosticReport * lhs, const raptor_dbw_msgs__msg__DiagnosticReport * rhs);

/// Copy a msg/DiagnosticReport message.
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
raptor_dbw_msgs__msg__DiagnosticReport__copy(
  const raptor_dbw_msgs__msg__DiagnosticReport * input,
  raptor_dbw_msgs__msg__DiagnosticReport * output);

/// Initialize array of msg/DiagnosticReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * raptor_dbw_msgs__msg__DiagnosticReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__init(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array, size_t size);

/// Finalize array of msg/DiagnosticReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__DiagnosticReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__fini(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array);

/// Create array of msg/DiagnosticReport messages.
/**
 * It allocates the memory for the array and calls
 * raptor_dbw_msgs__msg__DiagnosticReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__DiagnosticReport__Sequence *
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__create(size_t size);

/// Destroy array of msg/DiagnosticReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__DiagnosticReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__destroy(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array);

/// Check for msg/DiagnosticReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__are_equal(const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * lhs, const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * rhs);

/// Copy an array of msg/DiagnosticReport messages.
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
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__copy(
  const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * input,
  raptor_dbw_msgs__msg__DiagnosticReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__FUNCTIONS_H_
