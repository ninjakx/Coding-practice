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

int isHtBalanced(Node *x, int &bal_ht){

    if (x==nullptr || bal_ht==0){
        return 0;
    }


    int l_ht = isHtBalanced(x->left, bal_ht);
    int r_ht = isHtBalanced(x->right, bal_ht);

    if (abs(l_ht-r_ht)>1){
        bal_ht = 0;
    }

    return 1+max(l_ht, r_ht);

}

};



int main()
{
    Solution sol;
    /* Construct the following tree
              1
            /   \
           /     \
          2       3
           \     / \
            4   5   6
               / \
              7   8
    */


//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->right = new Node(4);
//    root->right->left = new Node(5);
//    root->right->right = new Node(6);
//    root->right->left->left = new Node(7);
//    root->right->left->right = new Node(8);

    Node *root = new Node(11);
    root->left = new Node(22);
    root->right = new Node(33);
    root->left->left = new Node(44);
    root->left->right = new Node(55);
    root->left->right->left = new Node(77);
    root->right->right = new Node(66);
//    root->right->right->left = new Node(88);
//    root->right->right->left->left = new Node(99);


    int bal_ht = 1;
    sol.isHtBalanced(root, bal_ht);
    if (bal_ht){
        cout<<"balanced";
    }


}
