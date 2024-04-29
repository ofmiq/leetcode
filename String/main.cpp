#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "aAbBcC";
    int result = solution.countKeyChanges(s);

    std::cout << result << '\n';
}