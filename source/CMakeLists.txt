project ("Sample Calculator" CXX)

add_executable (main main.cpp)

add_library (shared SHARED shared.cpp)

target_link_libraries (main shared)
