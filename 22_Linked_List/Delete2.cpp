#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertionTell(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void Delete(Node *&head, int val)
{
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    Node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    InsertionTell(head, 10);
    InsertionTell(head, 20);
    InsertionTell(head, 30);
    InsertionTell(head, 40);
    Delete(head, 20);
    Display(head);
}