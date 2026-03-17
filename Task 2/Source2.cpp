#include <iostream>
#include "Stack.h"
#include "Operations.h"
using namespace std;

int main() {
    Stack s;
    int n, value, position;

    cout << "How many elements to push: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
    }

    display(s);

    // Copy stack
    Stack copy = copyStack(s);
    cout << "Copied stack: ";
    display(copy);

    // Insert element at specific position
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter postion where to insert value: ";
    cin >> position;
    insertAt(s, position, value);
    cout << "Stack after inserting value: ";
    display(s);

    // Max and average
    maxAndAverage(s);

    return 0;
}