#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {3,1,-2,-5,2,-4};

    std::vector<int> result = solution.rearrangeArray(nums);

    for (const int& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
