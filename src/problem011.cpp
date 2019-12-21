//
// Created by Vadym Sukolen on 14/12/19.
//

#include "common.h"

namespace problem011 {

    const int sequence_length {4};

    long calc_max_horizontal(const std::vector<std::vector<int>> &input) {
        long max_result {};
        for (int i {}; i < input.size(); ++i) {
            for (int j {}; j < input[i].size() - sequence_length; ++j) {
                long product {1};
                for (int k {}; k < sequence_length; ++k) {
                    product *= input[i][j + k];
                }
                if (product > max_result) {
                    max_result = product;
                }
            }
        }
        return max_result;
    }

    long calc_max_vertical(const std::vector<std::vector<int>> &input) {
        long max_result {};
        for (int i {}; i < input.size() - sequence_length; ++i) {
            for (int j {}; j < input[i].size(); ++j) {
                long product {1};
                for (int k {}; k < sequence_length; ++k) {
                    product *= input[i + k][j];
                }
                if (product > max_result) {
                    max_result = product;
                }
            }
        }
        return max_result;
    }

    // direction is \.
    long calc_diagonal_back_slash(const std::vector<std::vector<int>> &input) {
        long max_result {};
        for (int i {}; i < input.size() - sequence_length; ++i) {
            for (int j {}; j < input[i].size() - sequence_length; ++j) {
                long product {1};
                for (int k {}; k < sequence_length; ++k) {
                    product *= input[i + k][j + k];
                }
                if (product > max_result) {
                    max_result = product;
                }
            }
        }
        return max_result;
    }

    // direction is /.
    long calc_diagonal_slash(const std::vector<std::vector<int>> &input) {
        long max_result {};
        for (int i {sequence_length}; i < input.size(); ++i) {
            for (int j {}; j < input[i].size() - sequence_length; ++j) {
                long product {1};
                for (int k {}; k < sequence_length; ++k) {
                    product *= input[i - k][j + k];
                }
                if (product > max_result) {
                    max_result = product;
                }
            }
        }
        return max_result;
    }

    long main(const std::vector<std::vector<int>> &input) {
        std::vector results = {calc_max_horizontal(input),
                               calc_max_vertical(input),
                               calc_diagonal_back_slash(input),
                               calc_diagonal_slash(input)};
        return *std::max_element(results.begin(), results.end());
    }
}