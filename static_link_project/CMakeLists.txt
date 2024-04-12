cmake_minimum_required(VERSION 3.10)
project(demo-repo)

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