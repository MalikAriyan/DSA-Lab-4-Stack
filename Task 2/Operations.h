#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "Stack.h"
#include <iostream>
using namespace std;

// Display all elements
void display(Stack s) {
    cout << "Stack elements: ";
    for (int i = 0; i < s.size(); i++)
        cout << s.peek(i) << " ";
    cout << endl;
}

// Copy elements to another stack
Stack copyStack(Stack s) {
    Stack newStack;
    for (int i = 0; i < s.size(); i++)
        newStack.push(s.peek(i));
    return newStack;
}

// Insert element at specific position 
void insertAt(Stack& s, int pos, int value) {
    if (pos < 0 || pos > s.size()) {
        cout << "Invalid position\n";
        return;
    }

    Stack temp;
    int n = s.size();
    // pop elements above position
    for (int i = n - 1; i >= pos; i--)
        temp.push(s.pop());

    s.push(value); // insert new element

    
    while (!temp.isEmpty())
        s.push(temp.pop());
}

// Calculate max and average
void maxAndAverage(Stack s) {
    if (s.isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }

    int maxVal = s.peek(0);
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        int val = s.peek(i);
        if (val > maxVal)
            maxVal = val;
        sum += val;
    }

    double avg = (double)sum / s.size();
    cout << "Maximum: " << maxVal << "\nAverage: " << avg << endl;
}

#endif