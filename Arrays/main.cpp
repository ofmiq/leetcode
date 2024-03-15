#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1, 15, 6, 3};

    int result = solution.differenceOfSum(nums);

    std::cout << result << '\n';

    return 0;
}
