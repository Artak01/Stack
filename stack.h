#include <vector>
#ifndef STACK_H
#define STACK_H


class Stack{
    public:
        Stack();
        explicit Stack( const std::vector<int>& cont = std::vector<int>());
        int& top();
        void pop();
        void push(int);
        size_t size();
        bool empty();
    private:
        std::vector<int> m_stack;
};
#endif
