#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> words = {"abc","bcd","aaaa","cbc"};

    std::vector<int> result = solution.findWordsContaining(words, 'a');

    for (auto elem : result) {
        std::cout << elem << ' ';
    }

    return 0;
}
