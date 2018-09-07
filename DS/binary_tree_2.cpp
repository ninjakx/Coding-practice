#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

/*class Node
{
    private:
    int data;
    Node *next;
}*/
int levels;
class Node
{   
    int data;
    int i=0;
    Node* left;
    Node* right;

    public:
    
    void binarytree(Node **root,int num);
    void display(Node *head_ref);
};
void Node::binarytree(Node **root,int num)
{
    Node *cur = new Node;
    //cur = *root;
    //if (!cur)
    {
    (cur)->data = num;
    (cur)->left=NULL;
    (cur)->right=NULL;
    *root = cur;
    }
    //cout<<"j";
    //else{
    if(i < 2*levels+1)
    {i++;
    
    binarytree(&(cur->left),++num);
    //cout<<num;
    binarytree(&(cur->right),++num);
    }
    //}
}
void Node::display(Node *head_ref)
{
	
    if(head_ref->left!=NULL || head_ref->right!=NULL)
    {
    cout<<(head_ref)->data<<" ";
    display(head_ref->left);
    display(head_ref->right);
    }

}

int main()
{
    Node *head=NULL;
    int lev = 3;
    levels = lev;
    Node obj;
    obj.binarytree(&head,1);
    //cout<<head->data;
    obj.display(head);
    
    return 0;
}
