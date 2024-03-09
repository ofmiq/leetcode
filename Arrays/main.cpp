#include "arrays.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    Solution solution;
    bool hasDuplicate = solution.containsDuplicate(nums);
    std::cout << "Contains duplicate: " << std::boolalpha << hasDuplicate << '\n';
    return 0;
}
