#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "RLRRLLRLRL";

    int result = solution.balancedStringSplit(s);

    std::cout << result << '\n';
}