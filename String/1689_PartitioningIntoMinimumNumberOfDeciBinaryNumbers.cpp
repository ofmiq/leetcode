#include "string.h"
#include <algorithm>

int Solution::minPartitions(std::string n) {
    return *std::max_element(n.begin(), n.end()) - '0';
}