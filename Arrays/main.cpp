#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {3,2,4};
    int target = 6;

    Solution solution;

    std::vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        std::cout << result[0] << ' ' << result[1] << '\n';
    } else {
        std::cout << "No indices found." << std::endl;
    }

    return 0;
}
