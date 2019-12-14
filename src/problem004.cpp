#include <iostream>
#include "lib.h"

bool is_palindrom(const std::vector<char>& digits) {
    auto desc = (digits.rbegin()); // todo it would be nice to cast this to iterator and put as part for init statement
    for (auto asc = digits.begin(); asc != digits.end();) {
        if (*(asc--) != *(desc++)) {
            return false;
        }
    }
    return true;
}

int main() {
    for (long i = 999; i >= 100; --i) {
        for (long j = i; j >= 100; --j) {
            if (is_palindrom(to_digits<long>(i * j))) {
                std::cout << i * j;
                return 0;
            }
        }
    }
    return 1;
}