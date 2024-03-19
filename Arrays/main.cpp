#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1,2,3,4,5};
    int k = 3;

    int result = solution.maximizeSum(nums, k);

    std::cout << result << '\n';

    return 0;
}
