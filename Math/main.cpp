#include "math.h"
#include <iostream>

int main() {
    Solution solution;

    double celsius = 36.50;

    std::vector<double> res = solution.convertTemperature(celsius);

    for (auto elem : res) {
        std::cout << elem << ' ';
    }
}