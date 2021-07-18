#include <iostream>
#include <vector>
#include<algorithm>
#include <map>

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

void vertical_ord(Node *x, int space, int ht, map<int, vector<int>>&m){

    if (x==nullptr)
        return;

    m[space].push_back(x->key);
    vertical_ord(x->left, space-ht, ht, m);
    vertical_ord(x->right, space+ht, ht, m);
    }

};



int main()
{
    Solution sol;
     // Create binary tree shown in above figure
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    root->right->left->right->left = new Node(9);
    root->right->left->right->right = new Node(10);

    map<int, vector<int>> a;
    sol.vertical_ord(root, 0, 1, a);
    for (auto it: a){
        for (auto it2 :a[it.first]){
            cout<<it2<< " ";
        }
        cout<<"\n";
    }
}
