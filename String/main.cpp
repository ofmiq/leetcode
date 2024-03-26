#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "egg", t = "add";

    bool result = solution.isIsomorphic(s, t);

    std::cout << std::boolalpha << result << '\n';
}