#include "arrays.h"

int Solution::finalValueAfterOperations(std::vector<std::string>& operations) {
    int X = 0;
    for (const std::string& op : operations) {
        if (op == "++X" || op == "X++") {
            ++X;
        } else {
            --X;
        }
    }
    return X;
} 