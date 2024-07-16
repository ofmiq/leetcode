#include "arrays.h"

std::vector<int> Solution::plusOne(std::vector<int>& digits) {
    int size = digits.size();
 
    for (int i = size - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            ++digits[i];
            return digits;
        }
        digits[i] = 0;
    }
 
    digits[0] = 1;
    digits.push_back(0);
 
    return digits;
}

