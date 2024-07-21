#include "arrays.h"
#include <unordered_map>

bool Solution::isPossibleToSplit(std::vector<int>& nums) {
    std::unordered_map<int, int> um;
    for (const auto& elem : nums) {
        if (++um[elem] > 2) {
            return false;
        }
    }
    return true;
}