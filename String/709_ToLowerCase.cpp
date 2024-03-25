#include "string.h"
#include <algorithm>

std::string Solution::toLowerCase(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}