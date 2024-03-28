#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> numbers = {2,7,11,15};
    int target = 9;

    std::vector<int> result = solution.twoSumSorted(numbers, target);

    for (const int& ele : result) {
        std::cout << ele << ' ';
    }
    std::cout << '\n';

    return 0;
}   
