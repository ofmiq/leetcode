#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1,2,3,4};

    int result = solution.sumOfSquares(nums);

    std::cout << result << '\n';

    return 0;
}
