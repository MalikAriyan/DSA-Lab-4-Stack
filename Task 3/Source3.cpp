#include <iostream>
#include "CheckExpression.h"
using namespace std;

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    CheckExpression checker;
    bool valid = checker.checkExpression(expr);

    cout << "Expression is " << (valid ? "Valid" : "Invalid") << endl;
    cout << "Number of opening symbols: " << checker.getOpenCount() << endl;
    cout << "Number of closing symbols: " << checker.getCloseCount() << endl;

    return 0;
}