#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int key){
    {
        this->key=key;
        this->left=this->right=nullptr;
    }
    }
};


class Solution {
public:

    // Function to print preorder traversal of a given tree
    void preorder(Node* root)
    {
        if (root == nullptr) {
            return;
        }

        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }

    int is_sym(Node *x, Node *y){

        // If both Trees are empty, return true
        if (x==nullptr && y==nullptr){
            return 1;
        }

        return (x!=nullptr && y!=nullptr) && is_sym(x->left, y->right) && is_sym(x->right, y->left);

    }

};


int main()
{
    Solution sol;

    // construct the first tree
    Node *root = nullptr;

    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);

    cout<<sol.is_sym(root->left, root->right);
}
