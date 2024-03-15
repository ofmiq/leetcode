#include "arrays.h"
#include <numeric>

int Solution::differenceOfSum(std::vector<int>& nums) {
    int element_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int digit_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        while (nums[i] != 0) {
            digit_sum += nums[i] % 10;
            nums[i] /= 10; 
        }
    }

    return element_sum - digit_sum;

}