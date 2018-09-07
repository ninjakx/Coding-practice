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
    public:
    int data;
    Node* left;
    Node* right;

    Node* createNewnode(int num);
    void display(Node *head_ref);
};
Node* Node::createNewnode(int num)
{
    Node *cur = new Node;
    (cur)->data = num;
    (cur)->left=NULL;
    (cur)->right=NULL;
    return cur;

}
void Node::display(Node *head_ref)
{
	
    if(head_ref)
    {
    cout<<(head_ref)->data<<" ";
    display(head_ref->left);
    display(head_ref->right);
    }

}

int main()
{
    Node *head=NULL;
    Node obj;
    head=obj.createNewnode(1);
    head->left = obj.createNewnode(2);
    head->right = obj.createNewnode(3);
    (head->left)->left = obj.createNewnode(4);
    (head->left)->right = obj.createNewnode(5);
    (head->right)->left = obj.createNewnode(6);
    (head->right)->right = obj.createNewnode(7);
    obj.display(head);
    
    return 0;
}
