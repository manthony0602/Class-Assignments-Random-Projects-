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

// Problem analysis
/* The program should take in a string and make sure that it has
   been delimted properly. So if its a braces-delimeted string, it should 
   start and end with braces "{}" - so on and so forth with the 
   other delimiters (braces{}, parentheses(), brackets[]) */

// Specification file for Stacks class
/* Specification file holds the actual class */

class DelimeterStack {
private:
    int top;
    int size;
    string chars[];

public:
    // Constructor
    DelimeterStack(int x) {
        top = -1;
        size = x;
    }

    // Basic Stack Operations
    void push(string);
    void pop();
    int isEmpty();
    int isFull();
    void showStack();

    // Extra function to determine if its properly or 
    //improperly delimited
    void delimeterStatus();

    // Helper functions for the delimeterStatus function
    bool bracesCheck();
    bool parenthesesCheck();
    bool bracketsCheck();
};
#endif