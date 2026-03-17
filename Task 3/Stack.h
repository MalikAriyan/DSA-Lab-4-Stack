#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Stack {
    char arr[100];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1; 
    }
    bool isFull() { 
        return top == 99; 
    }

    void push(char ch) {
        if (!isFull())
            arr[++top] = ch;
    }

    char pop() {
        if (!isEmpty())
            return arr[top--];
        return '\0';
    }

    char peek() {
        if (!isEmpty())
            return arr[top];
        return '\0';
    }
};

#endif