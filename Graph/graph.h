#ifndef LEETCODE_GRAPH_H
#define LEETCODE_GRAPH_H

#include <queue>
#include <vector>

class Solution {
 public:
  int findCenter(std::vector<std::vector<int>>& edges);
  bool validPath(int n, std::vector<std::vector<int>>& edges, int source,
                 int destination);
};

#endif