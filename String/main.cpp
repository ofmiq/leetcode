#include "string.h"
#include <iostream>

int main() {
    Solution solution;

    std::string haystack = "leetcode", needle = "leeto";

    int result = solution.strStr(haystack, needle);

    std::cout << result << '\n';
}