#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {1, 2, 3, 4};

    std::vector<int> result = solution.decompressRLElist(nums);
    
    for (const auto& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
