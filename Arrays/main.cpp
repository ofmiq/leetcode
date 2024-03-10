#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {0, 2, 1, 5, 3, 4};

    Solution solution;

    std::vector<int> result = solution.buildArray(nums);

    for (const int& elem : result) {
        std::cout << elem << ' ';
    } 

    return 0;
}
