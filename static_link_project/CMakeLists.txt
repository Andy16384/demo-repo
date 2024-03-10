# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(demo-repo)

# Add the executable
add_executable(demo-repo main.cc tool.cc)

# Specify include directories
target_include_directories(demo-repo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Specify output file name
set_target_properties(demo-repo PROPERTIES OUTPUT_NAME "main.exe")
