//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem006.cpp"

TEST(problem006, task_example) {
    ASSERT_EQ(2640, problem006::main(10)) << "check function according to example from task description";
}

TEST(problem006, run) {
    ASSERT_EQ(25164150, problem006::main(100)) << "comparing with submitted answer";
}