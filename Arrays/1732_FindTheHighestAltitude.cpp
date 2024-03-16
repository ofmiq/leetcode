#include "arrays.h"

int Solution::largestAltitude(std::vector<int>& gain) {
    int max = 0;
    int current = 0;
    
    for (int& height : gain) {
        current += height;
        max = std::max(current, max);
    }
    
    return max;
}