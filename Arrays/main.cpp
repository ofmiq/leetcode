#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::string s = "A man, a plan, a canal: Panama";

    bool result = solution.isPalindrome(s);

    std::cout << std::boolalpha << result << '\n';

    return 0;
}
