#include "arrays.h"

std::vector<int> Solution::decompressRLElist(std::vector<int>& nums) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i += 2) {
        for (int j = 0; j < nums[i]; ++j) {
            result.push_back(nums[i+1]);
        }
    }
    return result;
}