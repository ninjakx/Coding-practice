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

    bool isidentical(Node *x, Node *y){

        // If both Trees are empty, return true
        if (x==nullptr && y==nullptr){
            return true;
        }

        //If both tree exist and their root values are same. Recur for left and right substree
        return ((x&&y) && (x->key==y->key) && isidentical(x->left, y->left)
                && isidentical(x->right, y->right));
    }




};


int main()
{
    Solution sol;

    // construct the first tree
    Node *x = nullptr;

    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);

    // construct the second tree
    Node* y = nullptr;

    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(13);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    cout<<sol.isidentical(x,y);
}
