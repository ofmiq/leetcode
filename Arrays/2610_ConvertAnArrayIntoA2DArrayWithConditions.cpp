#include <unordered_map>
#include "arrays.h"

std::vector<std::vector<int>> findMatrix(std::vector<int>& nums) {
    std::unordered_map<int, int> um;
    int count = 0;

    for (int elem : nums) {
        ++um[elem];
        count = std::max(count, um[elem]);
    }

    std::vector<std::vector<int>> matrix(count);

    for (const auto& [elem, frequency] : um) {
        for (int i = 0; i < frequency; ++i) {
            matrix[i].push_back(elem);
        }
    }

    return matrix;
}
