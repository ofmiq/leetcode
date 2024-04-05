#include <iostream>
#include "stack.h"

int main() {
    Solution solution;

    std::vector<std::string> ops = {"5","-2","4","C","D","9","+","+"};

    int result = solution.calPoints(ops);

    std::cout << result << '\n';

    return 0;
}