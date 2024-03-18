#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::vector<int>> mat = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = solution.diagonalSum(mat);

    std::cout << result << '\n';

    return 0;
}
