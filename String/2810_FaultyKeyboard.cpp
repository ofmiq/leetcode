#include "string.h"
#include <algorithm>

std::string Solution::finalString(std::string s) {
    std::string new_s = "";
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'i') {
            std::reverse(new_s.begin(), new_s.end());
        } else {
            new_s += s[i];
        }
    }

    return new_s;
}