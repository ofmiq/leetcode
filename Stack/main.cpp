#include <iostream>
#include "stack.h"

int main() {
    Solution solution;

    std::string s = "(1+(2*3)+((8)/4))+1";

    int result = solution.maxDepth(s);

    std::cout << result << '\n';

    return 0;
}