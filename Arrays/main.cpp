#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {5,4,2,3};

    std::vector<int> result = solution.numberGame(nums);

    for (const auto& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
