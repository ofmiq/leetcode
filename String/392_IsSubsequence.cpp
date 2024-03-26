#include "string.h"

bool Solution::isSubsequence(std::string s, std::string t) {
    int l = 0;
    int r = 0;
    
    while (l < s.size() && r < t.size()) {
        if (s[l] == t[r]) {
            ++l;
        }
        ++r;
    }
    
    return l == s.size();
}