#include "arrays.h"
#include <unordered_set>

/*
int Solution::getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> nums1Set(nums1.begin(), nums1.end());
    std::unordered_set<int> nums2Set(nums2.begin(), nums2.end());
    
    int smallestCommon = INT_MAX;
    
    for (int num : nums1Set) {
        if (nums2Set.count(num)) {
            smallestCommon = std::min(smallestCommon, num);
        }
    }
    
    return smallestCommon == INT_MAX ? -1 : smallestCommon;
}
*/

int Solution::getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            return nums1[i];
        }
        if (nums1[i] < nums2[j]) {
            ++i;
        } else {
            ++j;
        }
    }

    return -1;
}