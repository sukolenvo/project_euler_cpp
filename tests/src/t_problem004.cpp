//
// Created by Vadym Sukolen on 14/12/19.
//

#include "gtest/gtest.h"
#include "common.h"
#include "problem004.cpp"

TEST(problem004, run) {

    ASSERT_EQ(906609, problem004::main()) << "comparing with submitted answer";
}

TEST(problem004, palindrom) {
    ASSERT_EQ(true, problem004::is_palindrom(std::vector<char>{'9', '9', '9'}))
                                << "check palindrom with odd number of digits";

    ASSERT_EQ(true, problem004::is_palindrom(std::vector<char>{'9', '1', '1', '9'}))
                                << "check palindrom with even number of digits";

    ASSERT_EQ(false, problem004::is_palindrom(std::vector<char>{'1', '1', '9'}))
                                << "check not palindrom";

    ASSERT_EQ(true, problem004::is_palindrom(std::vector<char>{'3'}))
                                << "single digit is also palindrom";
}