cmake_minimum_required(VERSION 3.31)
project(clientSock)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Change path from /src if needed, or add more directories
file(GLOB_RECURSE sources "${CMAKE_SOURCE_DIR}/src/*.c"
     "${CMAKE_SOURCE_DIR}/src/*.cpp")
# Add precompiler definitions like that:
add_definitions(-DSOME_DEFINITION)
add_executable(clientSock ${sources})

# Add more include directories if needed target_include_directories( GCC  PUBLIC
# "/usr/include/c++/15/")
