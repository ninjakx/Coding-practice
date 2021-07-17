#include <iostream>
#include <utility>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Utility function to print the two-dimensional view of a binary tree using
// reverse inorder traversal
void printBinaryTree(Node* x, Node *y)
{
    // Base case
    if (x == nullptr || y==nullptr) {
        return;
    }

    cout<<x->data<<" "<<y->data<<" ";
    printBinaryTree(x->left, x->right);
    printBinaryTree(y->left, y->right);


}

int main()
{
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    // print binary tree
    cout<<root->data<<" ";
    printBinaryTree(root->left, root->right);

    return 0;
}
