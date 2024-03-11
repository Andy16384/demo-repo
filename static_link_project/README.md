1. Directly Compile

g++ main.cc tool.cc -o main.out

2. Packing into .a file

g++ -c tool.cc -o tool.o
ar rcs libtool.a tool.o
g++ main.cc -o main.out -L. -ltool

3. Using Cmake

CMakeLists.txt:
==============================================================================
# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(demo-repo)

# Add the executable
add_executable(demo-repo main.cc tool.cc)

# Specify include directories
target_include_directories(demo-repo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Specify output file name
set_target_properties(demo-repo PROPERTIES OUTPUT_NAME "main.out")
==============================================================================

mkdir build
cd build
cmake ..
make