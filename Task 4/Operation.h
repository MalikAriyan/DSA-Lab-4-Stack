#ifndef OPERATION_H
#define OPERATION_H

#include "Stack.h"

// Reverse 
void reverseStack(Stack& s) {
    Stack temp;
    while (!s.isEmpty()) {
        temp.push(s.pop());
    }
    s = temp; // reversed stack back
}

// Remove duplicates 
void removeDuplicates(Stack& s) {
    Stack temp;
    int tempArr[100];
    int tempSize = 0;

    while (!s.isEmpty()) {
        int val = s.pop();
        bool found = false;
        for (int i = 0; i < tempSize; i++) {
            if (tempArr[i] == val) {
                found = true;
                break;
            }
        }
        if (!found) {
            tempArr[tempSize++] = val;
        }
    }

    // Push back in original order
    for (int i = tempSize - 1; i >= 0; i--) {
        s.push(tempArr[i]);
    }
}

#endif