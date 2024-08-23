#include "stack.h"

long long Solution::subArrayRanges(std::vector<int>& nums) {
  int n = nums.size();
  long long sum_max = 0;
  long long sum_min = 0;

  std::stack<int> s_max;
  std::stack<int> s_min;

  for (int i = 0; i <= n; ++i) {
    while (!s_max.empty() && (i == n || nums[s_max.top()] < nums[i])) {
      int j = s_max.top();
      s_max.pop();
      int k = s_max.empty() ? -1 : s_max.top();
      sum_max += (long long)nums[j] * (i - j) * (j - k);
    }
    s_max.push(i);

    while (!s_min.empty() && (i == n || nums[s_min.top()] > nums[i])) {
      int j = s_min.top();
      s_min.pop();
      int k = s_min.empty() ? -1 : s_min.top();
      sum_min += (long long)nums[j] * (i - j) * (j - k);
    }
    s_min.push(i);
  }

  return sum_max - sum_min;
}
