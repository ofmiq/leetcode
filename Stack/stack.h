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
};

#endif //LEETCODE_STACK_H