#include <unordered_map>

#include "string.h"

std::string Solution::decodeMessage(const std::string& key,
                                    const std::string& message) {
    std::unordered_map<char, char> um;
    char mappedChar = 'a';

    for (char c : key) {
        if (c != ' ' && um.find(c) == um.end()) {
            um[c] = mappedChar++;
        }
    }

    std::string result = "";
    for (char c : message) {
        if (c != ' ') {
            result += um[c];
        } else {
            result += ' ';
        }
    }
    
    return result;
}
