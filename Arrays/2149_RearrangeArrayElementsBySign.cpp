#include "arrays.h"

std::vector<int> Solution::rearrangeArray(std::vector<int>& nums) {
    int p = 0;
    int n = 1;
    std::vector<int> result(nums.size());
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            result[p] = nums[i];
            p += 2;
        } else {
            result[n] = nums[i];
            n += 2;
        }
    }
    
    return result;
}

/*
std::vector<int> rearrangeArray(std::vector<int>& nums) {
    std::vector<int> positive;
    std::vector<int> negative;
    
    for (int& elem : nums) {
        if (elem > 0) {
            positive.push_back(elem);
        } else {
        negative.push_back(elem);
        }
    }

    std::vector<int> result;
    int posIndex = 0;
    int negIndex = 0;
    
    while (posIndex < positive.size() && negIndex < negative.size()) {
        result.push_back(positive[posIndex++]);
        result.push_back(negative[negIndex++]);
    }
    
    return result;
}
*/