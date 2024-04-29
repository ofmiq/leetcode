#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> nums {13,25,83,77};

    std::vector<int> result = solution.separateDigits(nums);

    for (auto& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
    
    return 0;
}   
