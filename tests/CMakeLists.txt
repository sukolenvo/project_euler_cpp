include(GoogleTest)

add_executable(test_runner
        src/t_problem001.cpp
        src/t_problem002.cpp
        src/t_problem003.cpp
        src/t_problem004.cpp
        src/t_common.cpp
        src/t_problem005.cpp
        src/t_problem006.cpp
        src/t_problem007.cpp
        src/t_problem008.cpp
        src/t_problem009.cpp
        src/t_problem010.cpp
        )
target_link_libraries(test_runner project_euler_cpp gtest gtest_main)
gtest_add_tests(TARGET test_runner)