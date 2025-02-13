#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Doubly_LinkedList_H
#define Doubly_LinkedList_H
using namespace std;

// Specification file for DoublyLinked class
/* Specification file holds the actual class */

class DoublyLinked {
private:
    struct ListNode {
        double value;
        struct ListNode* next;
        struct ListNode* prev;
    };
    ListNode* head;
    ListNode* tail;

public:
    // Constructor
    DoublyLinked() { 
        head = nullptr;
        tail = nullptr;
    }

    // Doubly Linked-List operations
    void insertNode(double, double);
    void deleteNode(double);
    void searchItem(double);
    void displayList();

    // Extra operations
    void reverseList();
    bool isEmpty();
};
#endif