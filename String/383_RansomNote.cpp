#include "string.h"
#include <unordered_map>

bool Solution::canConstruct(std::string ransomNote, std::string magazine) {
    if (ransomNote.size() > magazine.size()) {
        return false;
    }
    std::unordered_map<char, int> n;
    for (const char& elem : magazine) {
        ++n[elem];
    }
    for (const char& elem : ransomNote) {
        if (n[elem] > 0) {
            --n[elem];
        } else {
            return false;
        }
    }
    return true;
}