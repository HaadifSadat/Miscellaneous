#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        next = NULL;
        data = val;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    // n->next = NULL; already taken care by the con
}

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void delAtnode(node *&head, int val)
{
    node *temp = head;
    node *str = NULL;
    for (; temp->data != val; temp = temp->next)
    {
        str = temp;
    }

    str->next = temp->next;

    // cout<<temp->data<<endl;
}
void disp(node *head)
{
    while (head != NULL)
    {
        // cout<<head<<endl;
        cout << head->data << endl;
        head = head->next;
    }
    cout << endl;
}
void ordins(node *&head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    else if(head->data >= val)
    {
        n->next = head;
        head = n;
    }
    else
    {
        node* temp = head;
        for(; temp->next != NULL; temp = temp->next);
        
        temp->next = n;
    }
}
int main()
{
    node *head = NULL;

    // insertAtTail(head, 45);
    // insertAtTail(head, 65);
    // insertAtTail(head, 75);
    // insertAtTail(head, 975);
    // insertAthead(head, 546);
    // disp(head);
    // insertAthead(head, 546);
    // disp(head);
    // delAtnode(head, 75);
    // disp(head);

    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        ordins(head, n);
    }

    disp(head);

    return 0;
}
