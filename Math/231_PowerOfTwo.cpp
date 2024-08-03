#include "math.h"

bool Solution::isPowerOfTwo(int n) {
    if (n < 1) {
        return false;
    }
    
    while (n % 2 == 0) {
        n /= 2;
    }
    
    return n == 1;
}

// OR
// bool isPowerOfTwo(int n) { return !(n <= 0) && !(n & (n - 1)); }
