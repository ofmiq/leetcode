#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string s = "   fly me   to   the moon  ";

    int result = solution.lengthOfLastWord(s);

    std::cout << result << '\n';
}