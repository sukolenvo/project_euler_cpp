#include <iostream>
#include "common.h"

namespace problem003 {
    long long int main() {
        long long int result = common::prime_factors<long long>(600851475143).back();
        std::cout << result;
        return result;
    }
}