#include "HashTable.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// Implementation file for Hash Table
/* Implementation file hols the member function definitions that are in the class */


// creating the hash table with the given table size
HashMapTable::HashMapTable(int ts) {
    table_size = ts;
    table = new list<int>[table_size];
}

// insert function to push the keys in hash table
void HashMapTable::insertElement(int key) {
    int index = hashFunction(key);
    table[index].push_back(key);
}

// delete function to delete the element from the hash table
void HashMapTable::deleteElement(int key) {
    int index = hashFunction(key);
    // finding the key at the computed index
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++) {
        if (*i == key)
            break;
    }
    // removing the key from hash table if found
    if (i != table[index].end())
        table[index].erase(i);
}

// display function to showcase the whole hash table
void HashMapTable::displayHashTable() {
    for (int i = 0; i < table_size; i++) {
        cout << i;
        // traversing at the recent/ current index
        for (auto j : table[i])
            cout << " ==> " << j;
        cout << endl;
    }
}