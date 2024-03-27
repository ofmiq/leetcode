#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    solution.merge(nums1, m, nums2, n);

    for (const int& elem : nums1) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}   
