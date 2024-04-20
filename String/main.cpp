#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "hello";
    int result = solution.scoreOfString(s);

    std::cout << result << '\n';
}