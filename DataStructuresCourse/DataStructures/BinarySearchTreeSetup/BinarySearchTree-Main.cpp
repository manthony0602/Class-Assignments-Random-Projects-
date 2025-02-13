// BinarySearchTree-Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "BinarySearchTree.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// This file holds that main function that uses the binary search tree

// NOT FINISHED

int main() {
    BST Tree(0);
    BST* root = NULL;

    int t;
    cin >> t; // Number of nodes to be inserted

    while (t--) {
        int data;
        cin >> data;
        root = Tree.insertNode(root, data);
    }

    Tree.inOrder(root);

    int delete_data;
    cin >> delete_data;
    Node* deleteelement = Tree.deleteNode(root, delete_data);

}