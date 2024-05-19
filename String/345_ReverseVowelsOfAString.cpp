#include "string.h"

std::string Solution::reverseVowels(std::string s) {
    int l = 0;
    int r = s.size()-1;
    std::string vowels = "aeiouAEIOU";
    while (l < r) {
        while (l < r && vowels.find(s[l]) == std::string::npos) {
            l++;
        }
        
        while (l < r && vowels.find(s[r]) == std::string::npos) {
            r--;
        }
        std::swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}