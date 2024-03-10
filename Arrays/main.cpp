#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    Solution solution;

    std::vector<bool> result = solution.kidsWithCandies(candies, extraCandies);

    for (auto elem : result) {
        std::cout << std::boolalpha << elem << ' ';
    }

    return 0;
}
