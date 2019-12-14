//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem005.cpp"

TEST(problem005, task_example) {
    ASSERT_EQ(2520, problem005::main(10)) << "check function according to example from task description";
}

TEST(problem005, run) {
    ASSERT_EQ(232792560, problem005::main(20)) << "comparing with submitted answer";
}