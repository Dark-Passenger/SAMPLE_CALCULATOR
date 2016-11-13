set (CMAKE_C_COMPILER "clang")
set (CMAKE_CXX_COMPILER "clang++")

cmake_minimum_required(VERSION 2.8)

project ("Sample Calculator")

add_definitions(-Weverything -std=c++14)
add_definitions(-Wno-global-constructors -Wno-weak-vtables -Wno-padded -Wno-c++98-compat -Wno-exit-time-destructors -std=c++1y)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")

include_directories (include)

add_subdirectory (source)

add_subdirectory (test)
