# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  [[CMakeFiles\OnlineShoppingQt_autogen.dir\AutogenUsed.txt]]
  [[CMakeFiles\OnlineShoppingQt_autogen.dir\ParseCache.txt]]
  "OnlineShoppingQt_autogen"
  )
endif()
