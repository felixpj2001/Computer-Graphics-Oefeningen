# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Les_1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Les_1_autogen.dir/ParseCache.txt"
  "Les_1_autogen"
  )
endif()
