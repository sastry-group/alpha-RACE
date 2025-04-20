// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
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
#include "foxglove_msgs/msg/detail/image_annotations__struct.h"
#include "foxglove_msgs/msg/detail/image_annotations__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "foxglove_msgs/msg/detail/circle_annotation__functions.h"
#include "foxglove_msgs/msg/detail/points_annotation__functions.h"
#include "foxglove_msgs/msg/detail/text_annotation__functions.h"
// end nested array functions include
bool foxglove_msgs__msg__circle_annotation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__circle_annotation__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__points_annotation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__points_annotation__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__text_annotation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__text_annotation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool foxglove_msgs__msg__image_annotations__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("foxglove_msgs.msg._image_annotations.ImageAnnotations", full_classname_dest, 53) == 0);
  }
  foxglove_msgs__msg__ImageAnnotations * ros_message = _ros_message;
  {  // circles
    PyObject * field = PyObject_GetAttrString(_pymsg, "circles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'circles'");
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
    if (!foxglove_msgs__msg__CircleAnnotation__Sequence__init(&(ros_message->circles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__CircleAnnotation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__CircleAnnotation * dest = ros_message->circles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__circle_annotation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
    if (!foxglove_msgs__msg__PointsAnnotation__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__PointsAnnotation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__PointsAnnotation * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__points_annotation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // texts
    PyObject * field = PyObject_GetAttrString(_pymsg, "texts");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'texts'");
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
    if (!foxglove_msgs__msg__TextAnnotation__Sequence__init(&(ros_message->texts), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__TextAnnotation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__TextAnnotation * dest = ros_message->texts.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__text_annotation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * foxglove_msgs__msg__image_annotations__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageAnnotations */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("foxglove_msgs.msg._image_annotations");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageAnnotations");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  foxglove_msgs__msg__ImageAnnotations * ros_message = (foxglove_msgs__msg__ImageAnnotations *)raw_ros_message;
  {  // circles
    PyObject * field = NULL;
    size_t size = ros_message->circles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__CircleAnnotation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->circles.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__circle_annotation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "circles", field);
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
    foxglove_msgs__msg__PointsAnnotation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__points_annotation__convert_to_py(item);
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
  {  // texts
    PyObject * field = NULL;
    size_t size = ros_message->texts.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__TextAnnotation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->texts.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__text_annotation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "texts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
