#include "arrays.h"
#include <numeric>

int Solution::pivotIndex(std::vector<int>& nums) {
    int left_sum = 0;
    int right_sum = std::accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); ++i) {
        right_sum -= nums[i];
        if (left_sum == right_sum) {
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
};
