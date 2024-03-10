#include "arrays.h"

std::vector<int> Solution::shuffle(std::vector<int>& nums, int n) {
    if (n == 1) return nums;

    int l = 0;
    int r = n;

    std::vector<int> result;

    for (int i = 0; i < nums.size()/2; ++i) {
        result.push_back(nums[l++]);
        result.push_back(nums[r++]);
    }

    return result;
}