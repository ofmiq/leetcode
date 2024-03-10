#ifndef LEETCODE_ARRAYS_H
#define LEETCODE_ARRAYS_H

#include <vector>
#include <string>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums);
    std::vector<int> twoSum(std::vector<int>& nums, int target); 
    bool isAnagram(std::string s, std::string t);
};

#endif //LEETCODE_ARRAYS_H
