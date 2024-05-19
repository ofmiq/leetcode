#include "arrays.h"
#include <algorithm>

std::vector<bool> Solution::kidsWithCandies(std::vector<int>& candies, int extraCandies) {
    std::vector<bool> result;
    int max_elem = *std::max_element(candies.begin(), candies.end());
    for (int i = 0; i < candies.size(); ++i) {
        if (candies[i] + extraCandies >= max_elem) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }
    return result;
}
