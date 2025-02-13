#include "PezStack.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for PezStack class

// Function is used to push in a new element to the stack, in this case it will be taking in numbers 1 - 3 in representation of the colors, because this is a stack with an INTEGER base array
void PezStack::push(int numberColor) {
	if (isFull()) {
		cout << "Overflow has occurred\n";
	}
	else {
		top++;
		colors[top] = numberColor;
	}
}


// Determines if the stack is empty or not
int PezStack::isEmpty() {
	if (top == -1) {
		return 1;  // Returning true
	}
	else {
		return 0;  // Returning false
	}
}


// Function is used to simulate the little sister eating them
void PezStack::pop() {
	int temp;
	if (isEmpty()) {
		cout << "The stack is empty. Unable to pop value.\n";
	}

	for (int i = 0; i < size; i++) {
		if (colors[i] == 2) {
			colors[i] = 0;
		}
	}
}


// Determines if the stack is full or not
int PezStack::isFull() {
	if (top == (size - 1)) {
		return 1;   // Returning true if its full
	}
	else {
		return 0;   // Returning false if not full
	}
}


// Function is used to display all elements within the stack
/*
1 - Yellow
2 - Pink
3 - Purple
*/
void PezStack::showStack() {
	if (top >= 0) {
		for (int i = top; i >= 0; i--) {
			if (colors[i] == 1) {
				cout << "Yellow Pez\n";
			}
			else if (colors[i] == 2) {
				cout << "Pink Pez\n";
			}
			else if (colors[i] == 3) {
				cout << "Purple Pez\n";
			}
			else if (colors[i] == 0) {
				cout << "* White Vitamin Pill *\n";
			}
		}
	}
	else {
		cout << "Stack is empty.\n";
	}
}