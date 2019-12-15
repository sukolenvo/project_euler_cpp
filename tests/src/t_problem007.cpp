//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem007.cpp"

TEST(problem007, task_example) {
    ASSERT_EQ(13, problem007::main(6)) << "check function according to example from task description";
}

TEST(problem007, run) {
    ASSERT_EQ(104743, problem007::main(10001)) << "comparing with submitted answer";
}