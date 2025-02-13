#include "Stacks.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Stacks
/* Implementation file holds the member function definitions that are in the class */

// Function: pushes elements into the stack
void Stack::push(int x) {
	if (isFull()) {
		cout << "This is Stack Overflow\n";
	}
	else {
		top++;
		num[top] = x;
	}
}

// Function: checks to see if the stack is empty
int Stack::isEmpty() {
	if (top == -1) {
		return 1;  // Returning true
	}
	else {
		return 0;  // Returning false
	}
}

// Function: prints and removes the top element of the stack
void Stack::pop() {
	int temp;
	if (isEmpty()) {
		cout << "The stack is empty. Unable to pop value.\n";
	}
	temp = num[top];
	top--;
	cout << temp;
}

// Function: checks to see if the stack is full
int Stack::isFull() {
	if (top == (size - 1)) {
		return 1;   // Returning true
	}
	else {
		return 0;   // Returning false
	}
}

// Function: prints all values within the stack
void Stack::showStack() {
	if (top >= 0) {
		for (int i = top; i >= 0; i--) {
			cout << num[i] << endl;
		}
	}
	else {
		cout << "Stack is empty.\n";
	}
}