#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums = {1,4,2,5,3};

    int result = solution.sumOddLengthSubarrays(nums);

    std::cout << result << '\n';

    return 0;
}   
