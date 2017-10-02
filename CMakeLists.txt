cmake_minimum_required(VERSION 3.8)
project(test_project)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp snake.cpp snake.h)
add_executable(test_project ${SOURCE_FILES})
target_link_libraries(test_project ${CURSES_LIBRARIES})