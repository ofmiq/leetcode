#include "graph.h"

std::vector<int> Solution::findSmallestSetOfVertices(int n, std::vector<std::vector<int>>& edges) {
  std::vector<int> in(n);

  for (const auto& edge : edges) {
    ++in[edge[1]];
  }

  std::vector<int> result;

  for (int i = 0; i < n; ++i) {
    if (in[i] == 0) {
      result.push_back(i);
    }
  }

  return result;
}
