cmake_minimum_required(VERSION 3.10)

project(demo-repo)

add_executable(demo-repo main.cc)

set_target_properties(demo-repo PROPERTIES OUTPUT_NAME "main.o")
