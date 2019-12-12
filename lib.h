//
// Created by Vadym Sukolen on 12/12/19.
//

#ifndef PROJECT_EULER_CPP_LIB_H
#define PROJECT_EULER_CPP_LIB_H

#include <vector>
#include "iostream"
#include "cmath"

template <class T>
inline constexpr bool is_prime(const T number) {
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
template <class T>
inline constexpr std::vector<T> prime_factors(const T number) {
    std::vector<T> result {};
    if (number < 1) {
        throw "Number have to be bigger then 1";
    }
    if (number == 1) {
        return result;
    }
    T value {number};
    while (value >= 2) {
        for (T i = 2; i <= value ; ++i) {
            if (value % i == 0) {
                result.push_back(i);
                value /= i;
                break;
            }
        }
    }
    return result;
}

template <class T>
inline constexpr void print_vector(const std::vector<T>& vector) {
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

#endif //PROJECT_EULER_CPP_LIB_H
