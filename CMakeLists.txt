cmake_minimum_required(VERSION 3.5)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_COMPILER g++)
set (CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unknown-pragmas -Ofast")
set (CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(dynamic_test dynamic_test.cc static_func.cc static_func_func.cc)
target_link_libraries(dynamic_test dynamic)

add_library(dynamic SHARED dynamic_func.cc dynamic_func_func.cc)
