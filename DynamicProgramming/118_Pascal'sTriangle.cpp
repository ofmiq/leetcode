#include "dp.h"

std::vector<std::vector<int>> Solution::generate(int numRows) {
  std::vector<std::vector<int>> dp(numRows);

  for (int i = 0; i < numRows; ++i) {
    dp[i].assign(i + 1, 1);
    for (int j = 1; j < i; ++j) {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  return dp;
}