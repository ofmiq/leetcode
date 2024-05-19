#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> candies {2,3,5,1,3};
    int extraCandies = 3;

    std::vector<bool> res = solution.kidsWithCandies(candies, extraCandies);

    for (auto elem : res) {
        std::cout << std::boolalpha << elem << ' ';
    }
    
    return 0;
}   
