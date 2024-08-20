#ifndef LEETCODE_GRAPH_H
#define LEETCODE_GRAPH_H

#include <queue>
#include <vector>

class Solution {
 public:
  int findCenter(std::vector<std::vector<int>>& edges);
  bool validPath(int n, std::vector<std::vector<int>>& edges, int source,
                 int destination);
  int findJudge(int n, std::vector<std::vector<int>>& trust);
  std::vector<std::vector<int>> allPathsSourceTarget(
      std::vector<std::vector<int>>& graph);
  std::vector<int> findSmallestSetOfVertices(
      int n, std::vector<std::vector<int>>& edges);
  bool canVisitAllRooms(std::vector<std::vector<int>>& rooms);
  long long maximumImportance(int n, std::vector<std::vector<int>>& roads);
  int minCostConnectPoints(std::vector<std::vector<int>>& points);
};

#endif