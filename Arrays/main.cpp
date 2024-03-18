#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {3,4,5,2};

    int result = solution.maxProduct(nums);

    std::cout << result << '\n';

    return 0;
}
