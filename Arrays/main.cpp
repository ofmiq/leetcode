#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> words = {"never","gonna","give","up","on","you"};
    std::string s = "ngguoy";

    bool result = solution.isAcronym(words, s);

    std::cout << std::boolalpha << result << '\n';

    return 0;
}
