#include "string.h"

int Solution::countKeyChanges(std::string s) {
    int count = 0;
    for (int i = 1; i < s.size(); ++i) {
        if(s[i] != s[i-1] && s[i] + 32 != s[i-1] && s[i] - 32 != s[i-1]) {
            ++count;
        }
    }
    return count;
}
