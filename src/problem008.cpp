//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem008 {
    long long main(const std::string string, const int input) {
        char digits[string.size()];
        long long max = 0;
        long long currentProduct = 1;
        long long sequence = 0;
        for (int i {}; i < string.size(); ++i) {
            digits[i] = string[i] - '0';
            if (digits[i] == 0) {
                currentProduct = 1;
                sequence = 0;
            } else if (sequence == input) {
                currentProduct /= digits[i - sequence];
                currentProduct *= digits[i];
                if (currentProduct > max) {
                    max = currentProduct;
                }
            } else {
                currentProduct *= digits[i];
                ++sequence;
            }
        }
        return max;
    }
}