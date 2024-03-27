#include "arrays.h"

int Solution::maxProfit(std::vector<int>& prices) {
    int earned = 0;
    int bought = prices[0];

    for (int i = 1; i < prices.size(); ++i){
        earned = std::max(earned, prices[i] - bought);
        bought = std::min(bought, prices[i]);
    }

    return earned;
}