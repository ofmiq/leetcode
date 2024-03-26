#include "string.h"

int Solution::strStr(std::string haystack, std::string needle) {
    int h = 0;
    int n = 0;

    while (h < haystack.size() && n < needle.size()) {
        if (haystack[h] == needle[n]) {
            ++h;
            ++n;
            if (n == needle.size()) {
                return h - needle.size();
            }
        } else {
            h = h - n + 1;
            n = 0;
        }
    }

    return -1;
}