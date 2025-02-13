// RecursiveLinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Initializing recurisve binary search function
int recursiveLinearSearch(int arr[], int size, int value);

// Extra function to display the array
void displayArray(int arr[], int size);


// Main Function
int main() {
	const int SIZE = 6;
	int testArray[SIZE] = { 17, 15, 11, 8, 13, 19 };
	int searchVal = 11;
	int position = recursiveLinearSearch(testArray, SIZE, searchVal);

	cout << "* RECURSIVE LINEAR SEARCH FUNCTION *\n";
	cout << "\n";
	cout << "The array is: ";
	displayArray(testArray, SIZE);
	cout << "\n";
	cout << "\n";


	if (position != -1) {
		cout << "The searched value is in index: " << position;
	}
	else {
		cout << "The searched value is not in the array.\n";
	}

}


// Implementing the recursive linear search function
int recursiveLinearSearch(int arr[], int size, int value) {

	// Used to decrement each time the algorithm is ran
	size--;
	
	// Base Case: The array length has been reached
	if (size < 0) {
		return -1;
	}

	// Base Case: If the element is found, it's position will be returned
	else if (arr[size] == value) {
		return size;
	}

	// The recursive/general case
	return recursiveLinearSearch(arr, size, value);
}


// Implementing extra function to display the array 
void displayArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}