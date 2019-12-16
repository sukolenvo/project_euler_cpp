//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem009.cpp"

TEST(problem009, run) {
    ASSERT_EQ(-1, problem009::main()) << "comparing with submitted answer";
}