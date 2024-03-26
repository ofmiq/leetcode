#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "axc", t = "ahbgdc";

    bool result = solution.isSubsequence(s, t);

    std::cout << std::boolalpha << result << '\n';
}