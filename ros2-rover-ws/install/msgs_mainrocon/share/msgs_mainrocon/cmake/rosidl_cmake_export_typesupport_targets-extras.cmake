# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:msgs_mainrocon__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:msgs_mainrocon__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:msgs_mainrocon__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:msgs_mainrocon__rosidl_typesupport_c;__rosidl_generator_cpp:msgs_mainrocon__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:msgs_mainrocon__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:msgs_mainrocon__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:msgs_mainrocon__rosidl_typesupport_cpp;__rosidl_generator_py:msgs_mainrocon__rosidl_generator_py")

# populate msgs_mainrocon_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "msgs_mainrocon::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'msgs_mainrocon' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND msgs_mainrocon_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
