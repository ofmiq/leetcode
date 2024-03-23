#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string command = "G()(al)";

    std::string result = solution.interpret(command);

    std::cout << result << '\n';
}