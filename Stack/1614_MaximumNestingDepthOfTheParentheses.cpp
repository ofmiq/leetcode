#include "stack.h"

int Solution::maxDepth(std::string s) {
    std::stack<char> st;
    
    int depth=0;
    int maxDepth=0;
    
    for (char i : s) {
        if (i == '(') {
            st.push(i);
            depth++;
            maxDepth=std::max(depth,maxDepth);
        }
        else if (i == ')') {
            st.pop();
            depth--;
        }
    }

    return maxDepth;
}

/*
int maxDepth(std::string s) {
    int depth = 0;
    int max_depth = 0;
    
    for (char c : s) {
        if (c == '(') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (c == ')') {
            depth--;
        }
    }
    
    return max_depth;
}
*/