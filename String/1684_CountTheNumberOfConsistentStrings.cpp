#include "string.h"
#include <unordered_set>

int Solution::countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    std::unordered_set<char> allowed_set(allowed.begin(), allowed.end());
    int count = 0;
    for (const std::string& word : words) {
        bool is_consistent = true;
        for (char c : word) {
            if (allowed_set.find(c) == allowed_set.end()) {
                is_consistent = false;
                break;
            }
        }
        if (is_consistent) {
            ++count;
        }
    }
    
    return count;
}