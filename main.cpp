#include <iostream>
#include "Stack.h"

int main() {
    // Create an empty stack
    Stack stack;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Display the size of the stack
    std::cout << "Stack size: " << stack.size() << std::endl;

    // Access the top element of the stack
    std::cout << "Top element: " << stack.top() << std::endl;

    // Pop the top element
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    // Check if the stack is empty
    if (stack.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    // Pop remaining elements
    stack.pop();
    stack.pop();

    // Check if the stack is empty again
    if (stack.empty()) {
        std::cout << "The stack is empty after popping all elements." << std::endl;
    } else {
        std::cout << "The stack is not empty after popping all elements." << std::endl;
    }

    return 0;
}

