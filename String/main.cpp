#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string address = "1.1.1.1";

    std::string result = solution.defangIPaddr(address);

    std::cout << result;
}