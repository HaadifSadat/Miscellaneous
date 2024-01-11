#include <iostream>
using namespace std;

class node
{
    public:
    int info;
    node* next;

    node(int data)
    {
        info = data;
        next = NULL;
    }
};

void edins(node* &hd,int data)
{
    node* n = new node(data);
    if(hd == NULL)
    {
        hd = n;
        return;
    }
    node* temp = hd;
    for(;temp->next != NULL;temp = temp->next);
    temp->next = n;
    return;
}
void reverseLL(node*& head)
{
    node* prev,*curr,*nextprt;
    
    prev = NULL;
    curr = head;

    while (curr != NULL)
    {
        nextprt = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextprt;
    }
    head = prev;
}


int main()
{
    node* head = NULL;
    edins(head,5);
    edins(head,53);
    edins(head,15);
    edins(head,58);

    for(node* temp = head;temp!=NULL;temp = temp->next)
    {
        cout<<temp->info<<" ";
    }
    cout<<endl;

    reverseLL(head);

    for(node* temp = head;temp!=NULL;temp = temp->next)
    {
        cout<<temp->info<<" ";
    }
    return 0;
}