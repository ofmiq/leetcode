#include "arrays.h"
#include <unordered_set>
#include <unordered_map>

/*
std::vector<int> Solution::intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> seen(nums1.begin(),nums1.end());
    std::vector<int> result;

    for (auto elem : nums2) {
        if (seen.count(elem)) {
            result.push_back(elem);
            seen.erase(elem);
        }
    }

    return result;
} 
*/

std::vector<int> Solution::intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int, int> map;
    std::vector<int> v;

    for (int i = 0; i < nums1.size(); ++i) {
        map[nums1[i]]++;
    }

    for (int i = 0; i < nums2.size(); ++i) {
        if (map.find(nums2[i]) != map.end()) {
            v.push_back(nums2[i]);
            map.erase(nums2[i]);
        }
    }

    return v;
}