#include "arrays.h"
#include <algorithm>

int Solution::maximizeSum(std::vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < k; ++i) {
        count += nums[n-1];
        ++nums[n-1];
    }
    
    return count;
}

/*
int maximizeSum(vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());
    int score = 0;
    int n = nums.size();
    
    for (int i = 0; i < k; ++i) {
        int m = nums.back(); // Select the last element
        nums.pop_back(); // Remove m
        nums.push_back(m + 1); // Add m + 1
        score += m; // Increase score by m
    }
    
    return score;
}
*/