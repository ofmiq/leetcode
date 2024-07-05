#include "arrays.h"

int Solution::minimumOperations(std::vector<int>& nums) {
    int operations = 0;
    for (const int& elem : nums) {
        if (elem % 3) {
            ++operations;
        }
    }
    return operations;
}