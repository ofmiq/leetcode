#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {8,1,2,2,3};

    std::vector<int> result = solution.smallerNumbersThanCurrent(nums); 

    for (auto elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
