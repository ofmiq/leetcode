#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums1 = {4,3,2,3,1};
    std::vector<int> nums2 = {2,2,5,2,3,6};

    std::vector<int> result = solution.findIntersectionValues(nums1, nums2);

    for (auto elem : result) {
        std::cout << elem << ' ';
    } 
    std::cout << '\n';

    return 0;
}
