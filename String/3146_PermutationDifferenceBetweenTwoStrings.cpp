#include "string.h"
#include <unordered_map>

int Solution::findPermutationDifference(std::string s, std::string t) {
    std::unordered_map<char, int> um;
    for (int i = 0; i < s.size(); ++i) {
        um[s[i]] = i;
    }
    int counter = 0;
    for (int i = 0; i < t.size(); ++i) {
        counter += std::abs(um[t[i]] - i);
    }
    return counter;
}