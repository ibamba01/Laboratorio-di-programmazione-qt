# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Laboratorio_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Laboratorio_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\core_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\core_autogen.dir\\ParseCache.txt"
  "Laboratorio_autogen"
  "core_autogen"
  )
endif()
