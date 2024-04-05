#include "stack.h"

int Solution::calPoints(std::vector<std::string>& operations) {
    std::stack<int> st;
    
    for (auto elem : operations) {
        if (elem == "+") {
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            st.push(n1);
            st.push(n1 + n2);
        } else if (elem == "D") {
            st.push(st.top() * 2);
        } else if (elem == "C") {
            st.pop();
        } else {
            st.push(std::stoi(elem));
        }
    }

    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    
    return sum;
}