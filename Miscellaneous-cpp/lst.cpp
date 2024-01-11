#include <iostream>
using namespace std;
// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
struct Node 
{
    int data;
    Node* adrOfnext;
};
typedef struct Node node;

void insAtTail(node* &head,int val)
{

    node *n =(node*)malloc(sizeof(node));
    n->data = val;
    n->adrOfnext = NULL;

    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    for(; temp->adrOfnext != NULL; temp = temp->adrOfnext);

    temp->adrOfnext = n;     
}

void insAthaed(node* &head,int val)
{
    node *n =(node*)malloc(sizeof(node));
    n->data = val;
    // n->adrOfnext = NULL;

    node* temp = head;

    n->adrOfnext = temp;
    head = n;

}
void disp(node*head)
{
    for(node* temp = head; temp != NULL;temp=temp->adrOfnext)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}
int main()
{
    node* head = NULL;

    insAtTail(head,7);
    insAtTail(head,34);
    insAtTail(head,88);
    disp(head);
    insAthaed(head,43);
    disp(head);

    return 0;
}