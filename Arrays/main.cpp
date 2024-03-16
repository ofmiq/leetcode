#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> gain = {-5,1,5,0,-7};

    int result = solution.largestAltitude(gain);

    std::cout << result << '\n';

    return 0;
}
