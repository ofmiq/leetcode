#include "arrays.h"

int Solution::maxArea(std::vector<int>& height) {
    int area = 0;
    int l = 0;
    int r = height.size() - 1;
    while (l < r) {
        area = std::max(area, std::min(height[l], height[r]) * (r - l));
        if (height[l] < height[r]) {
            ++l;
        } else {
            --r;
        }
    }
    return area;
}