#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[100]; 

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int val) {
        if (!isFull()) {
            arr[++top] = val;
        }
        else {
            cout << "Stack Overflow\n";
        }
    }

    int pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
        else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        else {
            return -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    int size() {
        return top + 1;
    }
};

#endif