add_library(project_euler_cpp STATIC lib.h)
set_target_properties(project_euler_cpp PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories (project_euler_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})