#include "stack.h"

bool Solution::isValid(std::string s) {
    std::stack<char> st;
    for (char elem : s) {
        if (elem == '(' || elem == '{' || elem == '[') {
            st.push(elem);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            if ((elem == ')' && top != '(') || 
                (elem == '}' && top != '{') || 
                (elem == ']' && top != '[')) {
                    return false;
                }
            st.pop();
        }
    }
    return st.empty();
}