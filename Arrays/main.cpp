#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> encoded = {1, 2, 3};
    int first = 1;

    std::vector<int> result = solution.decode(encoded, first);

    for (const int& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
