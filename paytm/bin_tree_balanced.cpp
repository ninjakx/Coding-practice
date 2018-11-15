//https://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/
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
    int height(node *root,int *ht);

};
int node::height(node *root,int *ht)
{
    int l=0,r=0;
    int lh=0,rh=0;
    if(root == NULL) 
    { 
        *ht =0;
        return 1;
    }
    else 
    {
        l=height(root->left,&lh);
        r=height(root->right,&rh);
    }
    *ht = (lh > rh? lh: rh) + 1;
    if(abs(lh-rh)>1)
        return 1;
    else 
        return 0;
    
}
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

int main() {
    node bin;
    node *rt=NULL;

    bin.binarytree(&rt,1);
    bin.binarytree(&(rt->left),2);
    bin.binarytree(&(rt->right),3);
    bin.binarytree(&((rt->left)->left),4);
    bin.binarytree(&((rt->left)->right),5);
    bin.binarytree(&((rt->right)->left),6);
    bin.binarytree(&(((rt->left)->left)->left),7);
    //bin.binarytree(&(rt->right->left->right),3);
    //bin.binarytree(&(rt->right->left->right->left),4);
    //bin.binarytree(&(rt->right->left->right->left->right),5);
    //bin.binarytree(&(((rt->left)->left)->left),7);


    //bin.display(rt);
    int ht = 0;
    int fl = bin.height(rt,&ht);
    if(fl)
        cout<<"not balanced";
    else
        cout<<"balanced";


    return 0;
}
