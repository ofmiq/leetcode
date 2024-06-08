#include "string.h"

std::string Solution::removeOuterParentheses(std::string s) {
    std::string res = "";
    int count = 0;
    for (auto elem : s) {
        if (elem == '(' && count++ > 0) {
            res += elem; 
        } else if (elem == ')' && count-- > 1) {
            res += elem;
        }
    }
    return res;
}