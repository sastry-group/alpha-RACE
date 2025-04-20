// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
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
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.h"
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("novatel_oem7_msgs.msg._oem7_header.Oem7Header", full_classname_dest, 45) == 0);
  }
  novatel_oem7_msgs__msg__Oem7Header * ros_message = _ros_message;
  {  // message_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // message_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->message_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // message_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->message_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sequence_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_week_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_week_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_week_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_week_milliseconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_week_milliseconds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_week_milliseconds = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // idle_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "idle_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idle_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Oem7Header */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._oem7_header");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Oem7Header");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__Oem7Header * ros_message = (novatel_oem7_msgs__msg__Oem7Header *)raw_ros_message;
  {  // message_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_name.data,
      strlen(ros_message->message_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->message_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->message_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequence_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_week_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_week_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_week_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_week_milliseconds
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_week_milliseconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_week_milliseconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idle_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idle_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idle_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
