#include "arrays.h"

void Solution::NumToDigit(int num, std::vector<int>& arr) {
    if (num == 0) return;
    int temp = num % 10;
    NumToDigit(num / 10, arr);
    arr.push_back(temp);
}

std::vector<int> Solution::separateDigits(std::vector<int>& nums) {
    std::vector<int> result;
    for (int& num : nums) {
        NumToDigit(num, result);
    }
    return result;
}
