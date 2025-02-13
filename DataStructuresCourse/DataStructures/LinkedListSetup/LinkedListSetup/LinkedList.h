#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Number_List_H
#define Number_List_H
using namespace std;

// Specification file for NumberList class
/* Specification file holds the actual class */

class NumberList {
private:
    struct ListNode {
        double value;          // The value in this node
        struct ListNode* next; // To point to the next node
    };
    ListNode* head;     // List head pointer
    ListNode* current;  // List current node pointer

public:
    // Constructor
    NumberList() { head = nullptr; }
    // Destructor
    ~NumberList();
    // Linked List operations
    void appendNode(double);
    void insertNode(double);
    void deleteNode(double);
    void displayList();
};
#endif