#include "math.h"

int Solution::subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    
    for (; n > 0 ;) {
        int last_digit = n % 10;
        product *= last_digit;
        sum += last_digit;
        n /= 10;
    }
    
    int result = product - sum;
    return result;
}