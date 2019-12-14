//
// Created by Vadym Sukolen on 14/12/19.
//
#include "gtest/gtest.h"
#include "common.h"

TEST(common, prime_factors) {
    auto expected = std::vector<int>{2, 2, 3};
    ASSERT_EQ(expected, common::prime_factors(12))
                                << "check int prime factors template";
}
