#include "LinkedListQueue.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Linked-List based Queue
/* Implementation file holds the member function definitions that are in the class */

listQueue::listQueue() {
	front = rear = NULL;
};


bool listQueue::isEmpty() {
	if (front && rear == NULL) {
		return true;
	}
	else { return false; }
};


bool listQueue::isFull() {
	Node* temp;
	temp = front;

	if (temp == rear) {
		cout << "The Queue is NOT full.\n";
	}

	while (temp != NULL) {
		if (temp->data == 0) {
			return false;
		}
		temp = temp->next;
	}

	return true;
};


void listQueue::enQueue(double item) {
	Node* newNode;
	newNode = new Node;
	newNode->data = item;
	newNode->next = NULL;

	if (front == NULL) {
		front = rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
}


void listQueue::deQueue() {
	Node* temp;
	if (front == NULL) {
		cout << "Queue is Empty";
	}
	else {
		temp = front;
		cout << temp->data;
		front = front->next;
		delete temp;
	}
}


void listQueue::makeEmpty() {
	Node* temp;
	temp = front;

	if (temp == NULL) {
		cout << "The queue is already empty.\n";
	}
	else {
		while (temp != NULL) {
			delete temp;
			temp = temp->next;
		}
	}
}


void listQueue::display() {
	Node* temp;
	temp = front;
	while (temp != NULL) {
		cout << temp->data << ", ";
		temp = temp->next;
	}
	if (queueCount() == 0) {
		cout << "\n";
		cout << "The Queue is empty. Nothing to display.\n";
	}
	cout << "\n";
}


int listQueue::queueCount() {
	Node* temp;
	temp = front;
	int count = 0;

	while (temp != NULL) {
		count++;
		temp = temp->next;
	}

	return (count);
}