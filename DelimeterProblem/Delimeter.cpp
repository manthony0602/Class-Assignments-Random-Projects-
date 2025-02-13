#include "Delimeter.h"
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
void DelimeterStack::push(string x) {
	if (isFull()) {
		cout << "This is Stack Overflow\n";
	}
	else {
		top++;
		num[top] = x;
	}
}

// Function: checks to see if the stack is empty
int DelimeterStack::isEmpty() {
	if (top == -1) {
		return 1;  // Returning true
	}
	else {
		return 0;  // Returning false
	}
}

// Function: prints and removes the top element of the stack
void DelimeterStack::pop() {
	char temp;
	if (isEmpty()) {
		cout << "The stack is empty. Unable to pop value.\n";
	}
	temp = num[top];
	top--;
	cout << temp;
}

// Function: checks to see if the stack is full
int DelimeterStack::isFull() {
	if (top == (size - 1)) {
		return 1;   // Returning true
	}
	else {
		return 0;   // Returning false
	}
}

// Function: prints all values within the stack
void DelimeterStack::showStack() {
	if (top >= 0) {
		for (int i = top; i >= 0; i--) {
			cout << num[i] << endl;
		}
	}
	else {
		cout << "Stack is empty.\n";
	}
}


// Extended function for Delimeter problem
void DelimeterStack::delimeterStatus() {
	int delimiterCheck = 0;

	// A series of if/else if statements will print out the delimeterStatus of the string
	if (bracesCheck() == true) {
		cout << "This string is properly delimeted with braces {}.\n";
		return;  // or break;
	}
	else if (parenthesesCheck() == true) {
		cout << "This string is properly delimeted with parantheses ().\n";
		return;  // or break;
	}
	else if (bracketsCheck() == true) {
		cout << "This string is properly delimeted with brackets [].\n";
		return;  // or break;
	}
	else {
		cout << "This string is improperly delimeted.\n";
	}
}

// Helper function implementations for the delimeterStatus function
bool DelimeterStack::bracesCheck() {
	int check = 0;

	// This loops checks to see if the first and last elements of the string match
	// If they match, check will increase and the result of check will return true
	// or false for the function
	for (int i = top; i >= 0; i++) {
		if (chars[top] == '}') {
			check++;
		}
		if (chars[0] == '{') {
			check++;
		}
	}

	if (check == 2) {
		return true;
	}
	else {
		return false;
	}
}

// Helper function implementations for the delimeterStatus function
bool DelimeterStack::parenthesesCheck() {
	int check = 0;

	// This loops checks to see if the first and last elements of the string match
	// If they match, check will increase and the result of check will return true
	// or false for the function
	for (int i = top; i >= 0; i--) {
		if (chars[top] == ')') {
			check++;
		}
		if (chars[0] == '(') {
			check++;
		}
	}

	if (check == 2) {
		return true;
	}
	else {
		return false;
	}
}

// Helper function implementations for the delimeterStatus function
bool DelimeterStack::bracketsCheck() {
	int check = 0;

	// This loops checks to see if the first and last elements of the string match
	// If they match, check will increase and the result of check will return true
	// or false for the function
	for (int i = top; i >= 0; i--) {
		if (chars[top] == ']') {
			check++;
		}
		if (chars[0] == '[') {
			check++;
		}
	}

	if (check == 2) {
		return true;
	}
	else {
		return false;
	}
}