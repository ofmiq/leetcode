#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums1 = {1, 2, 3};
    std::vector<int> nums2 = {2, 4};

    Solution solution;

    int result = solution.getCommon(nums1, nums2);

    std::cout << result << ' ';

    return 0;
}
