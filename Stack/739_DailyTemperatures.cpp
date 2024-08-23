#include "stack.h"

std::vector<int> Solution::dailyTemperatures(std::vector<int>& temperatures) {
  int n = temperatures.size();
  std::vector<int> result(n, 0);
  std::stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
    while (!s.empty() && temperatures[s.top()] <= temperatures[i]) {
      s.pop();
    }

    if (!s.empty()) {
      result[i] = s.top() - i;
    }

    s.push(i);
  }

  return result;
}