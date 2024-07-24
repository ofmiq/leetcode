#include "math.h"
#include <unordered_map>

int romanToInt(std::string s) {
    static const std::unordered_map<char, int> m{
        {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};
    int ans = 0;
    int prev = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        int curr = m.at(s[i]);
        if (curr < prev) {
            ans -= curr;
        } else {
            ans += curr;
        }
        prev = curr;
    }
    return ans;
}
