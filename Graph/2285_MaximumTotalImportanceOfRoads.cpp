#include "graph.h"
#include <algorithm>

long long Solution::maximumImportance(int n, std::vector<std::vector<int>>& roads) {
  std::vector<int> degree(n, 0);

  for (const auto& road : roads) {
    ++degree[road[0]];
    ++degree[road[1]];
  }

  std::sort(degree.begin(), degree.end());

  long long result = 0;
  for (int i = 0; i < n; ++i) {
    result += (long long)(i + 1) * degree[i];
  }

  return result;
}
