#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> word1 = {"ab", "c"};
    std::vector<std::string> word2 = {"a", "bc"};

    bool result = solution.arrayStringsAreEqual(word1, word2);

    std::cout << std::boolalpha << result << '\n';

    return 0;
}
