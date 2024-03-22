#include "math.h"
#include <string>
#include <algorithm>

int Solution::minimumSum(int num) {
    std::string s = std::to_string(num);
    std::sort(s.begin(), s.end());
    int res = (s[0] - '0' + s[1] - '0') * 10 + s[2] - '0' + s[3] - '0';
    return res;
}