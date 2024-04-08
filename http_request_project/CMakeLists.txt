cmake_minimum_required(VERSION 3.10)
project(HttpRequestExample)

find_package(CURL REQUIRED)

add_executable(main.out main.cpp)

target_include_directories(main.out PRIVATE ${CURL_INCLUDE_DIRS})
target_link_libraries(main.out PRIVATE ${CURL_LIBRARIES})
