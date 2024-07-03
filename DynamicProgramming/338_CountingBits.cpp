#include "dp.h"

std::vector<int> Solution::countBits(int n) {
  std::vector<int> dp(n + 1);
  for (int i = 1; i <= n; ++i) {
    dp[i] = dp[i >> 1] + (i & 1);
  }
  return dp;
}