//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem003.cpp"

TEST(problem003, run) {

    ASSERT_EQ(6857, problem003::main()) << "comparing with submitted answer";
}