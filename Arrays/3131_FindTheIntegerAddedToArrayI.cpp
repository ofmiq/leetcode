#include "arrays.h"
#include <algorithm>

int Solution::addedInteger(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    return nums2[0] - nums1[0];
}