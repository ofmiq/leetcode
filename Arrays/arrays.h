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
    std::vector<int> runningSum(std::vector<int>& nums);
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums);
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x);
    int mostWordsFound(std::vector<std::string>& sentences); 
    std::vector<int> leftRightDifference(std::vector<int>& nums);
    int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points);
    std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index);
    std::vector<int> numberGame(std::vector<int>& nums);
    std::vector<int> decompressRLElist(std::vector<int>& nums);
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2);
    int countMatches(std::vector<std::vector<std::string>>& items, std::string& ruleKey, std::string& ruleValue);
    std::string restoreString(std::string s, std::vector<int>& indices);
    int minOperations(std::vector<int>& nums, int k);
    std::string truncateSentence(std::string s, int k);
    std::string firstPalindrome(std::vector<std::string>& words);
    int differenceOfSum(std::vector<int>& nums);
    int countKDifference(std::vector<int>& nums, int k);
    int largestAltitude(std::vector<int>& gain);
    int maxProductDifference(std::vector<int>& nums);
    bool isAcronym(std::vector<std::string>& words, std::string s);
    int diagonalSum(std::vector<std::vector<int>>& mat);
    int maxProduct(std::vector<int>& nums);
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2);
    int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students);
    int maximizeSum(std::vector<int>& nums, int k);
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image);
    int maximumNumberOfStringPairs(std::vector<std::string>& words);
    int countTestedDevices(std::vector<int>& batteryPercentages);
    int sumOfSquares(std::vector<int>& nums);
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights);
    int maxFrequencyElements(std::vector<int>& nums);
    int differenceOfSums(int n, int m);
    std::vector<int> decode(std::vector<int>& encoded, int first);
};

#endif //LEETCODE_ARRAYS_H
