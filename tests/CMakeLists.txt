include(GoogleTest)
add_executable(project_tests)

target_sources(project_tests
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/src/problem004.cpp
        )

target_link_libraries(project_tests project_euler_cpp gtest gtest_main)

gtest_add_tests(TARGET project_tests)