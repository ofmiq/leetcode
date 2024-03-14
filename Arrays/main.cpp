#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::string s = "codeleet";
	std::vector<int> indices = {4,5,6,7,0,2,1,3};

    std::string result = solution.restoreString(s, indices);

    std::cout << result << '\n';

    return 0;
}
