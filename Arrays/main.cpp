#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {-1,0,3,5,9,12};
    int target = 8;

    int result = solution.search(nums, target);

    std::cout << result;
    std::cout << '\n';

    return 0;
}
