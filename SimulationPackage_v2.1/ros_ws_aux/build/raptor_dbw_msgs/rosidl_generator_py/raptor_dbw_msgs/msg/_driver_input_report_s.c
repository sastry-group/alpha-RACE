// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/driver_input_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/driver_input_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__turn_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__turn_signal__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__high_beam__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__high_beam__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__wiper_front__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__wiper_front__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__driver_input_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("raptor_dbw_msgs.msg._driver_input_report.DriverInputReport", full_classname_dest, 58) == 0);
  }
  raptor_dbw_msgs__msg__DriverInputReport * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__turn_signal__convert_from_py(field, &ros_message->turn_signal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // high_beam_headlights
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_headlights");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__high_beam__convert_from_py(field, &ros_message->high_beam_headlights)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wiper
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__wiper_front__convert_from_py(field, &ros_message->wiper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cruise_resume_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_resume_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cruise_resume_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cruise_cancel_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_cancel_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cruise_cancel_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cruise_accel_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_accel_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cruise_accel_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cruise_decel_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_decel_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cruise_decel_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cruise_on_off_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruise_on_off_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cruise_on_off_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adaptive_cruise_on_off_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "adaptive_cruise_on_off_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adaptive_cruise_on_off_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adaptive_cruise_increase_distance_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "adaptive_cruise_increase_distance_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adaptive_cruise_increase_distance_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adaptive_cruise_decrease_distance_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "adaptive_cruise_decrease_distance_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adaptive_cruise_decrease_distance_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // driver_door_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_door_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->driver_door_ajar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // passenger_door_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "passenger_door_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->passenger_door_ajar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rear_left_door_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_left_door_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rear_left_door_ajar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rear_right_door_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_right_door_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rear_right_door_ajar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // liftgate_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "liftgate_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->liftgate_ajar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // any_seatbelt_unbuckled
    PyObject * field = PyObject_GetAttrString(_pymsg, "any_seatbelt_unbuckled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->any_seatbelt_unbuckled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // airbag_deployed
    PyObject * field = PyObject_GetAttrString(_pymsg, "airbag_deployed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->airbag_deployed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_or_hood_ajar
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_or_hood_ajar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_or_hood_ajar = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__driver_input_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DriverInputReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._driver_input_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DriverInputReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__DriverInputReport * ros_message = (raptor_dbw_msgs__msg__DriverInputReport *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__turn_signal__convert_to_py(&ros_message->turn_signal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_headlights
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__high_beam__convert_to_py(&ros_message->high_beam_headlights);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_headlights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__wiper_front__convert_to_py(&ros_message->wiper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_resume_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cruise_resume_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_resume_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_cancel_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cruise_cancel_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_cancel_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_accel_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cruise_accel_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_accel_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_decel_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cruise_decel_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_decel_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruise_on_off_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cruise_on_off_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruise_on_off_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adaptive_cruise_on_off_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adaptive_cruise_on_off_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adaptive_cruise_on_off_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adaptive_cruise_increase_distance_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adaptive_cruise_increase_distance_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adaptive_cruise_increase_distance_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adaptive_cruise_decrease_distance_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adaptive_cruise_decrease_distance_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adaptive_cruise_decrease_distance_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_door_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->driver_door_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_door_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passenger_door_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->passenger_door_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "passenger_door_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_left_door_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rear_left_door_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_left_door_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_right_door_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rear_right_door_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_right_door_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // liftgate_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->liftgate_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "liftgate_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // any_seatbelt_unbuckled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->any_seatbelt_unbuckled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "any_seatbelt_unbuckled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airbag_deployed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->airbag_deployed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airbag_deployed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_or_hood_ajar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_or_hood_ajar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_or_hood_ajar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
