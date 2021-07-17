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

    void gen_path(Node *x, vector<int> &path){

        // If both Trees are empty, return true
        if (x==nullptr){
            return ;
        }

        //add the current node to the path
        path.push_back(x->key);

        if (x->left==nullptr && x->right==nullptr) //leaf node
        {
            for (auto it: path){
                cout<<it<<" ";
            }
            cout<<endl;
        }

        gen_path(x->left, path);
        gen_path(x->right, path);

        // remove the current node after the left, and right subtree are done
        path.pop_back();

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
         / \     / \
        4   5   6   7
               /     \
              8       9
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(8);
    root->right->right->right = new Node(9);

    vector<int> path;

    sol.gen_path(root, path);
}
