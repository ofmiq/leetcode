#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "thequickbrownfoxjumpsoverthelazydog";

    bool result = solution.checkIfPangram(s);

    std::cout << std::boolalpha << result << '\n';
}