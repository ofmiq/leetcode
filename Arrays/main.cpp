#include <iostream>
#include "arrays.h"
#include <algorithm>

int main() {
    Solution solution;

    std::vector<int> height = {1,8,6,2,5,4,8,3,7};

    int result = solution.maxArea(height);

    std::cout << result << '\n';

    return 0;
}   
