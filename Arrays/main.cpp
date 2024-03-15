#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> words = {"abc","car","ada","racecar","cool"};

    std::string result = solution.firstPalindrome(words);

    std::cout << result << '\n';

    return 0;
}
