#include <iostream>
#include "lib.h"

int main() {
    std::cout << prime_factors<long long>(600851475143).back();
    return 0;
}