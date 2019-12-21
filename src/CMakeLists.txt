add_library(project_euler_cpp STATIC common.h
        common.cpp
        problem001.cpp
        problem002.cpp
        problem003.cpp
        problem004.cpp
        problem005.cpp
        problem006.cpp
        problem007.cpp
        problem008.cpp
        problem009.cpp
        problem010.cpp
        problem011.cpp
        )

set_target_properties(project_euler_cpp PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories (project_euler_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})