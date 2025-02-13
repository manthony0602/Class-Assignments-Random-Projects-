// BubbleSort-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b; 
    b = temp;
}

void bubblesort(int *arr[], int arrSize) {        // This program will sort the array in order of smallest to largest
    int temp;

    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; j++) 
        {
            if (arr[j] < arr[i]) {              // This if statement is what swaps the two values if they're out of order
                swap(arr[j], arr[i]);
            }
        }
    }

    cout << "Sorted Element List: "; 
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ", ";
    }
}