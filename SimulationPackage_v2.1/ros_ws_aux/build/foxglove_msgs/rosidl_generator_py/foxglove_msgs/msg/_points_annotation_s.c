// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from foxglove_msgs:msg/PointsAnnotation.idl
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
#include "foxglove_msgs/msg/detail/points_annotation__struct.h"
#include "foxglove_msgs/msg/detail/points_annotation__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "foxglove_msgs/msg/detail/color__functions.h"
#include "foxglove_msgs/msg/detail/point2__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__point2__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__point2__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__color__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__color__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__color__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__color__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__color__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__color__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool foxglove_msgs__msg__points_annotation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("foxglove_msgs.msg._points_annotation.PointsAnnotation", full_classname_dest, 53) == 0);
  }
  foxglove_msgs__msg__PointsAnnotation * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!foxglove_msgs__msg__Point2__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__Point2__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__Point2 * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__point2__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // outline_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "outline_color");
    if (!field) {
      return false;
    }
    if (!foxglove_msgs__msg__color__convert_from_py(field, &ros_message->outline_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // outline_colors
    PyObject * field = PyObject_GetAttrString(_pymsg, "outline_colors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'outline_colors'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!foxglove_msgs__msg__Color__Sequence__init(&(ros_message->outline_colors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__Color__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__Color * dest = ros_message->outline_colors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__color__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // fill_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "fill_color");
    if (!field) {
      return false;
    }
    if (!foxglove_msgs__msg__color__convert_from_py(field, &ros_message->fill_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // thickness
    PyObject * field = PyObject_GetAttrString(_pymsg, "thickness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thickness = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * foxglove_msgs__msg__points_annotation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PointsAnnotation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("foxglove_msgs.msg._points_annotation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PointsAnnotation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  foxglove_msgs__msg__PointsAnnotation * ros_message = (foxglove_msgs__msg__PointsAnnotation *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__Point2 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__point2__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outline_color
    PyObject * field = NULL;
    field = foxglove_msgs__msg__color__convert_to_py(&ros_message->outline_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "outline_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outline_colors
    PyObject * field = NULL;
    size_t size = ros_message->outline_colors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__Color * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->outline_colors.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__color__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "outline_colors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fill_color
    PyObject * field = NULL;
    field = foxglove_msgs__msg__color__convert_to_py(&ros_message->fill_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fill_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thickness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thickness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thickness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
