#include <stack.h>

#include <unordered_map>

std::vector<int> nextGreaterElement(std::vector<int>& nums1,
                                    std::vector<int>& nums2) {
  int n = nums2.size();
  std::unordered_map<int, int> NGE;
  std::stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
    while (!s.empty() && s.top() <= nums2[i]) {
      s.pop();
    }
    if (!s.empty()) {
      NGE[nums2[i]] = s.top();
    } else {
      NGE[nums2[i]] = -1;
    }
    s.push(nums2[i]);
  }

  std::vector<int> result;
  for (int num : nums1) {
    result.push_back(NGE[num]);
  }

  return result;
}