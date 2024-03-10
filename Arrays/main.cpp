#include <iostream>
#include "arrays.h"

int main() {
    std::vector<std::vector<int>> nums = {{1,3,3}, {3,2,1}};

    Solution solution;

    int result = solution.maximumWealth(nums);

    std::cout << result << '\n';

    return 0;
}
