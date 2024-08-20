#include "graph.h"

void DFS(const std::vector<std::vector<int>>& G, int v,
         std::vector<bool>& visited) {
  visited[v] = true;
  for (int i = 0; i < G.size(); ++i) {
    if (G[v][i] && !visited[i]) {
      DFS(G, i, visited);
    }
  }
}

int Solution::findCircleNum(std::vector<std::vector<int>>& isConnected) {
  int n = isConnected.size();
  std::vector<bool> visited(n, false);
  int count = 0;

  for (int i = 0; i < n; ++i) {
    if (!visited[i]) {
      DFS(isConnected, i, visited);
      ++count;
    }
  }

  return count;
}
