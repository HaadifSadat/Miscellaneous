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

node* revK(node*& head,int k)
{
    node* prev = NULL;
    node* cur = head;
    node* nxt;
    int count = 0;
    while (cur!=NULL && k > count)
    {
        nxt = cur->next;
        cur->next = prev;

        prev = cur;
        cur = nxt;
        count++;
    }
    if(nxt != NULL)
        head->next = revK(nxt,k);

    return prev;    
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
    cout<<"\n";
    node* nw = revK(head,2);

    for(node* temp = nw;temp!=NULL;temp = temp->next)
    {
        cout<<temp->info<<" ";
    }

    return 0;
}