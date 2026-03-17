#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int topIndex;

public:
    Stack()
    {
        topIndex = -1;
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }

    bool isFull()
    {
        return topIndex == 99;
    }

    void push(T value)
    {
        if (!isFull())
            arr[++topIndex] = value;
    }

    T pop()
    {
        if (!isEmpty())
            return arr[topIndex--];
        return T();
    }

    T top()
    {
        if (!isEmpty())
            return arr[topIndex];
        return T();
    }
};

#endif