// LinearSearch-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int linearSearch(int arr[], int size, int value) {
	int index = 0;        // Used as a subscript to search the array
	int position = -1;    // To record the position of the search value
	bool found = false;   // Flag to indicate if value was found

	while (index < size && !found) {

		if (arr[index] == value) {   // If the value is found
			found = true;            // Set the flag
			position = index;        // Record the value's subscript
		}
		index++;                     // Increment to the next element
	}

	return position;   // Will return the position of the searched value or -1 if not found
}