#include "math.h"

bool Solution::isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
    }
    
    int reversed = 0;
    int temp = x;

    while (temp > reversed) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return temp == reversed || temp == reversed / 10;
}