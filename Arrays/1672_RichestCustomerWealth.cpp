#include "arrays.h"

int Solution::maximumWealth(std::vector<std::vector<int>>& accounts) {
    int max = 0;
    for (int i = 0; i < accounts.size(); ++i) {
        int current = 0;
        for (int j = 0; j < accounts[i].size(); ++j) {
            current += accounts[i][j];
        }
        if (max < current) {
            max = current;
        }
    }
    return max;
}
