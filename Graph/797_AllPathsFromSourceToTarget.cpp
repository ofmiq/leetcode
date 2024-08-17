#include "graph.h"

void DFS(const std::vector<std::vector<int>>& graph, std::vector<int>& path,
         std::vector<std::vector<int>>& result, int s, int d) {
  path.push_back(s);
  if (s == d) {
    result.push_back(path);
  } else {
    for (const auto& edge : graph[s]) {
      DFS(graph, path, result, edge, d);
    }
  }
  path.pop_back();
}

std::vector<std::vector<int>> Solution::allPathsSourceTarget(
    std::vector<std::vector<int>>& graph) {
  std::vector<std::vector<int>> result;
  std::vector<int> path;
  int s = 0;
  int d = graph.size() - 1;
  DFS(graph, path, result, s, d);
  return result;
}
