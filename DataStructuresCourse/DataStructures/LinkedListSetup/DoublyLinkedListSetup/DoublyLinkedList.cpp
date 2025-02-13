#include "DoubleLinkedList.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for a Doubly Linked-List
/* Implementation file hols the member function definitions that are in the class */


void DoublyLinked::insertNode(double oldItem, double newValue) {
	ListNode* newNode;
	ListNode* temp;

	newNode = new ListNode;
	temp = head;

	if (head == nullptr) {
		head = newNode;
		newItem->prev = NULL;
		newItem->value = newValue;
		newItem->next = NULL;
		tail = newNode;
	}

	if (head == tail) {

		if (head->value != oldItem) {
			cout << "Could not insert\n";
		}

		newNode->value = newValue;
		head->next = newNode;
		newNode->next = NULL;
		head->prev = NULL;
		newNode->prev = head;
		tail = newNode;
		return;
	}

	if (tail->value == newValue) {
		newItem->next = NULL;
		newItem->prev = tail;
		tail->next = newNode;
		tail = newNode;
		return;
	}

	while (temp->value != NULL) {

		temp = temp->next;
		if (temp == NULL) {
			cout << "Could not insert\n";
			cout << "Old item was not found.\n";
			return;
		}
	}

	newNode->next = temp->next;
	newNode->prev = temp;
	newNode->value = newValue;
	temp->next->prev = newNode;
	temp->next = newNode;
}


void DoublyLinked::deleteNode(double value) {
	ListNode* temp;
	temp = head;

	if (head == tail) {

		if (head->value != value) {
			cout << "Could not delete.\n"l
				return;
		}

		head = NULL;
		tail = NULL;
		delete temp;
		return;
	}

	if (head->value == value) {
		head = head->next;
		head->prev = NULL;
		delete temp;
		return;
	}
	else if (tail->value == element) {
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		return;
	}

	while (temp->value != element) {
		temp = temp->next;
		if (temp == NULL) {
			cout << "Element not found.\n";
			return;
		}
	}

	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	delete temp;
}


void DoublyLinked::searchItem(double value) {
	ListNode* temp;
	int listPosition = 1;
	temp = head;

	while (temp != NULL) {
		if (temp->value == value) {
			cout << "List Value(" << temp->value << ") is located in position " << listPosition << " of the list.\n";
			break;
		}
		temp = temp->next;
		listPosition++;
	}
}


void DoublyLinked::displayList() {
	ListNode* temp;
	temp = head;

	while (temp != NULL) {
		cout << temp->value << " -> ";
		temp = temp->next;
	}
}


void DoublyLinked::reverseList() {
	ListNode* previous = NULL;
	ListNode* current = head;
	ListNode* nxt;

	while (current != NULL) {
		nxt = current->next;
		current->next = previous;
		previous = current;
		current = nxt;
	}
	head = previous;
}

bool DoublyLinked::isEmpty() {
	if (head && tail == nullptr) { return true; }
	else { return false; }
}