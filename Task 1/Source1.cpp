#include <iostream>
#include "infix.h"
using namespace std;

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);

    cout << "Final result: " << result << endl;

    return 0;
}