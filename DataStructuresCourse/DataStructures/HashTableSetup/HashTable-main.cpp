// HashMap-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "HashTable.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;


// This main is based off of the maps class in the .cpp and .h files


// This main function only works because of the "#include <map>" header file, it's not based off of an implemented hashTable class
int main() {

	map<int, string, int> Players; // Initializes a HashMap named "Players", which is holding an integer and string

	Players.insert(pair<int, string>(2, "Lin Dan"));
	Players.insert(pair<int, string>(1, "Chen Long"));

	cout << "Number of Players " << Players.size() << endl;
	for (map<int, string>::iterator it = Players.begin(); it != Players.end(); ++it) {
		cout << (*it).first << ": " << (*it).second << endl;
	}
	return 0;
}


// Main function
int main() {
	// array of all the keys to be inserted in hash table
	int arr[] = { 20, 34, 56, 54, 76, 87 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// table_size of hash table as 6
	HashMapTable ht(6);
	for (int i = 0; i < n; i++)
		ht.insertElement(arr[i]);
	// deleting element 34 from the hash table
	ht.deleteElement(34);
	// displaying the final data of hash table
	ht.displayHashTable();
	return 0;
}