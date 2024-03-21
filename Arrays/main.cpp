#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::string> names = {"Mary","John","Emma"};
    std::vector<int> heights = {180,165,170};

    std::vector<std::string> result = solution.sortPeople(names, heights);

    for (const auto& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
