#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums = {3,1,2,2,2,1,3};
    int k = 2;

    int result = solution.countPairs2(nums, k);

    std::cout << result << '\n';

    return 0;
}   
