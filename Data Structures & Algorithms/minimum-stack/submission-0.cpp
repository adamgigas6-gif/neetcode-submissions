#include <stack>
#include <algorithm>

class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    MinStack() {
        // Constructor: default initialization handles the stacks
    }
    
    void push(int val) {
        mainStack.push(val);
        
        // If minStack is empty, the current val is the min.
        // Otherwise, push the minimum between val and the current minimum.
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(std::min(val, minStack.top()));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};