// LinkedList-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main() {

	// Define a NumberList object
	NumberList list;

	// Append some values - also builds the list with values
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);

	// Insert a node in the middle of the list
	list.insertNode(10.5);

	// Display the list
	cout << "Here are the intial values of this list: ";
	list.displayList();
	cout << "\n";

	// Delete the middle node
	cout << "Now deleting the second node.\n";
	list.deleteNode(7.9);
	cout << "\n";

	// Display the list again
	cout << "Hear are the values left in this list: ";
	list.displayList();
	cout << "\n";

	// Delete the last node
	cout << "Now deleting the last node.\n";
	list.deleteNode(12.6);
	cout << "\n";

	// Display the final list
	cout << "Here are the final nodes of the list: ";
	list.displayList();
	cout << "\n";

	return 0;
}