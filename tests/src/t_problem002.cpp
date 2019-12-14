//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem002.cpp"

TEST(problem002, run) {

    ASSERT_EQ(4613732, problem002::main()) << "comparing with submitted answer";
}