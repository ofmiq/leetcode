#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string word1 = "abc", word2 = "pqr";
    std::string result = solution.mergeAlternately(word1, word2);

    std::cout << result << '\n';
}