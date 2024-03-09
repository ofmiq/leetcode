#include "arrays.h"
#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); ++i) {
        int difference = target - nums[i];
        if (hash.count(difference)) {
            return {i, hash[difference]};
        }
        hash[nums[i]] = i;
    }
    return {};
}
