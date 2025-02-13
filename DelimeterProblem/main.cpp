#include "Delimeter.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

/*
Notes: 
Lines 35, 45, 55 might not be necessary
Check the delimeterStatus to see if "return" or "break" should be used
Check to see if line 76 is still bugging out and not reading correctly
*/ 

int main() {

	DelimeterStack stringChecker; // Creating an instance for DelimeterStack class with stringChecker

	// The strings that will be tested
	string String1 = { "{Test Braces String}" };
	string String2 = ( "(Test Parentheses String" );
	string String3 = [ "[Test Brackets String]" ];

	string String4 = ( "{Test String - improper delimitation)" );
	string String5 = ( "[Test String - improper delimitation}" );
	string String6 = ( "(Test String - improper delimitation)" );


	// Testing of the first string - should return "properly delimeted"
	stringChecker(String1.size());     // Initializes the size of stringChecker to match the string
	stringChecker.push(String1);       // Pushes the string into the stack as sperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the string
	stringChecker.pop(String1.size()); // Removes all elements of the string from the stack

	cout << "\n";
	cout << "\n";

	// Testing of the second string - should return "properly delimeted
	stringChecker(String2.size());     // Re-initializes the size of stringChecker for the new string
	stringChecker.push(String2);       // Pushes the new string into the stack as seperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the new string
	stringChecker.pop(String2.size()); // Removes all elements of the string from the stack

	cout << "\n";
	cout << "\n";

	// Testing of the third string - should return "properly delimeted"
	stringChecker(String3.size());     // Re-initializes the size of stringChecker for the new string
	stringChecker.push(String3);       // Pushes the new string into the stack as seperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the new string 
	stringChecker.pop(String3.size()); // Removes all elements of the string from the stack



	cout << "\n";
	cout << "\n";



	// Testing of the fourth string - should return as "improperly delimeted"
	stringChecker(String4.size());     // Re-initializes the size of stringChecker for the new string
	stringChecker.push(String4);       // Pushes the new string into the stack as seperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the new string
	stringChecker.pop(String4.size())  // Removes all elements of the string from the stack

	// Testing of the fifth string - should return as "improperly delimeted"
	stringChecker(String5.size());     // Re-initializes the size of stringChecker for the new string
	stringChecker.push(String5);       // Pushes the new string into the stack as seperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the new string
	stringChecker.pop(String5.size()); // Removes all elements of the string from the stack

	// Testing of the sixth string - should return as "improperly delimeted"
	stringChecker(String6.size());     // Re-initializes the size of stringChecker for the new string
	stringChecker.push(String6);       // Pushes the string into the stack as seperate elements
	cout << "Delimeter Status: ";
	stringChecker.delimeterStatus();   // Prints the delimeterStatus of the new string
	stringChecker.pop(String6.size);   // Removes all elements of teh string from the stack
}