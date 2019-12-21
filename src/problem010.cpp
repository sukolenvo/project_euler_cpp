//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem010 {

    long long main(long input) {
        long long result = 0;
        for (int i {2}; i < input; ++i) {
            if (common::is_prime(i)) {
                result += i;
            }
        }
        return result;
    }
}