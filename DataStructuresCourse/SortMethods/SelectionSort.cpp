// SelectionSort-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void selectionSort(int arr[], int arrSize) {
    int min;

    for (int i = 0; i < arrSize - 1; i++) {
        min = i;

        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
    }
}