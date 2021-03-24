# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/opengl7_2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/opengl7_2_autogen.dir/ParseCache.txt"
  "opengl7_2_autogen"
  )
endif()
