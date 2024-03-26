#include "math.h"
#include <iostream>

int main() {
    Solution solution;

    int n = 19;

    bool res = solution.isHappy(n);

    std::cout << std::boolalpha << res << '\n';
}