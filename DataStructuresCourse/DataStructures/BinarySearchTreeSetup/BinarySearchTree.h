#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class TreeType {
private:
    struct TreeNode {
        int info;
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;

public:
    TreeType();  // Default Constructor
    TreeType(const TreeType& originalTree);  // Constructor
    ~TreeType(); // Deconstructor

    // Basic Operations for a binary search tree
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
  
    int GetItem(int item, bool& found); // Calls on the GetItem function recursively
    void Retrieve(TreeNode* tree, int item, bool& found); // Recursive helper function

    int GetLength(); // Calls on the CountNodes function recursively
    int CountNodes(TreeNode* tree); // Recursive helper function

    void PutItem(int item); // Calls on the Insert function recursively
    void Insert(TreeNode*& tree, int item); // Recursive helper function

    void DeleteNode(TreeNode*& tree);  // Calls on the Delete function recursively
    void GetPredecessor(TreeNode* tree, int data); // Recursive helper function
    void Delete(TreeNode*& tree, int item); // Recursive helper function

    void Print(); // Calls on the PrintTree function recursively
    void PrintTree(TreeNode* tree); // Recursive helper function

    void Destroy(TreeNode*& tree); // A member function used in the destructor - also a recursive helper function
};