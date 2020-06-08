# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_handgesturerecognition_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED handgesturerecognition_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(handgesturerecognition_FOUND FALSE)
  elseif(NOT handgesturerecognition_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(handgesturerecognition_FOUND FALSE)
  endif()
  return()
endif()
set(_handgesturerecognition_CONFIG_INCLUDED TRUE)

# output package information
if(NOT handgesturerecognition_FIND_QUIETLY)
  message(STATUS "Found handgesturerecognition: 0.0.0 (${handgesturerecognition_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'handgesturerecognition' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(handgesturerecognition_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${handgesturerecognition_DIR}/${_extra}")
endforeach()
