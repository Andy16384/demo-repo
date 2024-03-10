# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(dynanmic_project)

set(CMAKE_CXX_STANDARD 11)

add_library(dynamic_lib SHARED library.cc)
add_executable(main main.cc)

target_link_libraries(main dynamic_lib)
