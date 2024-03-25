#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "Hello";

    std::string result = solution.toLowerCase(s);

    std::cout << result << '\n';
}