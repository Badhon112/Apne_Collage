#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
    Node(int val)
    {
        data = val;
        Next = NULL;
    }
};
void InsertAtTell(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = n;
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    InsertAtTell(head, 1);
    InsertAtTell(head, 3);
    InsertAtTell(head, 4);
    InsertAtTell(head, 8);
    InsertAtTell(head, 9);
    Display(head);
}