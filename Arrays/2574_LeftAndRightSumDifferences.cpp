#include "arrays.h"
#include <numeric>

std::vector<int> Solution::leftRightDifference(std::vector<int>& nums) {
    std::vector<int> result;

    int r_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int l_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        r_sum -= nums[i];
        result.push_back(std::abs(r_sum - l_sum));
        l_sum += nums[i];
    }

    return result;
} 