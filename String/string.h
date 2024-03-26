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
};

#endif // LEETCODE_STRING_H