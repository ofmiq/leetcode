#include "arrays.h"

int Solution::diagonalSum(std::vector<std::vector<int>>& mat) {
    int m = 0;
    int n = 0;
    int s = mat.size();
    for (int i = 0; i < mat.size(); ++i) {
        m += mat[i][i];
        if (i != s - i - 1) {
            n += mat[i][s - i - 1];
        }
    }
    return m + n;
}