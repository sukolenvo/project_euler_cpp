#include <iostream>

namespace problem002 {

    long long main() {
        long long prev{1};
        long long curr{1};
        long long result{};
        while (true) {
            long long next = prev + curr;
            if (next > 4'000'000) {
                break;
            }
            if (!(next & 1)) {
                result += next;
            }
            prev = curr;
            curr = next;
        }
        std::cout << result;
        return result;
    }

}