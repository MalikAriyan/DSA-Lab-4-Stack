#include <iostream>
using namespace std;
#include "Stack.h"
#include "Operation.h"

int main() {
    Stack s;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        s.push(val);
    }

    cout << "\nOriginal Stack: ";
    s.display();

    reverseStack(s);
    cout << "Reversed Stack: ";
    s.display();

    removeDuplicates(s);
    cout << "Stack after removing duplicates: ";
    s.display();

    return 0;
}