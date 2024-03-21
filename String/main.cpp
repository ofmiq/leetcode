#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    int result = solution.numJewelsInStones(jewels, stones);

    std::cout << result << '\n';
}