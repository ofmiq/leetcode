#define LEETCODE_STRING_H
#ifdef LEETCODE_STRING_H

#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address);
    int numJewelsInStones(std::string jewels, std::string stones);
    std::string interpret(std::string command);
    int balancedStringSplit(std::string s);
    std::string toLowerCase(std::string s); 
    bool checkIfPangram(std::string sentence);
    bool isIsomorphic(std::string s, std::string t);
    bool isSubsequence(std::string s, std::string t);
    int strStr(std::string haystack, std::string needle);
    int lengthOfLastWord(std::string s);
    bool canConstruct(std::string ransomNote, std::string magazine);
    int minPartitions(std::string n);
    int scoreOfString(std::string s);
    std::string finalString(std::string s);
    std::string reverseWords(std::string s);
    int countKeyChanges(std::string s);
    std::string mergeAlternately(std::string word1, std::string word2);
    std::string reversePrefix(std::string word, char ch);
    std::string gcdOfStrings(std::string str1, std::string str2);
    std::string reverseVowels(std::string s);
    std::string removeOuterParentheses(std::string s);
    int findPermutationDifference(std::string s, std::string t);
    std::string addBinary(std::string a, std::string b);
};

#endif // LEETCODE_STRING_H