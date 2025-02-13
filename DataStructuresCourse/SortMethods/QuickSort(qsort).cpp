// QuickSort (qsort)-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int partition(int arr[], int low, int high, int pivot) {
    int i = low;
    int j = low;
    while (i <= high) {
        if (arr[i] > pivot) {
            i++;
        }
        else {
            swap(i, j);
            i++;
            j++;
        }
    }
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int pos = partition(arr, low, high, pivot);

        quickSort(arr, low, pos - 1);   // Recursion
        quickSort(arr, pos + 1, high);  // Recrusion
    }
};