#include "arrays.h"
#include <algorithm>

int Solution::timeRequiredToBuy(std::vector<int>& tickets, int k) {
    int count = 0;
    for (int i = 0; i < tickets.size(); ++i) {
        if (i <= k) {
            count += std::min(tickets[i], tickets[k]);
        } else {
            count += std::min(tickets[i], tickets[k]-1);
        }
    }
    return count;
}