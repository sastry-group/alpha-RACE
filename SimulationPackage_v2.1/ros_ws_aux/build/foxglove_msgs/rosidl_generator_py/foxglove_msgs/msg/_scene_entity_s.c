// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from foxglove_msgs:msg/SceneEntity.idl
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
#include "foxglove_msgs/msg/detail/scene_entity__struct.h"
#include "foxglove_msgs/msg/detail/scene_entity__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "foxglove_msgs/msg/detail/arrow_primitive__functions.h"
#include "foxglove_msgs/msg/detail/cube_primitive__functions.h"
#include "foxglove_msgs/msg/detail/cylinder_primitive__functions.h"
#include "foxglove_msgs/msg/detail/key_value_pair__functions.h"
#include "foxglove_msgs/msg/detail/line_primitive__functions.h"
#include "foxglove_msgs/msg/detail/model_primitive__functions.h"
#include "foxglove_msgs/msg/detail/sphere_primitive__functions.h"
#include "foxglove_msgs/msg/detail/text_primitive__functions.h"
#include "foxglove_msgs/msg/detail/triangle_list_primitive__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__key_value_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__key_value_pair__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__arrow_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__arrow_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__cube_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__cube_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__sphere_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__sphere_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__cylinder_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__cylinder_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__line_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__line_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__triangle_list_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__triangle_list_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__text_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__text_primitive__convert_to_py(void * raw_ros_message);
bool foxglove_msgs__msg__model_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * foxglove_msgs__msg__model_primitive__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool foxglove_msgs__msg__scene_entity__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("foxglove_msgs.msg._scene_entity.SceneEntity", full_classname_dest, 43) == 0);
  }
  foxglove_msgs__msg__SceneEntity * ros_message = _ros_message;
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
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lifetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifetime");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->lifetime)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // frame_locked
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_locked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frame_locked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // metadata
    PyObject * field = PyObject_GetAttrString(_pymsg, "metadata");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'metadata'");
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
    if (!foxglove_msgs__msg__KeyValuePair__Sequence__init(&(ros_message->metadata), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__KeyValuePair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__KeyValuePair * dest = ros_message->metadata.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__key_value_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // arrows
    PyObject * field = PyObject_GetAttrString(_pymsg, "arrows");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'arrows'");
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
    if (!foxglove_msgs__msg__ArrowPrimitive__Sequence__init(&(ros_message->arrows), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__ArrowPrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__ArrowPrimitive * dest = ros_message->arrows.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__arrow_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cubes
    PyObject * field = PyObject_GetAttrString(_pymsg, "cubes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cubes'");
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
    if (!foxglove_msgs__msg__CubePrimitive__Sequence__init(&(ros_message->cubes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__CubePrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__CubePrimitive * dest = ros_message->cubes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__cube_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // spheres
    PyObject * field = PyObject_GetAttrString(_pymsg, "spheres");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'spheres'");
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
    if (!foxglove_msgs__msg__SpherePrimitive__Sequence__init(&(ros_message->spheres), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__SpherePrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__SpherePrimitive * dest = ros_message->spheres.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__sphere_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cylinders
    PyObject * field = PyObject_GetAttrString(_pymsg, "cylinders");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cylinders'");
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
    if (!foxglove_msgs__msg__CylinderPrimitive__Sequence__init(&(ros_message->cylinders), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__CylinderPrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__CylinderPrimitive * dest = ros_message->cylinders.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__cylinder_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lines'");
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
    if (!foxglove_msgs__msg__LinePrimitive__Sequence__init(&(ros_message->lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__LinePrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__LinePrimitive * dest = ros_message->lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__line_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // triangles
    PyObject * field = PyObject_GetAttrString(_pymsg, "triangles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'triangles'");
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
    if (!foxglove_msgs__msg__TriangleListPrimitive__Sequence__init(&(ros_message->triangles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__TriangleListPrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__TriangleListPrimitive * dest = ros_message->triangles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__triangle_list_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!foxglove_msgs__msg__TextPrimitive__Sequence__init(&(ros_message->texts), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__TextPrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__TextPrimitive * dest = ros_message->texts.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__text_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // models
    PyObject * field = PyObject_GetAttrString(_pymsg, "models");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'models'");
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
    if (!foxglove_msgs__msg__ModelPrimitive__Sequence__init(&(ros_message->models), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create foxglove_msgs__msg__ModelPrimitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    foxglove_msgs__msg__ModelPrimitive * dest = ros_message->models.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!foxglove_msgs__msg__model_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * foxglove_msgs__msg__scene_entity__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SceneEntity */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("foxglove_msgs.msg._scene_entity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SceneEntity");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  foxglove_msgs__msg__SceneEntity * ros_message = (foxglove_msgs__msg__SceneEntity *)raw_ros_message;
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
  {  // frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->frame_id.data,
      strlen(ros_message->frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lifetime
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->lifetime);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_locked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frame_locked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_locked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // metadata
    PyObject * field = NULL;
    size_t size = ros_message->metadata.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__KeyValuePair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->metadata.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__key_value_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "metadata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arrows
    PyObject * field = NULL;
    size_t size = ros_message->arrows.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__ArrowPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->arrows.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__arrow_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "arrows", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cubes
    PyObject * field = NULL;
    size_t size = ros_message->cubes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__CubePrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cubes.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__cube_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "cubes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spheres
    PyObject * field = NULL;
    size_t size = ros_message->spheres.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__SpherePrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->spheres.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__sphere_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "spheres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cylinders
    PyObject * field = NULL;
    size_t size = ros_message->cylinders.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__CylinderPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cylinders.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__cylinder_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "cylinders", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lines
    PyObject * field = NULL;
    size_t size = ros_message->lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__LinePrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lines.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__line_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // triangles
    PyObject * field = NULL;
    size_t size = ros_message->triangles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__TriangleListPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->triangles.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__triangle_list_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "triangles", field);
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
    foxglove_msgs__msg__TextPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->texts.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__text_primitive__convert_to_py(item);
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
  {  // models
    PyObject * field = NULL;
    size_t size = ros_message->models.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    foxglove_msgs__msg__ModelPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->models.data[i]);
      PyObject * pyitem = foxglove_msgs__msg__model_primitive__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "models", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
