cmake_minimum_required(VERSION 3.31)
project(armareforger-logparser)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE sources "${CMAKE_SOURCE_DIR}/src/main/*.c"
  "${CMAKE_SOURCE_DIR}/src/main/*.cpp")
add_definitions(-DSOME_DEFINITION)
add_executable(armareforger-logparser ${sources})
target_include_directories(armareforger-logparser
  PRIVATE "${CMAKE_SOURCE_DIR}/src/include/")
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.txt
  DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/test.txt ${CMAKE_CURRENT_BINARY_DIR}
  COPYONLY)
