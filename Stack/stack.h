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
};

#endif //LEETCODE_STACK_H