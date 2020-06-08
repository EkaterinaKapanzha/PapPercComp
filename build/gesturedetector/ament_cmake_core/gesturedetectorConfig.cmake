# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_gesturedetector_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED gesturedetector_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(gesturedetector_FOUND FALSE)
  elseif(NOT gesturedetector_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(gesturedetector_FOUND FALSE)
  endif()
  return()
endif()
set(_gesturedetector_CONFIG_INCLUDED TRUE)

# output package information
if(NOT gesturedetector_FIND_QUIETLY)
  message(STATUS "Found gesturedetector: 0.0.0 (${gesturedetector_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'gesturedetector' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(gesturedetector_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${gesturedetector_DIR}/${_extra}")
endforeach()
