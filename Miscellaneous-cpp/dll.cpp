#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node* prev;
        
        node(int info)
        {
            data = info;
            next = NULL;
            prev = NULL;
        }
};

void insertAtTail(node* &head,int info)
{
    node* n = new node(info);
    if(head == NULL)
    {
        head = n;
        return;
    }
    if(head->next == NULL)
    {
        head->next = n;
        n->prev = head;
        return;
    }

    node* temp = head;
    for(;temp->next!=NULL;temp=temp->next);
    temp->next = n;
    n->prev = temp;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,89);
    insertAtTail(head,23);
    insertAtTail(head,12);
    insertAtTail(head,99);

    
    for(node* temp = head; temp!=NULL; temp = temp->next)
    {
        cout<<temp->data<<endl;
    }
    return 0;
}