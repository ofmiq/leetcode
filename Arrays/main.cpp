#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1,2,3,4};

    std::vector<int> result = solution.runningSum(nums); 

    for (auto elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
