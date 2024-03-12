#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

    int result = solution.mostWordsFound(sentences);

    std::cout << result << '\n';

    return 0;
}
