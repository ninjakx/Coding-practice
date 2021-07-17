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

    void gen_path(Node *x, int l, int &sum){

        // If both Trees are empty, return true
        if (x==nullptr){
            return ;
        }

        if (l%2==0){
            sum = sum + (x->key);
        }

        else{
            sum = sum - (x->key);
        }

        gen_path(x->left, l+1, sum);
        gen_path(x->right, l+1, sum);
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
         /      /  \
        /      /    \
       4      5      6
             / \
            /   \
           7     8
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    int s = 0;

    sol.gen_path(root, 0, s);
    cout<<s;
}
