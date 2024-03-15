#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::string s = "Hello how are you Contestant";
    int k = 4;

    std::string result = solution.truncateSentence(s, k);

    std::cout << result << '\n';

    return 0;
}
