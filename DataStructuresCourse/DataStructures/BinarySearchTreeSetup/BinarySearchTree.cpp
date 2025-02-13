// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "BinarySearchTree.h"
using namespace std;


// Implementation file for an Integer-Type Binary Search Tree
/* Implementation file holds the member function definitions that are in the class */

// Default Constructor Implementation
TreeType::TreeType() {
    root = NULL;
}

// Constructor Implementation
TreeType::TreeType(const TreeType& originalTree) {
    root = originalTree;
}

// Destructor Implementation
TreeType::~TreeType() {
    Destroy(root);
}


// Basic Operations for a binary search tree
void TreeType::MakeEmpty() {
    Destroy(root);
    root = NULL;
}

bool TreeType::IsEmpty() {
    return root == NULL;
}

bool TreeType::IsFull() {
    TreeNode* location;
    try {
        location = new TreeNode;
        delete location;
        return false;
    }
    catch (bad_alloc exception) {
        return true;
    }
}

int TreeType::GetItem(int item, bool& found) {
    Retrieve(root, item, found);
    return item;
}

void TreeType::Retrieve(TreeNode* tree, int item, bool& found) {
    if (tree == NULL) {
        found = false;
    }
    else if (item < tree->info) {
        Retrieve(tree->left, item, found);  // Searches the left subtree for the item
    }
    else if (item > tree->info) {
        Retrieve(tree->right, item, found); // Searches the right subtree for the item
    }
    else {
        item = tree->info; // Item is found
        found = true;
    }
}


int  TreeType::GetLength() {
    return CountNodes(root);
}

int TreeType::CountNodes(TreeNode* tree) {
    if (tree == NULL) {
        return 0;
    }
    else {
        return CountNodes(tree->left) + CountNodes(tree->right) + 1;
    }
}



void TreeType::PutItem(int item) {
    Insert(root, item);  // Call on recursive helper function
}
void TreeType::Insert(TreeNode*& tree, int item) {
    if (tree == NULL) {
        tree = new TreeNode;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if (item < tree->info) {
        Insert(tree->left, item);   // Insert in the left subtree
    }
    else {
        Insert(tree->right, item);  // Insert in the right subtree
    }
}



void TreeType::DeleteNode(TreeNode*& tree) {
    int data;
    TreeNode* tempPtr;

    tempPtr = 0;
    if (tree->left == NULL) {
        tree = tree->right;
        delete tempPtr;
    }
    else if (tree->right == NULL) {
        tree = tree->left;
        delete tempPtr;
    }
    else {
        GetPredecessor(tree->left, data);  // Call on recursive helper funcion
        tree->info = data;
        Delete(tree->left, data);          // Call on recursive helper function
    }
}
void TreeType::GetPredecessor(TreeNode* tree, int data) {
    while (tree->right != NULL) {
        tree = tree->right;
        data = tree->info;
    }
}
void TreeType::Delete(TreeNode*& tree, int item) {
    if (item < tree->info) {
        Delete(tree->left, item);   
    }
    else if (item > tree->info) {
        Delete(tree->right, item);  
    }
    else DeleteNode(tree);  // Call on recursive helper function
}



void TreeType::Print() {
    PrintTree(root);  // Call on recursive helper function
}
void TreeType::PrintTree(TreeNode* tree) {
    if (tree != NULL) {
        PrintTree(tree->left);
        cout << tree->info << " ";
        PrintTree(tree->right);
    }
}


void TreeType::Destroy(TreeNode*& tree) {
    if (tree != NULL) {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
    }
}