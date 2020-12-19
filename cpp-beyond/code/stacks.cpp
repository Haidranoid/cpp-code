/*
#include <iostream>
#include <cctype>
#include <algorithm>
#include <stack>
#include <vector>
#include <list>

using namespace std;

// this function displays a stack of
// by repeatedly topping and popping the stack
// Note theat the stack is passed in value so we
// don't affect the passed in stack

template<typename T>
void display(stack<T> stack) {
    std::cout << "[ ";
    while (!stack.empty()) {
        T element = stack.top();
        stack.pop();
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::stack<int> stack; // defaults deque
    std::stack<int, vector<int>> stack1;
    std::stack<int, list<int>> stack2;
    std::stack<int, deque<int>> stack3;

    for (int i: {1, 2, 3, 4, 5})
        stack.push(i);
    display(stack);

    stack.push(100);
    display(stack);

    stack.pop();
    stack.pop();
    display(stack);

    while (!stack.empty())
        stack.pop();
    display(stack);

    cout << "Size: " << stack.size() << endl;

    stack.push(10);
    display(stack);

    stack.top() = 100;
    display(stack);

    return 0;
}*/
