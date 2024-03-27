#include "arrays.h"
#include <algorithm>

int Solution::majorityElement(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size() / 2;
    return nums[n];
}