#include "arrays.h"

std::vector<int> Solution::createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
    int n = nums.size();
    std::vector<int> target;
    for (int i = 0; i < n; i++) {
        target.insert(target.begin() + index[i], nums[i]);
    }
    return target;
}