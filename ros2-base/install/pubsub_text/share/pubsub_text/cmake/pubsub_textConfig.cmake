# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pubsub_text_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pubsub_text_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pubsub_text_FOUND FALSE)
  elseif(NOT pubsub_text_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pubsub_text_FOUND FALSE)
  endif()
  return()
endif()
set(_pubsub_text_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pubsub_text_FIND_QUIETLY)
  message(STATUS "Found pubsub_text: 0.0.0 (${pubsub_text_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pubsub_text' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pubsub_text_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pubsub_text_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pubsub_text_DIR}/${_extra}")
endforeach()
