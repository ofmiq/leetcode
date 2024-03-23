#include "math.h"

int Solution::numberOfMatches(int n) {
    int count = 0;
    int local = 0;
    
    for (; n > 1 ;) {
        local = n / 2;
        count += local;
        n -= local;
    }
    
    return count;
}