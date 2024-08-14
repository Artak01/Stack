#include <iostream>
#include "stack.h"

Stack::Stack(){}

Stack::Stack(const std::vector<int>& cont): m_stack(cont) {}

int& Stack::top()
{
    return m_stack.back();
}

void Stack::pop()
{
    m_stack.pop_back();
}

void Stack::push(int val)
{
    m_stack.push_back(val);
}

size_t Stack::size()
{
    return m_stack.size();
}

bool Stack::empty()
{
    return m_stack.empty();
}



