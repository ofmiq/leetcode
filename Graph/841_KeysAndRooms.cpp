#include "graph.h"

std::vector<int> BFS(const std::vector<std::vector<int>>& G) {
  int n = G.size();

  std::vector<int> dist(n, -1);
  std::queue<int> q;

  dist[0] = 0;
  q.push(0);

  while (!q.empty()) {
    int v = q.front();
    q.pop();

    for (const auto& u : G[v]) {
      if (dist[u] == -1) {
        dist[u] = dist[v] + 1;
        q.push(u);
      }
    }
  }

  return dist;
}

bool Solution::canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
  std::vector<int> dist = BFS(rooms);
  for (const auto& elem : dist) {
    if (elem == -1) {
      return false;
    }
  }
  return true;
}
