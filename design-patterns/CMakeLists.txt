cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
file(GLOB PATTERN_SOURCES src/*.cc)
add_executable(main main.cc ${PATTERN_SOURCES})

