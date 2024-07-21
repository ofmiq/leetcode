#include "string.h"

std::string Solution::makeFancyString(std::string s) {
    std::string result;
    for (char c : s) {
        int n = result.size();
        if (n >= 2 && result[n-1] == c && result[n-2] == c) {
            continue;
        }
        result += c;
    }
    return result;
}
