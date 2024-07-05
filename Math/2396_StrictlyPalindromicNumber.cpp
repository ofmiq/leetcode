#include "math.h"
#include <string>
#include <algorithm>

// bool isStrictlyPalindromic(int n) {
//     return 0;
// }

std::string convertToBase(int n, int base) {
    std::string result;
    while (n > 0) {
        result.push_back('0' + (n % base));
        n /= base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

bool isPalindrome(const std::string& str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

bool Solution::isStrictlyPalindromic(int n) {
    for (int base = 2; base <= n - 2; ++base) {
        std::string representation = convertToBase(n, base);
        if (!isPalindrome(representation)) {
            return false;
        }
    }
    return true;
}