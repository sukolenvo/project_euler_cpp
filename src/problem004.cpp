#include <iostream>
#include "common.h"

namespace problem004 {
    bool is_palindrom(const std::vector<char> &digits) {
        auto desc = (digits.rbegin()); // todo it would be nice to cast this to iterator and put as part for init statement
        for (auto asc = digits.begin(); asc != digits.end();) {
            if (*(asc++) != *(desc++)) {
                return false;
            }
        }
        return true;
    }

    long main() {
        long candidate = -1;
        // guess that to build largest palindrom both numbers should be over 900
        for (long i = 900; i < 1000; ++i) {
            for (long j = i; j < 1000; j++) {
                if (is_palindrom(common::to_digits<long>(i * j))) {
                    if (candidate < i * j) {
                        candidate = i * j;
                    }
                }
            }
        }
        std::cout << candidate;
        return candidate;
    }
}