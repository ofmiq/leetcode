#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string ransomNote = "aa";
    std::string magazine = "aab";

    bool result = solution.canConstruct(ransomNote, magazine);

    std::cout << std::boolalpha << result  << '\n';
}