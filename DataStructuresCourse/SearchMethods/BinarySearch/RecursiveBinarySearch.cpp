// RecursiveBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// This is a file with a recursive version of a Binary Search function

// Initializing recurisve binary search function
int recursiveBinarySearch(int arr[], int first, int last, int value);

// Extra function to display the array
void displayArray(int arr[], int size);


// Main Function
int main() {
    const int SIZE = 10;
    int testArray[SIZE] = { 1, 5, 12, 23, 27, 34, 54, 65, 68, 100 };
    int searchVal = 65;

    int first = 0,
        last = SIZE - 1,
        position = recursiveBinarySearch(testArray, first, last, searchVal);


    cout << "* RECURSIVE BINARY SEARCH FUNCTION *\n";
    cout << "\n";
    cout << "The search value is: " << searchVal << endl;
    cout << "The array is: ";
    displayArray(testArray, SIZE);
    cout << "\n";
    cout << "\n";


    if (position != -1) {
        cout << "The searched value is in position: " << position;
    }
    else {
        cout << "The searched value is not in the array.\n";
    }
}


// Implementing the recursive binary search function
int recursiveBinarySearch(int arr[], int first, int last, int value) {

    // Defining the middle value for the binary search algorithm
    int middle = (first + last) / 2;

    // Base Case: The array length has been reached
    if (first > last) {
        return -1;
    }

    // Base Case: If fte searched value is found, the position is returned
    else if (value == arr[middle]) {
        return middle;
    }

    // General Case: Will rearrange the search scope to look at all elements greater than the middle value
    // New Scope: (Middle -> Last)
    else if (value > arr[middle]) {
        middle = middle + 1;
        return recursiveBinarySearch(arr, middle, last, value);
    }

    // General Case: Will rearrange the search scope to look at all elements less than the middle value
    // New Scope is: (First -> Middle)
    else if (value < arr[middle]) {
        middle = middle - 1;
        return recursiveBinarySearch(arr, first, middle, value);
    }
};


// Implementing extra function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}