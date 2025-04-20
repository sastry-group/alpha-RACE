// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/TIME.idl
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
#include "novatel_oem7_msgs/msg/detail/time__struct.h"
#include "novatel_oem7_msgs/msg/detail/time__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("novatel_oem7_msgs.msg._time.TIME", full_classname_dest, 32) == 0);
  }
  novatel_oem7_msgs__msg__TIME * ros_message = _ros_message;
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
  {  // clock_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clock_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_std = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utc_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utc_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_year = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_month
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_month = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_day = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_hour");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_hour = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_min = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_msec
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_msec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_msec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__time__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TIME */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TIME");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__TIME * ros_message = (novatel_oem7_msgs__msg__TIME *)raw_ros_message;
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
  {  // clock_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clock_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_month
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_day
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_hour
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_hour);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_msec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_msec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_msec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utc_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
