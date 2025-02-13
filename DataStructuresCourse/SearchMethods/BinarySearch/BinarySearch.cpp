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

int binarySearch(int arr[], int size, int value) {
	int first = 0,              // First array element
		last = size - 1,        // Last array of element
		middle,					// Mid point of search
		position = -1;          // Position of search value
	bool found = false;         // Setting flag

	while (!found && first <= last) {

		middle = (first + last) / 2;   // Calculate mid point
		if (arr[middle] == value) {    // If value is found at mid
			found = true;
			position = middle;
		}

		else if (arr[middle] > value) {   // If value is in lower half, the scope is rearranged and focuses on the first half of the array/list (the smaller side of the split)
			last = middle - 1;
		}
		else {
			first = middle + 1;          // If value is in upper half, the scope is rearranged and focuses on the second half of the array/list (the larger side of the split)
		}
	}

	return position;
}