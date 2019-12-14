//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem005 {
    long main(const int input) {
        int deduplicated_factors[input];
        for (int i {2}; i < input; i++) {
            deduplicated_factors[i] = 0;
            auto factors = common::prime_factors(i);
            int value = 0;
            int count = 0;
            for (auto f = factors.begin(); f != factors.end(); f++) {
                if (*f != value) {
                    deduplicated_factors[value] = std::max(deduplicated_factors[value], count);
                    value = *f;
                    count = 1;
                } else {
                    count++;
                }
            }
            deduplicated_factors[value] = std::max(deduplicated_factors[value], count);
        }
        long result = 1;
        for (int i {2}; i < input; i++) {
            result *= std::pow(i, deduplicated_factors[i]);
        }
        return result;
    }
}