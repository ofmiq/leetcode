#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {3, 2, 3};

    int result = solution.majorityElement(nums);

    std::cout << result << '\n';

    return 0;
}   
