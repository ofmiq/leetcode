#include <iostream>
#include "arrays.h"

int main() {
    std::string s = "anagram";
    std::string t = "nagaram";

    Solution solution;

    bool answer = solution.isAnagram(s, t);

    std::cout << std::boolalpha << answer << '\n';

    return 0;
}
