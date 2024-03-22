#include "arrays.h"

int Solution::differenceOfSums(int n, int m) {
    int non_divisible_sum = 0;
    int divisible_sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            divisible_sum += i;
        } else {
            non_divisible_sum += i;
        }
    }
    
    return non_divisible_sum - divisible_sum;
}