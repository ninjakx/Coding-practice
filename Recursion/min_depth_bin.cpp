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


int find_level(Node *x){

    if (x==nullptr){
        return 0;
    }
    return 1+min(find_level(x->left), find_level(x->right));

    }

};


int main()
{
    Solution sol;

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);
    root->left->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->left = new Node(11);
    root->left->left->right->right = new Node(12);


    int lev = sol.find_level(root);
    cout<<lev;
}
