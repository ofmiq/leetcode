#include <algorithm>
#include <climits>

#include "graph.h"

int Solution::minCostConnectPoints(std::vector<std::vector<int>>& points) {
  int n = points.size();
  if (n == 0) {
    return 0;
  }

  std::vector<int> dist(n, INT_MAX);
  std::vector<bool> in_MST(n, false);

  dist[0] = 0;
  int result = 0;

  for (int count = 0; count < n; ++count) {
    int min_dist = INT_MAX, u = -1;

    for (int i = 0; i < n; ++i) {
      if (!in_MST[i] && dist[i] < min_dist) {
        min_dist = dist[i];
        u = i;
      }
    }

    result += min_dist;
    in_MST[u] = true;

    for (int v = 0; v < n; ++v) {
      if (!in_MST[v]) {
        int weight = std::abs(points[u][0] - points[v][0]) +
                     std::abs(points[u][1] - points[v][1]);
        if (weight < dist[v]) {
          dist[v] = weight;
        }
      }
    }
  }

  return result;
}
