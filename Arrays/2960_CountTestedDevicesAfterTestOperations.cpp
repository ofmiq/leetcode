#include "arrays.h"

int Solution::countTestedDevices(std::vector<int>& batteryPercentages) {
    int count = 0;
    for (int i = 0; i < batteryPercentages.size(); ++i) {
        if (batteryPercentages[i] > count) {
            ++count;
        }
    }
    return count;
}