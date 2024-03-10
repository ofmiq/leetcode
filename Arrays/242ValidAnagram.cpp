#include "arrays.h"
#include <unordered_map>

bool Solution::isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, int> s_hash;
    std::unordered_map<char, int> t_hash;

    for (int i = 0; i < s.size(); ++i) {
        s_hash[s[i]]++;
        t_hash[t[i]]++;
    }

    for (char c = 'a'; c <= 'z'; ++c) {
        if (s_hash[c] != t_hash[c]) {
            return false;
        }
    }

    return true;
}

/*
bool Solution::isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, int> s_hash;
    std::unordered_map<char, int> t_hash;

    for (int i = 0; i < s.size(); ++i) {
        s_hash[s[i]]++;
        t_hash[t[i]]++;
    }

    for (int i = 0; i < s_hash.size(); ++i) {
        if (s_hash[i] != t_hash[i]) {
            return false;
        }
    }

    return true;
}
*/