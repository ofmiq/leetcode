#include "stack.h"

std::vector<int> Solution::finalPrices(const std::vector<int>& prices) {
    std::vector<int> result(prices.size());
    std::stack<int> st;

    for (int i = 0; i < prices.size(); ++i) {
        while (!st.empty() && prices[st.top()] >= prices[i]) {
            result[st.top()] = prices[st.top()] - prices[i];
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        result[st.top()] = prices[st.top()];
        st.pop();
    }

    return result;
}

/*
std::vector<int> finalPrices(const std::vector<int>& prices) {
    std::vector<int> result = prices;
    for (int i = 0; i < prices.size(); ++i) {
        for (int j = i + 1; j < prices.size(); ++j) {
            if (prices[j] <= prices[i]) {
                result[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    return result;
}
*/