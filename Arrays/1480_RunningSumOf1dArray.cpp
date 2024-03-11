#include "arrays.h"

std::vector<int> Solution::runningSum(std::vector<int>& nums) {
    std::vector<int> result {nums[0]};

    for (int i = 1; i < nums.size(); ++i) {
        result.push_back(nums[i]+result[i-1]);
    }

    return result;
}