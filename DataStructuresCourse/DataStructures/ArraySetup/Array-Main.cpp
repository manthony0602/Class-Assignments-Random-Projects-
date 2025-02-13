// Array-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int numberArray[5]; // This initializes an array with 5 indicies (0-5), which will hold values of the int data type

	for (int i = 0; i < 5; i++) {
		numberArray[i] = i; // This will input values 0-5 into the numberArray
	};
	for (int i = 0; i < 5; i++) {
		cout << numberArray[i] << endl; // This will output all values in numberArray
	};


	string nameArray[5]; // This initializes an array with 5 indicies (0-5), which will hold values of the string data type

	for (int i = 0; i < 5; i++) {
		cout << "Enter a name for the array: "
		cin >> nameArray[i]; // This will intake user-inputed names and sequentially store them in the array
	};
	for (int i = 0; i < 5; i++) {
		cout << nameArray[i] << endl; // This will output all the names in the array, in sequential order
	};

	// More arrays can be done with other data types - char, double, float, etc.

	return 0;
}