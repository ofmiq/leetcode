#include "arrays.h"
#include <sstream>

std::string Solution::truncateSentence(std::string s, int k) {
    std::istringstream iss(s);
    std::string word;
    std::string result;

    for (int i = 0; i < k; ++i) {
        iss >> word;
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}