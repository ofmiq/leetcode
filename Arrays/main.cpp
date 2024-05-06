#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums {5,10,1,5,2};
    int k = 1;

    int res = solution.sumIndicesWithKSetBits(nums, k);

    std::cout << res << '\n';
    
    return 0;
}   
