#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string str1 = "ABABAB", str2 = "ABAB";

    std::string result = solution.gcdOfStrings(str1, str2);
    std::cout << result << '\n';
}