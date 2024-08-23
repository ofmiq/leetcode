#include <stack>

#include "linkedList.h"

std::vector<int> nextLargerNodes(ListNode* head) {
  std::vector<int> values;
  while (head) {
    values.push_back(head->val);
    head = head->next;
  }

  int n = values.size();
  std::vector<int> result(n, 0);
  std::stack<int> s;

  for (int i = 0; i < n; ++i) {
    while (!s.empty() && values[i] > values[s.top()]) {
      result[s.top()] = values[i];
      s.pop();
    }
    s.push(i);
  }

  return result;
}