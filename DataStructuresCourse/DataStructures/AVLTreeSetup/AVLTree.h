#include <cstdlib>
using namespace std;
typedef int ItemType;

class AVLTreeADT {
private:
    struct TreeNode {
        ItemType info;
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;

public:
    AVLTreeADT();  // Constructor   
    ~AVLTreeADT(); // Destructor

    // AVL Tree operation member functions 
    void PutItem(ItemType item);
    void Insert(TreeNode*& tree, ItemType item); // Recursive helper function

    void DeleteItem(ItemType item);
    void Destroy(TreeNode*& tree);

    int Height(TreeNode* T);
    int Difference(TreeNode* T);


    // AVL Tree Rotations to balance
    TreeNode* Balance(TreeNode* T) {
        // Checks and Balances the Subtree T
        int balanceFactor = Difference(T);
        if (balanceFactor > 1) {
            if (Difference(T->left) > 1) {
                return RotateRight(T);
            }
            else {
                return RotateLeftRight(T);
            }
        }

        else if (balanceFactor < -1) {
            if (Difference(T->right) < 0) {
                return RotateLeft(T);
            }
            else {
                return RotateRightLeft(T);
            }
        }

        else {
            return T;
        }
    }

    TreeNode* RotateRight(TreeNode* T) {
        // Returns the tree node resulting from a right rotation
        TreeNode* S = T->left;
        TreeNode* B = S->right;
        S->right = T;
        T->left = B;
        return S;
    }

    TreeNode* RotateLeft(TreeNode* T) {
        // Returns the tree node resulting from a left rotation
        TreeNode* S = T->right;
        TreeNode* B = S->left;
        S->left = T;
        T->right = B;
        return S;
    }

    TreeNode* RotateRightLeft(TreeNode* T) {
        // Return the tree node resulting from a right-left rotation
        TreeNode* S = T->right;
        T->right = RotateRight(S);
        return RotateLeft(T);
    }

    TreeNode* RotateLeftRight(TreeNode* T) {
        // Returns the tree node resulting from a left-right rotation
        TreeNode* S = T->left;
        T->left = RotateLeft(S);
        return RotateRight(T);
    }
};