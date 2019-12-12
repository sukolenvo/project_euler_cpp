cmake_minimum_required(VERSION 3.15)
project(project_euler_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(problem001 problem001.cpp)
add_executable(problem002 problem002.cpp)
add_executable(problem003 problem003.cpp lib.cpp lib.h)