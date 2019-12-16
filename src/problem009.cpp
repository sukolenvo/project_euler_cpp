//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem009 {

    long long main() {
        for (int a {1}; a <= 998; ++a) {
            for (int b {2}; b <= 999 - a; ++b) {
                int c = 1000 - a - b;
                if (static_cast<long>(a) * a + b * b == c * c) {
                    std::cout << a << ' ' << b << ' ' << c;
                    return a * b * c;
                }
            }
        }
        return {};
    }
}