cmake_minimum_required(VERSION 3.10)
project(demo-repo)

# set(GTEST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../extern/googletest")
set(GTEST_DIR "/usr/src/googletest" CACHE PATH "Path to the Google Test framework")

include_directories(/usr/include/)

add_library(demo-repo-library STATIC main.cc tool.cc)

add_executable(main main.cc tool.cc)
add_executable(unit_tests test_tool.cc tool.cc)

# Specify include directories
target_link_libraries(unit_tests
    demo-repo-library
    libgtest.a
    libgtest_main.a
)

enable_testing()
add_test(NAME unit_tests COMMAND unit_tests)