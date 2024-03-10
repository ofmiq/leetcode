#include "arrays.h"
#include <unordered_map>

int Solution::numIdenticalPairs(std::vector<int>& nums) {
    int count = 0;
    std::unordered_map<int, int> m;

    for (auto& n : nums) {
        count += m[n]++;
    }    

    return count;
}