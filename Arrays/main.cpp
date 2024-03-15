#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {2,11,10,1,3};
    int k = 10;

    int result = solution.minOperations(nums, k);

    std::cout << result << '\n';

    return 0;
}
