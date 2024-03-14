#include "arrays.h"

std::string Solution::restoreString(std::string s, std::vector<int>& indices) {
    std::string result (s.size(), ' ');
    for (int i = 0; i < s.size(); ++i) {
        result[indices[i]] = s[i];
    }
    return result;
}