#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Stacks_H
#define Stacks_H
using namespace std;

// Specification file for Stacks class
/* Specification file holds the actual class */

class Stack {
private:
    int top;
    int size;
    int num[];

public:
    // Constructor
    Stack(int x) {
        top = -1;
        size = x;
    }

    // Basic Stack Operations
    void push(int);
    void pop();
    int isEmpty();
    int isFull();
    void showStack();
};
#endif