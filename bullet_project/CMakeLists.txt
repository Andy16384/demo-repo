cmake_minimum_required(VERSION 3.10)
project(BulletGLFWTest)

find_package(Bullet REQUIRED)
find_package(glfw3 REQUIRED)

include_directories(${BULLET_INCLUDE_DIRS})

add_executable(mytest main.cpp)

target_link_libraries(mytest ${BULLET_LIBRARIES} glfw)
