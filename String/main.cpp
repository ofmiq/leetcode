#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "Let's take LeetCode contest";
    std::string result = solution.reverseWords(s);

    std::cout << result << '\n';
}