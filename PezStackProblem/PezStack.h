#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Pez_Stacks_H
#define Pez_Stacks_H
using namespace std;

// This code is used to simulate a person eating PEZ candies from a PEZ toy
// through the implementation of a Stack (Data Structure) 


// Specification file for PezStack class

class PezStack {
private:
    int top;
    int size;
    int colors[]; // Array-based stack

public:
    // Constructor for class - x variable will be the size of the Stack
    PezStack(int x) {
        top = -1;
        size = x;
    }

    // Pez Stack Operations
    void push(int);
    void pop();
    int isEmpty();
    int isFull();
    void showStack();
};
#endif