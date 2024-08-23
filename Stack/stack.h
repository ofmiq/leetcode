#define LEETCODE_STACK_H
#ifdef LEETCODE_STACK_H

#include <stack>
#include <string>
#include <vector>

class Solution {
public:
    bool isValid(std::string s);
    int calPoints(std::vector<std::string>& operations);
    int maxDepth(std::string s);
    std::vector<int> finalPrices(const std::vector<int>& prices);
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2);
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures);
};

#endif //LEETCODE_STACK_H