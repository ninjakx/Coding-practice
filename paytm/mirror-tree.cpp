//https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    int data;
    public:
    node *left=NULL;
    node *right=NULL;
    void binarytree(node **root,int num);
    void display(node *head_ref);
    node* mirrortree(node *root);

};
void node::binarytree(node **root,int num)
{
    node *cur = new node;
    {
        cur->data = num;
        cur->left = NULL;
        cur->right = NULL;
        *root = cur;
    }
}
void node::display(node *head_ref)
{
  if(head_ref)
    {
    display(head_ref->left);
    cout<<(head_ref)->data<<" ";
    display(head_ref->right);
    }

}
node* node::mirrortree(node *root)
{
    if(root)
    {
    node * temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirrortree(root->left);
    mirrortree(root->right);
    }
    return root;
}
int main() {
    node bin;
    node *rt=NULL;

    bin.binarytree(&rt,1);
    bin.binarytree(&(rt->left),2);
    bin.binarytree(&((rt->left)->left),4);
    bin.binarytree(&((rt->left)->right),5);
    bin.binarytree(&(rt->right),3);

    bin.display(rt);
    cout<<"\n";
    node *head = bin.mirrortree(rt);
    bin.display(head);

    return 0;
}
