#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1, 2, 2, 1};
    int k = 1;

    int result = solution.countKDifference(nums, k);

    std::cout << result << '\n';

    return 0;
}
