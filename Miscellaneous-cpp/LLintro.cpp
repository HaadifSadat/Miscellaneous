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

void frontins(node* &hd,int data)
{
    node* n = new node(data);
    if(hd == NULL)
    {
        hd = n;
        return;
    }
    node* temp = hd;
    n->next = temp;
    temp = n;
    return;
}
void orderedin(node* &hd,int data)
{
    node* n = new node(data);
    if(hd == NULL)
    {
        hd = n;   
        return;
    }
    else if(data < hd->info)
    {
        frontins(hd,data);
        return;
    }
    else if(hd->next == NULL)
    {
        edins(hd,data);
        return;
    }
    node* temp = hd;
    node* prev = NULL;
    while(temp != NULL && data < temp->info && prev->info >= data)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = n;
    n->next = temp;
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
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

    // frontins(head,67);
    // frontins(head,7);
    // frontins(head,9);
    // frontins(head,45);

    // cout<<"\n";

    // for(node* temp = head;temp!=NULL;temp = temp->next)
    // {
    //     cout<<temp->info<<" ";
    // }

    orderedin(head,69);
    orderedin(head,89);
    orderedin(head,76);
    orderedin(head,71);
    orderedin(head,90);

    for(node* temp = head; temp!=NULL; temp = temp->next)
    {
        cout<<temp->info<<" ";
    }
    
    
    return 0;
}