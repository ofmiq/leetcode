#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {10,4,8,3};

    std::vector<int> result = solution.leftRightDifference(nums);

    for (int elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
