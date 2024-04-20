#include "math.h"

int Solution::xorOperation(int n, int start) {
    int res = 0;
    std::vector<int> nums (n);
    for (int i = 0; i < n; ++i) {
        res ^= start + 2 * i;
    }
    return res;
}