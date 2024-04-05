#include <iostream>
#include "stack.h"

int main() {
    Solution solution;

    std::string s = "()[]{}";

    bool result = solution.isValid(s);

    std::cout << std::boolalpha << result << '\n';

    return 0;
}