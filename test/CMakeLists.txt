Project ("Tests" CXX)

add_executable (shared_unittest shared_unittest.cpp)

add_executable (debug_unittest debug_unittest.cpp)

target_link_libraries (shared_unittest shared gtest gtest_main)

target_link_libraries (debug_unittest debugger gtest gtest_main)
