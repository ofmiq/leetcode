#include "math.h"

int Solution::countDigits(int num) {
    int n = num;
    int r = 0;
    while (num != 0) {
        int digit = num % 10;
        if (n % digit == 0) {
            ++r;
        }
        num /= 10;
    }
    return r;
}