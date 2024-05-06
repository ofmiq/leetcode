#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string word = "abcdefd";
    char ch = 'd';

    std::string result = solution.reversePrefix(word, ch);
    std::cout << result << '\n';
}