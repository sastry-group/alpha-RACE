// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
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
#include "novatel_oem7_msgs/msg/detail/bestvel__struct.h"
#include "novatel_oem7_msgs/msg/detail/bestvel__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__solution_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__solution_status__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__position_or_velocity_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__position_or_velocity_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__bestvel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("novatel_oem7_msgs.msg._bestvel.BESTVEL", full_classname_dest, 38) == 0);
  }
  novatel_oem7_msgs__msg__BESTVEL * ros_message = _ros_message;
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
  {  // nov_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "nov_header");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__oem7_header__convert_from_py(field, &ros_message->nov_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sol_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sol_status");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__solution_status__convert_from_py(field, &ros_message->sol_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vel_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_type");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__position_or_velocity_type__convert_from_py(field, &ros_message->vel_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hor_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "hor_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hor_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trk_gnd
    PyObject * field = PyObject_GetAttrString(_pymsg, "trk_gnd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trk_gnd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ver_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ver_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ver_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reserved = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__bestvel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BESTVEL */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._bestvel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BESTVEL");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__BESTVEL * ros_message = (novatel_oem7_msgs__msg__BESTVEL *)raw_ros_message;
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
  {  // nov_header
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__oem7_header__convert_to_py(&ros_message->nov_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nov_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sol_status
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__solution_status__convert_to_py(&ros_message->sol_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sol_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_type
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__position_or_velocity_type__convert_to_py(&ros_message->vel_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hor_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hor_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hor_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trk_gnd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trk_gnd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trk_gnd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ver_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ver_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ver_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
