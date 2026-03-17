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

	void push(int x) {
		if (!isFull())
			arr[++top] = x;
		else
			cout << "Stack Overflow\n";
	}

	int pop() {
		if (!isEmpty())
			return arr[top--];
		else {
			cout << "Stack Underflow\n";
			return -1; 
		}
	}

	int peek(int pos) {
		if (pos >= 0 && pos <= top)
			return arr[pos];
		else
			return -1; 
	}

	int size() { return top + 1; }
};

#endif