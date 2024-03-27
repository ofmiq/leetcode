#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums = {1,1,2,2,3,3,4};
    int val = 3;

    solution.removeElement(nums, val);

    for (const int& elem : nums) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}   
