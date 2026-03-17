#ifndef CheckExpression_H
#define CheckExpression_H
#include "Stack.h"
#include <iostream>
using namespace std;

class CheckExpression {
    Stack s;
    int openCount;
    int closeCount;


public:
    CheckExpression() {
        openCount = 0;
        closeCount = 0;
    }

    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') ||
            (open == '{' && close == '}') ||
            (open == '[' && close == ']');
    }

    bool checkExpression(string expr) {
        bool valid = true;
        for (int i = 0; i < expr.length(); i++) {
            char ch = expr[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
                openCount++;
            }
            else if (ch == ')' || ch == '}' || ch == ']') {
                closeCount++;
                if (s.isEmpty() || !isMatchingPair(s.pop(), ch)) {
                    valid = false;
                    break;
                }
            }
        }

        if (!s.isEmpty()) valid = false;
        return valid;
    }

    int getOpenCount() { 
        return openCount; 
    }

    int getCloseCount() { 
        return closeCount;
    }

};

#endif