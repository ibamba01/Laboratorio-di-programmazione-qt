cmake_minimum_required(VERSION 3.29)


add_subdirectory(lib/googletest-main)


set(gtest_SOURCE_DIR, ./lib/googletest-main/)
include_directories(${gtest_SOURCE_DIR}/include {gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp QtClockTest.cpp

)
add_executable(runAllTests ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests gtest gtest_main core)