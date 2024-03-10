#include <iostream>
#include "arrays.h"

int main() {
    std::vector<std::string> operations = {"--X","X++","X++"};

    Solution solution;

    int result = solution.finalValueAfterOperations(operations);

    std::cout << result << '\n';

    return 0;
}
