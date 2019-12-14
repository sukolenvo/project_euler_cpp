//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "problem001.cpp"

TEST(problem001, run) {

    ASSERT_EQ(233168, problem001::main()) << "comparing with submitted answer";
}