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
    int numIdenticalPairs(std::vector<int>& nums);
    int finalValueAfterOperations(std::vector<std::string>& operations);
    std::vector<int> shuffle(std::vector<int>& nums, int n);
    int maximumWealth(std::vector<std::vector<int>>& accounts);
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target);
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies);
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2);
    int getCommon(std::vector<int>& nums1, std::vector<int>& nums2);
    int countPairs(std::vector<int>& nums, int target);
};

#endif //LEETCODE_ARRAYS_H
