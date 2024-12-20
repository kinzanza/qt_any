# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Animation_autogen"
  "CMakeFiles\\Animation_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Animation_autogen.dir\\ParseCache.txt"
  )
endif()
