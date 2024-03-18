#include "arrays.h"
#include <utility>

int Solution::maxProduct(std::vector<int>& nums) {
    int m1 = 0;
    int m2 = 0;

    for (int n : nums) {
        if (n > m1) {
            m2 = std::exchange(m1, n); // m1 => n; m2 => m1
        } else if (n > m2) {
            m2 = n;
        }
    }

    return (m1 - 1) * (m2 - 1);
}

/*
std::sort(nums.begin(), nums.end());
    return (nums[nums.size() - 2] - 1) * (nums[nums.size() - 1] - 1);
*/