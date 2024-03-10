#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
    int n = 4;

    Solution solution;

    std::vector<int> result = solution.shuffle(nums, n);

    for (int elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
