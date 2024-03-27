#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> prices = {7,1,5,3,6,4};

    int result = solution.maxProfit(prices);

    std::cout << result << '\n';

    return 0;
}
