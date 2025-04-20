// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/Translation.idl
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
#include "novatel_oem7_msgs/msg/detail/translation__struct.h"
#include "novatel_oem7_msgs/msg/detail/translation__functions.h"

bool novatel_oem7_msgs__msg__translation_offset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__translation_offset__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_frame__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_frame__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_source_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_source_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__translation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("novatel_oem7_msgs.msg._translation.Translation", full_classname_dest, 46) == 0);
  }
  novatel_oem7_msgs__msg__Translation * ros_message = _ros_message;
  {  // translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__translation_offset__convert_from_py(field, &ros_message->translation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_frame__convert_from_py(field, &ros_message->frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_uncertainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_uncertainty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_uncertainty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_uncertainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_uncertainty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_uncertainty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_uncertainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_uncertainty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_uncertainty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // translation_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation_source");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_source_status__convert_from_py(field, &ros_message->translation_source)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__translation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Translation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._translation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Translation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__Translation * ros_message = (novatel_oem7_msgs__msg__Translation *)raw_ros_message;
  {  // translation
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__translation_offset__convert_to_py(&ros_message->translation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_frame__convert_to_py(&ros_message->frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_uncertainty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_uncertainty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_uncertainty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_uncertainty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_uncertainty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_uncertainty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_uncertainty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_uncertainty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_uncertainty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // translation_source
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_source_status__convert_to_py(&ros_message->translation_source);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
