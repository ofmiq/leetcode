#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2};

    Solution solution;

    std::vector<int> result = solution.intersection(nums1, nums2);

    for (auto elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
