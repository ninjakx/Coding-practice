#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
#include <cmath>

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

int check_bin(Node *x, int &co){

    if (x==nullptr){
        return 0;
    }

    co++;
    return 1 + max(check_bin(x->left, co), check_bin(x->right, co));

}

};



int main()
{
    Solution sol;
{
    /* Construct the following tree
             1
           /   \
          /     \
         2       3
        / \     / \
       4   5   6   7
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int co = 1;
    int d = sol.check_bin(root, co);
    int n_co = pow(d,2)-1;

    if (n_co == co){
        cout<<"binary";
    }
    else{
        cout<<"non binary";
    }

    }
}
