cmake_minimum_required(VERSION 3.8)
project(ncurses-snake)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp snake.cpp snake.h)
add_executable(ncurses-snake ${SOURCE_FILES})
target_link_libraries(ncurses-snake ${CURSES_LIBRARIES})