set (CMAKE_CXX_COMPILER "gcc")
set (CMAKE_CXX_COMPILER "g++")

cmake_minimum_required(VERSION 3.5)

project ("Sample Calculator")

add_definitions(-Wall -std=c++0x)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")

include_directories (include)

add_subdirectory (source)

add_subdirectory (test)
