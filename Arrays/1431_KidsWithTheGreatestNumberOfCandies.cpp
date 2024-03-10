#include "arrays.h"

std::vector<bool> Solution::kidsWithCandies(std::vector<int>& candies, int extraCandies) {
    std::vector<bool> res;
    int max = 0;
    
    // Find the maximum number of candies
    for (int i = 0; i < candies.size(); ++i) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }

    // Compare each candy count with the maximum plus extraCandies
    for (int i = 0; i < candies.size(); ++i) {
        if (candies[i] + extraCandies >= max) {
            res.push_back(true);
        } else {
            res.push_back(false);
        }
    }
    
    return res;
}
