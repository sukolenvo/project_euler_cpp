//
// Created by Vadym Sukolen on 12/12/19.
//

#ifndef PROJECT_EULER_CPP_COMMON_H
#define PROJECT_EULER_CPP_COMMON_H

#include <vector>
#include "iostream"
#include "cmath"

namespace common {

    template<class T>
    bool is_prime(const T number) {
        if (number < 0) {
            throw "got negative number ";
        }
        if (number == 1) {
            return false;
        }
        for (T i = 2; i <= std::sqrt(number); ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

// primes have ASC order
    template<class T>
    std::vector<T> prime_factors(const T number) {
        std::vector<T> result{};
        if (number < 1) {
            throw "Number have to be bigger then 1";
        }
        if (number == 1) {
            return result;
        }
        T value{number};
        while (value >= 2) {
            for (T i = 2; i <= value; ++i) {
                if (value % i == 0) {
                    result.push_back(i);
                    value /= i;
                    break;
                }
            }
        }
        return result;
    }

    template<class T>
    void print_vector(const std::vector<T> &vector) {
        std::cout << '[';
        for (auto i = vector.begin(); i != vector.end();) {
            std::cout << *i;
            ++i;
            if (i != vector.end()) {
                std::cout << ", ";
            }
        }
        std::cout << ']' << std::endl;
    }

    template<class T>
    std::vector<char> to_digits(const T number) {
        if (number < 1) {
            throw "only positive number expected";
        }
        std::vector<char> result{};
        T value{number};
        while (value > 0) {
            result.insert(result.begin(), value % 10);
            value /= 10;
        }
        return result;
    }
}

#endif //PROJECT_EULER_CPP_COMMON_H
