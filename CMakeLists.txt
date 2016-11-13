set (CMAKE_C_COMPILER "clang")
set (CMAKE_CXX_COMPILER "clang++")
#set (CMAKE_C_COMPILER "gcc")
#set (CMAKE_CXX_COMPILER "g++")

cmake_minimum_required(VERSION 3.5)

project ("Sample Calculator")

#add_definitions(-Wall -Wpedantic -Wextra -std=c++17)
add_definitions(-Weverything -Wno-global-constructors -Wno-weak-vtables -Wno-padded -Wno-c++98-compat -Wno-exit-time-destructors -std=c++14)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")

include_directories (include)

add_subdirectory (source)

add_subdirectory (test)
