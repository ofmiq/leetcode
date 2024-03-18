#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {5, 6, 2, 7, 4};

    int result = solution.maxProductDifference(nums);

    std::cout << result << '\n';

    return 0;
}
