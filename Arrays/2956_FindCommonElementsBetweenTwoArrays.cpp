#include "arrays.h"
#include <unordered_map>
#include <algorithm>

std::vector<int> Solution::findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
    int count1 = 0;
    int count2 = 0;
    
    for(auto i : nums1) {
        if(find(nums2.begin(), nums2.end(), i) != nums2.end())
            ++count1;
    }
    
    for(auto i : nums2){
        if(find(nums1.begin(), nums1.end(), i) != nums1.end())
            ++count2;
    }
    
    return {count1, count2};
}

