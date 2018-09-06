#include <iostream>
#include <string>
using namespace std;
class Node
{
    public:
    
    string data;
    Node *next;
    
};

class linkedlist
{
    public:
    void createNewnode(Node **head_ref,string key);
    void append(Node **head_ref,string key);
    void end(Node **head_ref,string key);
    void insertat(Node **head_ref,string key,int pos);
    void del_beg(Node **head_ref);
    void del_end(Node **head_ref);
    void del_at(Node **head_ref,int pos);
};

void linkedlist::createNewnode(Node **head_ref,string key)
{
    
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    *head_ref = temp;
}


void linkedlist::append(Node **head_ref,string key)
{
    
    Node *temp = new Node;
    temp->data = key;
    temp->next = *head_ref;
    *head_ref = temp;
}


void linkedlist::insertat(struct Node **head_ref,string key,int pos)
{
    
    Node *temp = new Node;
    Node *link = *head_ref;
    while(--pos)
    {
        link = link->next;
    }
    Node *posat = link;
    temp->data = key;
    temp->next = posat->next;
    link->next = temp;
    
}


void linkedlist::end(Node **head_ref,string key)
{
    
    Node *temp = new Node;
    Node *link = *head_ref;
    temp->data = key;
    temp->next = NULL;
    while(link->next)
    {
       link = link->next; 
    }
    link->next = temp;
}

void linkedlist::del_beg(Node **head_ref)
{
    Node *temp = *head_ref;
    temp=temp->next;
    *head_ref = temp;
}

void linkedlist::del_end(Node **head_ref)
{
    Node *temp = *head_ref;
    while(temp->next)
    {
       temp = temp->next; 
    }
    free(temp);
}

void linkedlist::del_at(Node **head_ref,int pos)
{   
    Node *temp = *head_ref;
    while(--pos)
    {
       temp = temp->next; 
    }
    Node *link = temp;
    temp->next = (link->next)->next;
}


int main() {

    Node *head_ref=NULL;
    
	/*createNewnode(&head_ref,"d");
	append(&head_ref,"c");
	append(&head_ref,"b");
	append(&head_ref,"a");
	insertat(&head_ref,"X",3);
	end(&head_ref,"e");
	del_at(&head_ref,3-1);
	del_beg(&head_ref);
	del_end(&head_ref);*/
	int size = 10;
	linkedlist lst;
	for(int i=0;i<size;i++)
	{
	    if (!head_ref)
	        lst.createNewnode(&head_ref,"dog"+to_string(i));
	    else 
	        lst.end(&head_ref,"dog"+to_string(i));
	        
	}

	Node *change = new Node;
	change = head_ref;
	while(change!=NULL)
	{
	    cout<<change->data<< " ";
	    change = change->next;
	    
	}
	return 0;
}
