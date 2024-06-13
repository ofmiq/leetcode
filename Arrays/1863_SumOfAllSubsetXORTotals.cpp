#include "arrays.h"

int Solution::subsetXORSum(std::vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    
    for (int num : nums) {
        sum |= num;
    }
    
    return sum * (1 << (n - 1));
}