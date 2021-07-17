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

    void n_node(Node *x, int &co){


        // If both Trees are empty, return true
        if (x==nullptr){
            return;
        }
        if ((x->left!=nullptr)^(x->right!=nullptr)){
            co++;
        }
        n_node(x->left, co);
        n_node(x->right, co);

    }

    int find_level(Node *x){

    if (x==nullptr){
        return 0;
    }

        return 1+max(find_level(x->left), find_level(x->right));

    }

};


int main()
{
    Solution sol;

    Node* root = new Node(15);
//    root->left = new Node(30);
    root->right = new Node(30);
    root->right->left = new Node(25);
    root->right->left->left = new Node(18);
    root->right->left->left->right = new Node(20);


    int co = 1;
    sol.n_node(root, co);
    int lev = sol.find_level(root);
    if (co==lev){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
