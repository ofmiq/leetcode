#include "interactive.h"

int guess(int n) {
    int pick = 10; // PICKED NUMBER
    if (n > pick) {
        return -1;
    } else if (n < pick) {
        return 1;
    } else {
        return 0;
    }
}

int Solution::guessNumber(int n) {
    int l = 1;
    int r = n;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (guess(m) == 0) {
            return m;
        } else if (guess(m) == -1) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}