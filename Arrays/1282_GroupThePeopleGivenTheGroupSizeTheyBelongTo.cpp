#include <unordered_map>
#include "arrays.h"

std::vector<std::vector<int>> Solution::groupThePeople(std::vector<int>& groupSizes) {
    std::unordered_map<int, std::vector<int>> temp;
    std::vector<std::vector<int>> result;
    
    for (int i = 0; i < groupSizes.size(); ++i) {
        int max_size = groupSizes[i];
        temp[max_size].push_back(i);
        if (temp[max_size].size() == max_size) {
            result.push_back(temp[max_size]);
            temp[max_size].clear();
        }
    }
    
    return result;
}
