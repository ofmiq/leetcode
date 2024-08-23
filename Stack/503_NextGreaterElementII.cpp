#include "stack.h"

std::vector<int> Solution::nextGreaterElements(std::vector<int>& nums) {
  int n = nums.size();
  std::vector<int> result(n, -1);
  std::stack<int> s;

  for (int i = 0; i < 2 * n; ++i) {
    while (!s.empty() && nums[s.top()] < nums[i % n]) {
      result[s.top()] = nums[i % n];
      s.pop();
    }
    if (i < n) {
      s.push(i);
    }
  }

  return result;
}
