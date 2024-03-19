#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<int> seats = {3,1,5};
    std::vector<int> students = {2,7,4};

    int result = solution.minMovesToSeat(seats, students);

    std::cout << result << '\n';

    return 0;
}
