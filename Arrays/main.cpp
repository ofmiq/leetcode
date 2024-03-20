#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> words = {"cd","ac","dc","ca","zz"};

    int result = solution.maximumNumberOfStringPairs(words);

    std::cout << result << '\n';

    return 0;
}
