#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {-6,2,5,-2,-7,-1,3};
    int target = -2;

    int result = solution.countPairs(nums, target); 

    std::cout << result << '\n';

    return 0;
}
