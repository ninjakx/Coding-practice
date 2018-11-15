//https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/
#include <iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;

class node
{
    int data;
    public:
    node *next;
    void createnode(node**root,int num);
    void display(node *root);
    node* reverselk(node *root,int key);
};

void node::createnode(node **root,int num)
{ 
    node * cur = new node;
    cur->data = num;
    if(!cur)
        cur->next = NULL;
    else
    {
        cur->next = *root;
    }
    *root = cur;
}

node* node::reverselk(node *root,int key)
{
    node *cur = new node;
    node *change = root;
    cur = root;
    int count = 0;
    stack <int> st;
    while(cur)
    {
        count++;
        
        if((count%key))
        {
            //cout<<count<<endl;
            st.push(cur->data);
            //cout<<cur->data<<" ";
        }

        else
        {
            st.push(cur->data);
            while(st.size())
            {
                root->data = st.top();
                //cout<<st.top()<<" ";
                st.pop();
                root = root->next;
            }
        }
        cur=cur->next;
    }
    
    return change;
}
void node::display(node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        display(root->next);
    }
}
int main() {
    node *rt = NULL;
    node c;
    //1->2->3->4->5->6->7->8->9
    c.createnode(&(rt),9);
    c.createnode(&(rt),8);
    c.createnode(&(rt),7);
    c.createnode(&(rt),6);
    c.createnode(&(rt),5);
    c.createnode(&(rt),4);
    c.createnode(&(rt),3);
    c.createnode(&(rt),2);
    c.createnode(&(rt),1);
    //c.display(rt);
    node *head=NULL;
    head = c.reverselk(rt,3);
    c.display(head);
	return 0;
}
