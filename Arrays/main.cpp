#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::vector<int>> points = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};

    int result = solution.maxWidthOfVerticalArea(points);

    std::cout << result << '\n';

    return 0;
}
