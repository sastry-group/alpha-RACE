// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from foxglove_msgs:msg/SceneEntities.idl
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
#include "foxglove_msgs/msg/detail/scene_entities__struct.h"
#include "foxglove_msgs/msg/detail/scene_entities__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "foxglove_msgs/msg/detail/scene_entity__functions.h"
#include "foxglove_msgs/msg/detail/scene_entity_deletion__functions.h"
// end nested array functions include
bool foxglove_msgs__msg__scene_entity_deletion__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__scene_entity_deletion__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__scene_entity__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__scene_entity__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool foxglove_msgs__msg__scene_entities__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("foxglove_msgs.msg._scene_entities.SceneEntities", full_classname_dest, 47) == 0);
  }
  foxglove_msgs__msg__SceneEntities * ros_message = _ros_message;
  {  // deletions
    PyObject * field = PyObject_GetAttrString(_pymsg, "deletions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'deletions'");
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
    if (!foxglove_msgs__msg__SceneEntityDeletion__Sequence__init(&(ros_message->deletions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__SceneEntityDeletion__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__SceneEntityDeletion * dest = ros_message->deletions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__scene_entity_deletion__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // entities
    PyObject * field = PyObject_GetAttrString(_pymsg, "entities");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'entities'");
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
    if (!foxglove_msgs__msg__SceneEntity__Sequence__init(&(ros_message->entities), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__SceneEntity__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__SceneEntity * dest = ros_message->entities.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__scene_entity__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * foxglove_msgs__msg__scene_entities__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SceneEntities */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("foxglove_msgs.msg._scene_entities");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SceneEntities");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  foxglove_msgs__msg__SceneEntities * ros_message = (foxglove_msgs__msg__SceneEntities *)raw_ros_message;
  {  // deletions
    PyObject * field = NULL;
    size_t size = ros_message->deletions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__SceneEntityDeletion * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->deletions.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__scene_entity_deletion__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "deletions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // entities
    PyObject * field = NULL;
    size_t size = ros_message->entities.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__SceneEntity * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->entities.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__scene_entity__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "entities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
