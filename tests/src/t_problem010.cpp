//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem010.cpp"

TEST(problem010, task_example) {
    ASSERT_EQ(17, problem010::main(10)) << "check function according to example from task description";
}

TEST(problem010, run) {
    ASSERT_EQ(142913828922, problem010::main(2'000'000)) << "comparing with submitted answer";
}