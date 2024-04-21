#include "string.h"
#include <algorithm>

std::string Solution::reverseWords(std::string s) {
    std::string result = "";
    std::string word = "";
    for (auto letter : s) {
        if (letter == ' ') {
            std::reverse(word.begin(), word.end());
            result += word + " ";
            word = "";
        } else {
            word += letter;
        }
    }
    std::reverse(word.begin(), word.end());
    result += word;
    return result;
}
