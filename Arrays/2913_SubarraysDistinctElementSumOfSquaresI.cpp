#include "arrays.h"
#include <unordered_set>

int Solution::sumCounts(std::vector<int>& nums) {
    int result = 0;

    for (int i = 0; i < nums.size(); ++i) {
        std::unordered_set<int> freq_set;
        for (int j = i; j < nums.size(); ++j) {
            freq_set.insert(nums[j]);
            result = result + (freq_set.size() * freq_set.size());
        }
    }

    return result;
}