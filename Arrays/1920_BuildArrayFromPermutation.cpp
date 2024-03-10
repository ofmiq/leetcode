#include "arrays.h"

std::vector<int> Solution::buildArray(std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); ++i) {
        result[i] = nums[nums[i]];
    }
    return result;
}