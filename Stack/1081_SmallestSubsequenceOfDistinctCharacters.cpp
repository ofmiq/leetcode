#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#include "stack.h"

std::string Solution::smallestSubsequence(const std::string& s) {
  std::unordered_map<char, int> freq;
  std::unordered_set<char> in_stack;
  std::stack<char> st;

  for (char c : s) {
    freq[c]++;
  }
  for (char c : s) {
    freq[c]--;

    if (in_stack.count(c)) continue;

    while (!st.empty() && st.top() > c && freq[st.top()] > 0) {
      in_stack.erase(st.top());
      st.pop();
    }

    st.push(c);
    in_stack.insert(c);
  }

  std::string result;
  while (!st.empty()) {
    result += st.top();
    st.pop();
  }

  std::reverse(result.begin(), result.end());

  return result;
}
