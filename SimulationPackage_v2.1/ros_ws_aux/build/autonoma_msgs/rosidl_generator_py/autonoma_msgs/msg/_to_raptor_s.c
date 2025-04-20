// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autonoma_msgs:msg/ToRaptor.idl
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
#include "autonoma_msgs/msg/detail/to_raptor__struct.h"
#include "autonoma_msgs/msg/detail/to_raptor__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autonoma_msgs__msg__to_raptor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("autonoma_msgs.msg._to_raptor.ToRaptor", full_classname_dest, 37) == 0);
  }
  autonoma_msgs__msg__ToRaptor * ros_message = _ros_message;
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
  {  // track_cond_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_cond_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_cond_ack = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_sig_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_sig_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_sig_ack = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ct_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "ct_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ct_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rolling_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autonoma_msgs__msg__to_raptor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ToRaptor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autonoma_msgs.msg._to_raptor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ToRaptor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autonoma_msgs__msg__ToRaptor * ros_message = (autonoma_msgs__msg__ToRaptor *)raw_ros_message;
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
  {  // track_cond_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_cond_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_cond_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_sig_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_sig_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_sig_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ct_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ct_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ct_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
