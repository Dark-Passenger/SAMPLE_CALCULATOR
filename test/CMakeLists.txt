Project ("Sample Calculator tests" CXX)

add_executable (shared_unittest shared_unittest.cpp)

target_link_libraries (shared_unittest shared gtest gtest_main)
