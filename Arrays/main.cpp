#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> batteryPercentages = {1,1,2,1,3};

    int result = solution.countTestedDevices(batteryPercentages);

    std::cout << result << '\n';

    return 0;
}
