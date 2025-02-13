#include "LinkedList.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Linked List
/* Implementation file hols the member function definitions that are in the class */


// This method is used to add a node to the end of a list
void NumberList::appendNode(double num) {
    ListNode* newNode; // To point to the new node
    ListNode* nodePtr; // To move through the list

    // Allocates a new node and stores a number
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    // If there are no nodes in the list, make newNode the first node
    if (!head) {
        head = newNode;
    }

    // Otherwise insert the new node at the end
    else {
        // Initialize nodePtr to the head of the list.
        nodePtr = head;

        // Finds the last node in the list.
        while (nodePtr->next) {
            nodePtr = nodePtr->next;
        }

        // Insert newNode as the last node.
        nodePtr->next = newNode;
    }
};

// This method is used to insert a node into a linked list
void NumberList::insertNode(double num) {
    ListNode* newNode;
    ListNode* nodePtr;
    ListNode* previousNode = nullptr;

    // Allocates a new node and stores a number
    newNode = new ListNode;
    newNode->value = num;

    // If there are no nodes in the list, make newNode the first node
    if (!head) {
        head = newNode;
        newNode->next = nullptr;
    }

    // Otherwise, insert the node in the correct spot
    else {
        // Position the nodePtr at the head of the list
        nodePtr = head;

        // Initialize previousNode to nullptr
        previousNode = nullptr;

        // Skip all nodes whose value is less than the newNodes num
        while (nodePtr != nullptr && nodePtr->value < num) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list, insert it before all other
        // nodes
        if (previousNode == nullptr) {
            head = newNode;
            newNode->next = nodePtr;
        }

        // Then insert the newNode in the correct position
        else {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
};

// This method is used to delete a specife node in a list
void NumberList::deleteNode(double num) {
    ListNode* nodePtr;
    ListNode* previousNode;

    // If the list is empty, do nothing
    if (!head) {
        return;
    }

    // Determing if the first node is the one to delete
    if (head->value == num) {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }

    else {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value number is not equal to num
        while (nodePtr != nullptr && nodePtr->value != num) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list, link the previous node to the
        // node after nodePtr, then delete nodePtr
        if (nodePtr) {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
};

location->previous->next = location->next // david to miriam
location->next->previous = location->previous; // miriam to david
delete location;

// This method (which is the destructor) is used to destroy/delete an entire list
NumberList::~NumberList() {
    ListNode* nodePtr;  // To traverse the list
    ListNode* nextNode; // To point to the next node

    // Position nodePtr at the head of the list
    nodePtr = head;

    // while nodePtr is not at the end of the list...
    while (nodePtr != nullptr) {
        // Save a pointer to the next node
        nextNode = nodePtr->next;

        // Delete the current node
        delete nodePtr;

        // Position nodePtr at the next node
        nodePtr = nextNode;
    }
};

// This method is used to display all the contents within the list, regardless of it's size
void NumberList::displayList() {
    ListNode* current = head;
    while (current) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}