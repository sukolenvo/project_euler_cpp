cmake_minimum_required(VERSION 3.15)
project(project_euler_cpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(cmake)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)

add_executable(problem001 src/problem001.cpp)
add_executable(problem002 src/problem002.cpp)
add_executable(problem003 src/problem003.cpp src/lib.cpp src/lib.h)
add_executable(problem004 src/problem004.cpp src/lib.cpp src/lib.h)