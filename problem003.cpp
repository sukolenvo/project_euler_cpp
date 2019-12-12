#include <iostream>
#include "lib.h"

int main() {
    std::cout << *(prime_factors(600851475143).end() - 1);
    return 0;
}