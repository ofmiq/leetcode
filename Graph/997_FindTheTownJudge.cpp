#include "graph.h"

int Solution::findJudge(int n, std::vector<std::vector<int>>& trust) {
  std::vector<int> trustCount(n, 0);
  std::vector<int> trustedByOthers(n, 0);

  for (const auto& edge : trust) {
    int u = edge[0] - 1;
    int v = edge[1] - 1;
    trustCount[u]++;
    trustedByOthers[v]++;
  }

  for (int i = 0; i < n; ++i) {
    if (trustCount[i] == 0 && trustedByOthers[i] == n - 1) {
      return i + 1;
    }
  }

  return -1;
}
