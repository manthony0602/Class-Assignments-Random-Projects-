#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#ifndef Hash_Table_H
#define Hash_Table_H
using namespace std;


class HashMapTable {
	// size of the hash table
	int table_size;

	// Pointer to an array containing the keys
	list<int>* table;

public:
	// creating constructor of the above class containing all the methods
	HashMapTable(int key);

	// hash function to compute the index using table_size and key
	int hashFunction(int key) { return (key % table_size); }

	// inserting the key in the hash table
	void insertElement(int key);

	// deleting the key in the hash table
	void deleteElement(int key);

	// displaying the full hash table
	void displayHashTable();
};
#endif