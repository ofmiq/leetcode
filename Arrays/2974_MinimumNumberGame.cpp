#include "arrays.h"
#include <algorithm>

std::vector<int> Solution::numberGame(std::vector<int>& nums) {
    int n = nums.size();
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i += 2){
        std::swap(nums[i], nums[i+1]);
    }
    return nums;
}