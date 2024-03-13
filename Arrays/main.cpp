#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {0,1,2,3,4};
    std::vector<int> index = {0,1,2,2,1};

    std::vector<int> result = solution.createTargetArray(nums, index);

    for (const auto& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
