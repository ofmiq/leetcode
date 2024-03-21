#include "arrays.h"
#include <algorithm>

std::vector<std::string> Solution::sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
    int n = names.size();
    std::vector<std::pair<int, std::string>> pairs;

    for (int i = 0; i < n; ++i) {
        pairs.push_back({heights[i], names[i]});
    }

    std::sort(pairs.begin(), pairs.end(), std::greater<>());


    std::vector<std::string> result;
    for (const auto& elem : pairs) {
        result.push_back(elem.second);
    }

    return result;
}