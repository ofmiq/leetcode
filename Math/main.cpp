#include "math.h"
#include <iostream>

int main() {
    Solution solution;

    int n = 1800;

    bool result = solution.isSameAfterReversals(n);

    std::cout << std::boolalpha << result << '\n';
}