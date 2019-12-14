cmake_minimum_required(VERSION 3.15)
project(project_euler_cpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(cmake)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)