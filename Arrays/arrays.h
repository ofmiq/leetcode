#ifndef LEETCODE_ARRAYS_H
#define LEETCODE_ARRAYS_H

#include <vector>
#include <string>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums);
    std::vector<int> twoSum(std::vector<int>& nums, int target); 
    bool isAnagram(std::string s, std::string t);
    std::vector<int> getConcatenation(std::vector<int>& nums);
    std::vector<int> buildArray(std::vector<int>& nums);
};

#endif //LEETCODE_ARRAYS_H
