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

    int node_sum(Node *x){

        // If both Trees are empty, return true
        if (x==nullptr){
            return 0;
        }

        //If both tree exist and their root values are same. Recur for left and right substree
        int left = node_sum(x->left);
        int right = node_sum(x->right);

        int cur = x->key;
        x->key = left+right;

        return cur+x->key;
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
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    sol.node_sum(root);
    sol.preorder(root);
}
