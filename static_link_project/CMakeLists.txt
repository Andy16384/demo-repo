cmake_minimum_required(VERSION 3.10)
project(demo-repo)
find_package(GTest REQUIRED)

if(NOT GTest_FOUND)
    message(FATAL_ERROR "Google Test not found. Please set GTEST_ROOT to the directory containing Google Test.")
endif()

include_directories(${GTEST_INCLUDE_DIRS})

add_library(demo-repo-library STATIC main.cc tool.cc)
add_executable(main main.cc tool.cc)
add_executable(unit_tests test_tool.cc tool.cc)

# Specify include directories
target_link_libraries(unit_tests
    demo-repo-library
    GTest::GTest GTest::Main
)

enable_testing()
add_test(NAME unit_tests COMMAND unit_tests)