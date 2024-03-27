#include "arrays.h"
#include <algorithm>

int Solution::removeElement(std::vector<int>& nums, int val) {
    nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}