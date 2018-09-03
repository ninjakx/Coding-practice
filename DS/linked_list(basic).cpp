#include <iostream>
#include <string>
using namespace std;
struct Node
{
    string data;
    struct Node *next;
    
};


void createNewnode(struct Node **head_ref,string key)
{
    
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    *head_ref = temp;
}


void append(struct Node **head_ref,string key)
{
    
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = *head_ref;
    *head_ref = temp;
}


void insertat(struct Node **head_ref,string key,int pos)
{
    
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
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


void end(struct Node **head_ref,string key)
{
    
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    Node *link = *head_ref;
    temp->data = key;
    temp->next = NULL;
    while(link->next)
    {
       link = link->next; 
    }
    link->next = temp;
}

void del_beg(struct Node **head_ref)
{
    Node *temp = *head_ref;
    temp=temp->next;
    *head_ref = temp;
}

void del_end(struct Node **head_ref)
{
    Node *temp = *head_ref;
    while(temp->next)
    {
       temp = temp->next; 
    }
    free(temp);
}

void del_at(struct Node **head_ref,int pos)
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

    struct Node *head_ref=NULL;
    
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
	for(int i=0;i<size;i++)
	{
	    if (!head_ref)
	        createNewnode(&head_ref,"dog"+to_string(i));
	    else 
	        end(&head_ref,"dog"+to_string(i));
	        
	}

	struct Node *change = new Node;
	change = head_ref;
	while(change!=NULL)
	{
	    cout<<change->data<< " ";
	    change = change->next;
	    
	}
	return 0;
}
