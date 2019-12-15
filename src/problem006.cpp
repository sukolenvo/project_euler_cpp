//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem006 {
    long long main(const int input) {
        long long sum_of_squares  = 0;
        long long sum = 0;
        for (int i {1}; i <= input; i++) {
            sum +=i;
            sum_of_squares += static_cast<long long>(i) * i;
        }
        return sum * sum - sum_of_squares;
    }
}