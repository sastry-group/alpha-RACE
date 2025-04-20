// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__FUNCTIONS_H_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "npc_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "npc_controller_msgs/msg/detail/tire_report__struct.h"

/// Initialize msg/TireReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * npc_controller_msgs__msg__TireReport
 * )) before or use
 * npc_controller_msgs__msg__TireReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__init(npc_controller_msgs__msg__TireReport * msg);

/// Finalize msg/TireReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
void
npc_controller_msgs__msg__TireReport__fini(npc_controller_msgs__msg__TireReport * msg);

/// Create msg/TireReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * npc_controller_msgs__msg__TireReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
npc_controller_msgs__msg__TireReport *
npc_controller_msgs__msg__TireReport__create();

/// Destroy msg/TireReport message.
/**
 * It calls
 * npc_controller_msgs__msg__TireReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
void
npc_controller_msgs__msg__TireReport__destroy(npc_controller_msgs__msg__TireReport * msg);

/// Check for msg/TireReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__are_equal(const npc_controller_msgs__msg__TireReport * lhs, const npc_controller_msgs__msg__TireReport * rhs);

/// Copy a msg/TireReport message.
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
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__copy(
  const npc_controller_msgs__msg__TireReport * input,
  npc_controller_msgs__msg__TireReport * output);

/// Initialize array of msg/TireReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * npc_controller_msgs__msg__TireReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__Sequence__init(npc_controller_msgs__msg__TireReport__Sequence * array, size_t size);

/// Finalize array of msg/TireReport messages.
/**
 * It calls
 * npc_controller_msgs__msg__TireReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
void
npc_controller_msgs__msg__TireReport__Sequence__fini(npc_controller_msgs__msg__TireReport__Sequence * array);

/// Create array of msg/TireReport messages.
/**
 * It allocates the memory for the array and calls
 * npc_controller_msgs__msg__TireReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
npc_controller_msgs__msg__TireReport__Sequence *
npc_controller_msgs__msg__TireReport__Sequence__create(size_t size);

/// Destroy array of msg/TireReport messages.
/**
 * It calls
 * npc_controller_msgs__msg__TireReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
void
npc_controller_msgs__msg__TireReport__Sequence__destroy(npc_controller_msgs__msg__TireReport__Sequence * array);

/// Check for msg/TireReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__Sequence__are_equal(const npc_controller_msgs__msg__TireReport__Sequence * lhs, const npc_controller_msgs__msg__TireReport__Sequence * rhs);

/// Copy an array of msg/TireReport messages.
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
ROSIDL_GENERATOR_C_PUBLIC_npc_controller_msgs
bool
npc_controller_msgs__msg__TireReport__Sequence__copy(
  const npc_controller_msgs__msg__TireReport__Sequence * input,
  npc_controller_msgs__msg__TireReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__FUNCTIONS_H_
