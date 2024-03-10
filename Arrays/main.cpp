#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {0, 1, 2, 3, 4};
    int target = 2;

    Solution solution;

    int result = solution.numberOfEmployeesWhoMetTarget(nums, target);
    
    std::cout << result << '\n';

    return 0;
}
