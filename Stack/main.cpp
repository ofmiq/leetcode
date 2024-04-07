#include <iostream>
#include "stack.h"

int main() {
    Solution solution;

    std::vector<int> prices = {8, 4, 6, 2, 3};

    std::vector<int> result = solution.finalPrices(prices);

    for (const int& elem : result) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}