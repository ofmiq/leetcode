#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {1, 2, 3, 1, 1, 3};

    Solution solution;

    int result = solution.numIdenticalPairs(nums);

    std::cout << result << '\n';

    return 0;
}
