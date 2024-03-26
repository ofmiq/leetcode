#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    for (const int& elem : nums) {
        std::cout << elem << ' ';
    } 
    std::cout << '\n';

    int result = solution.removeDuplicates(nums);

    std::cout << result << '\n';

    for (const int& elem : nums) {
        std::cout << elem << ' ';
    }

    std::cout << '\n';

    return 0;
}
