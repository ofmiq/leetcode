#include <iostream>
#include <vector>
#include <stack>
#include <stdexcept>

template <typename T>
class MyStack {
private:
    std::vector<T> data;

public:
    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }

    const T& top() const {
        if (!data.empty()) {
            return data.back();
        }
        throw std::out_of_range("Stack is empty");
    }

    void push(const T& value) {
        data.push_back(value);
    };

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        } else {
            throw std::out_of_range("Stack is empty");
        }
    };
};

void testStacks() {
    MyStack<int> myStack;
    std::stack<int> stlStack;

    // Push elements
    for (int i = 0; i < 5; ++i) {
        myStack.push(i);
        stlStack.push(i);
    }

    // Check if sizes are equal
    if (myStack.size() != static_cast<size_t>(stlStack.size())) {
        std::cout << "Size mismatch!" << std::endl;
        return;
    }

    // Compare top elements
    if (!myStack.empty() && !stlStack.empty()) {
        if (myStack.top() != stlStack.top()) {
            std::cout << "Top element mismatch!" << std::endl;
            return;
        }
    }

    // Pop elements and compare
    while (!myStack.empty() && !stlStack.empty()) {
        myStack.pop();
        stlStack.pop();
        if (myStack.size() != static_cast<size_t>(stlStack.size())) {
            std::cout << "Size mismatch after pop!" << std::endl;
            return;
        }
        if (!myStack.empty() && !stlStack.empty()) {
            if (myStack.top() != stlStack.top()) {
                std::cout << "Top element mismatch after pop!" << std::endl;
                return;
            }
        }
    }

    // Check if both stacks are empty
    if (myStack.empty() != stlStack.empty()) {
        std::cout << "Emptiness mismatch!" << std::endl;
        return;
    }

    std::cout << "Test passed successfully!" << std::endl;
}

int main() {
    testStacks();
    return 0;
}
