/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    friend void operator>>(istream &, Node);
    friend void operator<<(ostream &, Node);
};
void input(Node *&head, int val)
{
    Node *New = new Node[val];
    New->data = val;
    New->next = NULL;

    if (head == NULL)
    {
        head = New;
    }
    else
    {
        Node *ptr;
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = New;
    }
}
void operator<<(ostream &os, Node *head)
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
void operator>>(istream &in, Node *&head)
{
    cout << "\nKeep entering values into the Linked List and if you want to stop enter -1 as input.\n";
    int val;
    cout << "\nEnter a value: ";
    cin >> val;
    while (val != -1)
    {
        input(head, val);

        cout << "\nEnter a value: ";
        cin >> val;
    }

    // int data;
    // char ch;
    // cout << "\nEnter a value: ";
    // cin >> data;
    // input(head, data);
    // cout << "\nDo you want to enter another value?\n(Y/N): ";
    // cin >> ch;
    // while (ch == 'Y' || ch == 'y')
    // {
    //     cout << "\nEnter a value: ";
    //     cin >> data;
    //     input(head, data);
    //     cout << "\nDo you want to enter another value?\n(Y/N): ";
    //     cin >> ch;
    // }
}

int main(void)
{
    Node *Head = NULL;

    cin >> Head;
    cout << Head;

    return 0;
}
// END OF LINE