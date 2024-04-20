#include "math.h"

int Solution::sumOfMultiples(int n) {
    int r = 0;

    for (int i = 3; i < n+1; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            r += i;
        }
    }
    
    return r;
}