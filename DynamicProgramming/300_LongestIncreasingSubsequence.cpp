#include "dp.h"

int Solution::lengthOfLIS(std::vector<int>& nums) {
  int n = nums.size();
  std::vector<int> dp(n + 1, INT_MAX);
  std::vector<int> pos(n + 1, -1);
  std::vector<int> prev(n, -1);
  int length = 0;
  dp[0] = INT_MIN;

  for (int i = 0; i < n; ++i) {
    int j = std::lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
    if (dp[j - 1] < nums[i] && nums[i] < dp[j]) {
      dp[j] = nums[i];
      pos[j] = i;
      prev[i] = pos[j - 1];
      length = std::max(length, j);
    }
  }

  return length;
}
