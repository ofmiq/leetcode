#include "math.h"
#include <unordered_set>

bool Solution::isHappy(int n) {
    std::unordered_set<int> seen;

    while (n != 1) {
        if (seen.find(n) != seen.end()) {
            return false;
        }
        seen.insert(n);
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }

    return true;
}