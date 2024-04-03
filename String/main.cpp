#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string n = "82734";
    int result = solution.minPartitions(n);

    std::cout << result << '\n';
}