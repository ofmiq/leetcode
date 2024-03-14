#include "arrays.h"

bool Solution::arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
    std::string s1 = "";
    std::string s2 = "";

    for (int i = 0; i < word1.size(); ++i) {
        s1 += word1[i];
    }

    for (int i = 0; i < word2.size(); ++i) {
        s2 += word2[i];
    }

    return s1 == s2;
}