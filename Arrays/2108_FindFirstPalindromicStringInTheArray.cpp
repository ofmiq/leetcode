#include "arrays.h"
#include <algorithm>

bool is_palindrome(std::string &x) {
    int l = 0; 
    int r = x.length() - 1;
    while (l <= r) {
        if (x[l] != x[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

std::string Solution::firstPalindrome(std::vector<std::string>& words) {
    for (std::string& word : words) {
        if (is_palindrome(word)) {
            return word;
        }
    }
    return "";
}