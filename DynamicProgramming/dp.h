#ifndef DYNAMIC_PROGRAMMING
#define DYNAMIC_PROGRAMMING

#include <iostream>
#include <vector>

class Solution {
 public:
  int climbStairs(int n);
  std::vector<int> countBits(int n);
  int minPathSum(std::vector<std::vector<int>>& grid);
  int fib(int n);
  std::vector<std::vector<int>> generate(int numRows);
};

#endif  // DYNAMIC_PROGRAMMING