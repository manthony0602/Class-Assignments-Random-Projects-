// Stacks-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Stacks.h"
#include <stack>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// Main function to test stacks and its operations

int main() {  

    const int SIZE = 11;
    Stack stk(SIZE);

    for (int i = 0; i < SIZE; i++) {
        stk.push(i) }

    stk.showStack();
    cout << "\n";

    if (stk.isEmpty() == 1) {
        cout << "The Stack is empty.\n"; }
    else {
        cout << "The Stack is NOT empty.\n"; }
    cout << "\n";

    if (stk.isFull() == 1) {
        cout << "The Stack is full.\n"; }
    else {
        cout << "The Stack is NOT full.\n"; }
    cout << "\n";

    cout << "The popped value is: ";
    stk.pop();
    cout << "\n";
    cout << "\n";

    cout << "Stack values after pop operation:\n";
    stk.showStack();
};