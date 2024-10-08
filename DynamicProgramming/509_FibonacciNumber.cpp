#include "dp.h"

int fib(int n) {
  std::vector<int> dp(n + 2);

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}