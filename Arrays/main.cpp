#include <iostream>
#include "arrays.h"

int main() {
    std::vector<int> nums = {1, 2, 3};

    Solution solution;

    std::vector<int> result = solution.getConcatenation(nums);

    for (const int& elem : result) {
        std::cout << elem << ' ';
    } 

    return 0;
}
