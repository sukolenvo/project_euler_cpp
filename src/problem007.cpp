//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem007 {
    long long main(const int input) {
        int found_primes  = 0;
        for (long long i {2}; ; i++) {
            if (common::is_prime<long long>(i) && ++found_primes == input) {
                return i;
            }
        }
    }
}