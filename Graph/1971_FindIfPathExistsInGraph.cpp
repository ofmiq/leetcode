#include "graph.h"

bool Solution::validPath(int n, std::vector<std::vector<int>>& edges,
                         int source, int destination) {
  std::vector<std::vector<int>> adj(n);
  for (const auto& edge : edges) {
    adj[edge[0]].push_back(edge[1]);
    adj[edge[1]].push_back(edge[0]);
  }

  std::vector<int> dist(n, -1);
  std::queue<int> q;

  dist[source] = 0;
  q.push(source);

  while (!q.empty()) {
    int v = q.front();
    q.pop();

    for (const int& u : adj[v]) {
      if (dist[u] == -1) {
        dist[u] = dist[v] + 1;
        q.push(u);
      }
    }
  }

  return dist[destination] != -1;
}
