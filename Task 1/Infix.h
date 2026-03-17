#ifndef INFIX_H
#define INFIX_H

#include <iostream>
#include "Stack.h"
using namespace std;

// precedence
int precedence(char op)
{
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// infix to postfix
string infixToPostfix(string infix)
{
    Stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if (ch >= '0' && ch <= '9')
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (!s.isEmpty() && s.top() != '(')
            {
                postfix += s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.isEmpty() && precedence(s.top()) >= precedence(ch))
            {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.isEmpty())
    {
        postfix += s.pop();
    }

    return postfix;
}

// evaluate postfix
int evaluatePostfix(string postfix)
{
    Stack<int> s;

    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];

        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else
        {
            int b = s.pop();
            int a = s.pop();

            if (ch == '+') s.push(a + b);
            else if (ch == '-') s.push(a - b);
            else if (ch == '*') s.push(a * b);
            else if (ch == '/') s.push(a / b);
        }
    }

    return s.pop();
}

#endif