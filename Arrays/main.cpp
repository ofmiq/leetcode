#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums {1,5,2,4,1};

    int result = solution.minOperations(nums);

    std::cout << result << '\n';

    return 0;
}   
