#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;

    node(int data)
    {
        info = data;
        next = NULL;
    }
};

void edins(node *&hd, int data)
{
    node *n = new node(data);
    if (hd == NULL)
    {
        hd = n;
        return;
    }
    node *temp = hd;
    for (; temp->next != NULL; temp = temp->next)
        ;
    temp->next = n;
    return;
}

bool detect(node *&head)
{
    node *fast = head;
    node *slow = head;
    while ( fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast->next == slow->next)
        {
            return true;
        }
    }
    return false;
}

void remove(node*& head)
{
    node *fast = head;
    node *slow = head;
    
    do{
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow != fast);

    fast = head;
    while(fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    return;
}
void makecycle(node *&hd, int pos)
{
    node *temp = hd;
    int count = 0;
    node* str;
    while (temp->next != NULL)
    {
        if(count == pos)
        {
            str = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = str;
}
int main()
{
    node *head = NULL;
    edins(head, 5);
    edins(head, 53);
    edins(head, 15);
    edins(head, 58);
    edins(head, 87);
    makecycle(head,2);

    cout<<detect(head)<<endl;
    remove(head);
    cout<<detect(head)<<endl;

    return 0;
}