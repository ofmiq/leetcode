#include "arrays.h"
#include <unordered_map>
#include <algorithm>

std::vector<int> Solution::smallerNumbersThanCurrent(std::vector<int>& nums) {
    std::vector<int> new_nums = nums;
    std::sort(new_nums.begin(), new_nums.end());

    std::unordered_map<int, int> map;
    for (int i = 0; i < new_nums.size(); ++i) {
        if (map.find(new_nums[i]) == map.end()) {
            map[new_nums[i]] = i;
        }
    }

    std::vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        result.push_back(map[nums[i]]);
    }

    return result;
}