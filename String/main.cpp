#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "leetcode";

    std::string result = solution.reverseVowels(s);
    std::cout << result << '\n';
}