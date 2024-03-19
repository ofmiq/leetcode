#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::vector<int>> image = 
    {
        {1,1,0,0},
        {1,0,0,1},
        {0,1,1,1},
        {1,0,1,0}
    };

    std::vector<std::vector<int>> result = solution.flipAndInvertImage(image);

    for (auto row : image) {
        for (auto elem : row) {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
