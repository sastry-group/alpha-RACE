// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raptor_dbw_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__FUNCTIONS_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raptor_dbw_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raptor_dbw_msgs/msg/detail/brake_report__struct.h"

/// Initialize msg/BrakeReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raptor_dbw_msgs__msg__BrakeReport
 * )) before or use
 * raptor_dbw_msgs__msg__BrakeReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__BrakeReport__init(raptor_dbw_msgs__msg__BrakeReport * msg);

/// Finalize msg/BrakeReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__BrakeReport__fini(raptor_dbw_msgs__msg__BrakeReport * msg);

/// Create msg/BrakeReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raptor_dbw_msgs__msg__BrakeReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__BrakeReport *
raptor_dbw_msgs__msg__BrakeReport__create();

/// Destroy msg/BrakeReport message.
/**
 * It calls
 * raptor_dbw_msgs__msg__BrakeReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__BrakeReport__destroy(raptor_dbw_msgs__msg__BrakeReport * msg);

/// Check for msg/BrakeReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__BrakeReport__are_equal(const raptor_dbw_msgs__msg__BrakeReport * lhs, const raptor_dbw_msgs__msg__BrakeReport * rhs);

/// Copy a msg/BrakeReport message.
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
raptor_dbw_msgs__msg__BrakeReport__copy(
  const raptor_dbw_msgs__msg__BrakeReport * input,
  raptor_dbw_msgs__msg__BrakeReport * output);

/// Initialize array of msg/BrakeReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * raptor_dbw_msgs__msg__BrakeReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__BrakeReport__Sequence__init(raptor_dbw_msgs__msg__BrakeReport__Sequence * array, size_t size);

/// Finalize array of msg/BrakeReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__BrakeReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__BrakeReport__Sequence__fini(raptor_dbw_msgs__msg__BrakeReport__Sequence * array);

/// Create array of msg/BrakeReport messages.
/**
 * It allocates the memory for the array and calls
 * raptor_dbw_msgs__msg__BrakeReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
raptor_dbw_msgs__msg__BrakeReport__Sequence *
raptor_dbw_msgs__msg__BrakeReport__Sequence__create(size_t size);

/// Destroy array of msg/BrakeReport messages.
/**
 * It calls
 * raptor_dbw_msgs__msg__BrakeReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
void
raptor_dbw_msgs__msg__BrakeReport__Sequence__destroy(raptor_dbw_msgs__msg__BrakeReport__Sequence * array);

/// Check for msg/BrakeReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raptor_dbw_msgs
bool
raptor_dbw_msgs__msg__BrakeReport__Sequence__are_equal(const raptor_dbw_msgs__msg__BrakeReport__Sequence * lhs, const raptor_dbw_msgs__msg__BrakeReport__Sequence * rhs);

/// Copy an array of msg/BrakeReport messages.
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
raptor_dbw_msgs__msg__BrakeReport__Sequence__copy(
  const raptor_dbw_msgs__msg__BrakeReport__Sequence * input,
  raptor_dbw_msgs__msg__BrakeReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__FUNCTIONS_H_
