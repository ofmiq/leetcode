#include <stack>
#include <iostream>

class MinStack {
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    MinStack() {}

    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
  MinStack minStack =  MinStack();
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  int a = minStack.getMin();  // return -3
  std::cout << a << '\n';
  minStack.pop();
  int b = minStack.top();
  std::cout << b << '\n';  // return 0
  int c = minStack.getMin();
  std::cout << c << '\n';  // return -2
  return 0;
}
