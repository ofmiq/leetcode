#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums1 = {2,6,4}, nums2 = {9,7,5};

    int result = solution.addedInteger(nums1, nums2);

    std::cout << result << '\n';

    return 0;
}   
